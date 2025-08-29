import ida_name
import idaapi
import idautils
import idc
import ida_funcs
import ida_segment
import re
sink_str_map=["writeToFile:atomically:","URLByAppendingPathComponent:","fsctl"]
callgraphs=[]
def extract_objc_method(signature):
    """ 从 Objective-C 方法调用格式中提取方法名 """
    match = re.search(r"[\+\-]\[[\w\d_]+ ([\w\d_]+(?::[\w\d_:]*)?)\]", signature)
    if match:
        return match.group(1)
    return None
def is_executable(ea):
    """ 判断地址所属段是否可执行 """
    seg = ida_segment.getseg(ea)
    if seg:
        if seg.perm & ida_segment.SEGPERM_EXEC:
            print(f"[INFO] 地址 0x{ea:X} 位于可执行段: {ida_segment.get_segm_name(seg)}")
            return True
        else:
            print(f"[INFO] 地址 0x{ea:X} 位于非可执行段: {ida_segment.get_segm_name(seg)}")
            return False
    else:
        print(f"[ERROR] 0x{ea:X} 不属于任何段")
        return None
def find_func_by_name(target_name):
    """ 通过函数名获取地址 """
    for func_ea in idautils.Functions():
        func_name = ida_name.get_ea_name(func_ea)
        if func_name and (target_name in func_name and "objc" in func_name):
            print(f"[FOUND] {func_name} 地址: 0x{func_ea:X}")
            return func_ea  # 返回第一个匹配的地址
    print(f"[ERROR] 未找到函数: {target_name}")
    return None

def deepSearchCallChain(source,sink_addr,callgraph,final_callgraphs,level,last_testlist):
    isBlock_layout=False
    if level>10:
        return
    func_name = ida_funcs.get_func_name(sink_addr)
    if func_name==None or sink_addr==None:
        return
    if func_name==source:
        # 这样python引用会变动,所以把值copy出来再说
        w2=[f for f in callgraph]
        final_callgraphs.append(w2)
        return
    Refs = idautils.CodeRefsTo(sink_addr, True)
    testlist=[ref for ref in Refs]
    #代表是oc方法，需要去找objc_msgSend_saveDatabaseWithInfo_thumbnails_
    if func_name!=None and len(testlist)==0 and ("[" in func_name and "]" in func_name):
        signature = func_name
        method_name = extract_objc_method(signature)
        #oc_method_name=method_name.replace(":","_")
        #找到对应的函数
        #if method_name==None:
            #print("bug")
        func_ea=find_func_by_name(method_name)
        if func_ea==None:
            return
        #相当于找到一个代理函数，再往上走
        Refs = idautils.CodeRefsTo(func_ea, True)
        testlist = [ref for ref in Refs]
    #说明是一个data的引用 说明是一个block layout调用,做一个标记
    elif len(testlist)==0:
        func = ida_funcs.get_func(sink_addr)
        if func is not None:
            Refs = idautils.DataRefsTo(func.start_ea)
            testlist = [ref for ref in Refs]
            isBlock_layout=True
    if testlist!=last_testlist:
        for xref in testlist:
            func = idaapi.get_func(xref)
            if func:
                next_func_addr = func.start_ea
                #代表这个函数跳转到下一个的话需要找block layout
                if isBlock_layout==True:
                    callgraph.append("Block_"+str(hex(next_func_addr)))
                else:
                    callgraph.append(hex(next_func_addr))
                print(f"引用地址: 0x{next_func_addr:X}")
                deepSearchCallChain(source,next_func_addr,callgraph,final_callgraphs,level+1,testlist)
                callgraph.pop()
def find_string_addr(string_name):
    """ 查找字符串的引用地址 """
    str_addr=-1
    for string_item in idautils.Strings():
        str = idc.get_strlit_contents(string_item.ea)
        str=str.decode("utf-8")
        if str==string_name:
            str_addr = string_item.ea
    #print(f"[INFO] 字符串 {string_name} 地址: 0x{str_ea:X}")
    return str_addr

#因为拿到的是字符串，这里先搜索到第一个函数
def find_sinkfunc_addr(str_addr,sinks):
    if is_executable(str_addr)==True:
        func=ida_funcs.get_func(str_addr)
        if func is not None:
            sinks.add(func.start_ea)
    for xref in idautils.DataRefsTo(str_addr):
        print(f"引用地址: 0x{xref:X}")
        find_sinkfunc_addr(xref,sinks)
def find_function_by_name(target_name):
    """ 遍历所有函数，匹配目标名称 """
    for func_ea in idautils.Functions():
        func_name = ida_name.get_ea_name(func_ea)
        if func_name and target_name in func_name:
            print(f"[FOUND] {func_name} 地址: 0x{func_ea:X}")
            return func_ea  # 返回第一个匹配的地址
    print(f"[ERROR] 未找到函数: {target_name}")
    return None
def find_sinkfunc_NonObjc(func_name,sinks):
    func = find_function_by_name(func_name)
    if func!=None:
        sinks.add(func)


#拿到call graph
def getCallGraph_test(source,sink_List):
    final_callgraphs=[]
    ##sink点开始 就是一些文件操作api，很多都是objc调用的，最好的方式还是字符串引用上
    #遍历每一个可能的sink点，然后往上到source点，这里source点暂时先自己给一个，注意目前都是函数字符串什么的
    #这里需要注意就是文件api，当不是obj调用的时候，用字符串是找不到的
    for sink_str in sink_str_map:
        sinks = set()
        sink_addr=find_string_addr(sink_str)
        if sink_addr!=-1:
            #拿到字符串对应到的第一个函数
            find_sinkfunc_addr(sink_addr,sinks)
            sinks=list(sinks)
        else:
            #说明sink点并不是一个objc函数
            find_sinkfunc_NonObjc(sink_str,sinks)
            sinks = list(sinks)
        #用这个sinks拿到的去生成一个callgraph出来，注意是list，所以我们遍历一下 这里坑的是oc，并没有连接好，但是鼠标点击的话会自动跳转，然后再构造一个xref
        for sink in sinks:
            tmp_callgraph=[]
            tmp_callgraph.append(hex(sink))
            deepSearchCallChain(source,sink,tmp_callgraph,final_callgraphs)
    return final_callgraphs
    #deepSearchCallChain(source,sink_addr,[])
    #
#拿到call graph
def getCallGraph(source,sink_List):
    final_callgraphs=[]
    #sinks=[]
    init_level=0
    sinks=list(set(sink_List))
    for sink in sinks:
        tmp_callgraph=[]
        tmp_callgraph.append(hex(sink))
        deepSearchCallChain(source,sink,tmp_callgraph,final_callgraphs,init_level,[])
    return final_callgraphs



