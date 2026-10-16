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
    """Extract the method name from an Objective-C method signature."""
    match = re.search(r"[\+\-]\[[\w\d_]+ ([\w\d_]+(?::[\w\d_:]*)?)\]", signature)
    if match:
        return match.group(1)
    return None
def is_executable(ea):
    """Check whether the segment containing the address is executable."""
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
    """Find an address by function name."""
    for func_ea in idautils.Functions():
        func_name = ida_name.get_ea_name(func_ea)
        if func_name and (target_name in func_name and "objc" in func_name):
            print(f"[FOUND] {func_name} 地址: 0x{func_ea:X}")
            return func_ea  # Return the address of the first match.
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
        # Copy the values so later changes to the list do not affect this path.
        w2=[f for f in callgraph]
        final_callgraphs.append(w2)
        return
    Refs = idautils.CodeRefsTo(sink_addr, True)
    testlist=[ref for ref in Refs]
    # This is an Objective-C method; look for objc_msgSend_saveDatabaseWithInfo_thumbnails_.
    if func_name!=None and len(testlist)==0 and ("[" in func_name and "]" in func_name):
        signature = func_name
        method_name = extract_objc_method(signature)
        #oc_method_name=method_name.replace(":","_")
        # Find the corresponding function.
        #if method_name==None:
            #print("bug")
        func_ea=find_func_by_name(method_name)
        if func_ea==None:
            return
        # Treat this as a proxy function and trace callers upward.
        Refs = idautils.CodeRefsTo(func_ea, True)
        testlist = [ref for ref in Refs]
    # A data reference indicates a block layout call; mark it.
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
                # Look for a block layout when this function leads to the next one.
                if isBlock_layout==True:
                    callgraph.append("Block_"+str(hex(next_func_addr)))
                else:
                    callgraph.append(hex(next_func_addr))
                print(f"引用地址: 0x{next_func_addr:X}")
                deepSearchCallChain(source,next_func_addr,callgraph,final_callgraphs,level+1,testlist)
                callgraph.pop()
def find_string_addr(string_name):
    """Find the address of a matching string literal."""
    str_addr=-1
    for string_item in idautils.Strings():
        str = idc.get_strlit_contents(string_item.ea)
        str=str.decode("utf-8")
        if str==string_name:
            str_addr = string_item.ea
    #print(f"[INFO] String {string_name} address: 0x{str_ea:X}")
    return str_addr

# Given a string, first find a function that references it.
def find_sinkfunc_addr(str_addr,sinks):
    if is_executable(str_addr)==True:
        func=ida_funcs.get_func(str_addr)
        if func is not None:
            sinks.add(func.start_ea)
    for xref in idautils.DataRefsTo(str_addr):
        print(f"引用地址: 0x{xref:X}")
        find_sinkfunc_addr(xref,sinks)
def find_function_by_name(target_name):
    """Iterate over all functions to find a matching name."""
    for func_ea in idautils.Functions():
        func_name = ida_name.get_ea_name(func_ea)
        if func_name and target_name in func_name:
            print(f"[FOUND] {func_name} 地址: 0x{func_ea:X}")
            return func_ea  # Return the address of the first match.
    print(f"[ERROR] 未找到函数: {target_name}")
    return None
def find_sinkfunc_NonObjc(func_name,sinks):
    func = find_function_by_name(func_name)
    if func!=None:
        sinks.add(func)


# Build the call graph.
def getCallGraph_test(source,sink_List):
    final_callgraphs=[]
    # Start from sinks, mostly file-operation APIs. Many are Objective-C calls,
    # so string references are usually the best way to locate them.
    # Traverse upward from each possible sink to the source. For now, specify
    # the source manually; these inputs are currently function names or strings.
    # String lookup cannot find file APIs that are not Objective-C calls.
    for sink_str in sink_str_map:
        sinks = set()
        sink_addr=find_string_addr(sink_str)
        if sink_addr!=-1:
            # Find the first function associated with the string.
            find_sinkfunc_addr(sink_addr,sinks)
            sinks=list(sinks)
        else:
            # This sink is not an Objective-C function.
            find_sinkfunc_NonObjc(sink_str,sinks)
            sinks = list(sinks)
        # Build a call graph for each sink in the list. Objective-C calls may
        # lack graph edges, but IDA can navigate them and create an xref.
        for sink in sinks:
            tmp_callgraph=[]
            tmp_callgraph.append(hex(sink))
            deepSearchCallChain(source,sink,tmp_callgraph,final_callgraphs)
    return final_callgraphs
    #deepSearchCallChain(source,sink_addr,[])
    #
# Build the call graph.
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



