import tempfile
import shutil
import os
import re
import ast
from fileinput import close
from tempfile import tempdir
import regex
import time
import requests
import ida
import json

import ida_funcs
import ida_graph
import ida_range
#headlessida = HeadlessIda("/Applications/IDA Professional 9.0.app/Contents/MacOS", noEnt_path)
# Import IDA Modules (make sure you have initialized HeadlessIda first)
import idautils
import ida_name
import idaapi
import idc
import ida_bytes
import ida_ida
import idaapi
import subprocess
import shlex
import plistlib
import ida_hexrays as hr
import CallGraph.HandleCallGraph
from CallGraph.HandleCallGraph import extract_objc_method
from CallGraph.HandleCallGraph import getCallGraph

NO_DST_OPCODES = {
    hr.m_call,  # 调用函数
    hr.m_icall, # 间接调用
    hr.m_ret,   # 函数返回
    #hr.m_jmp,   # 直接跳转
    hr.m_ijmp,  # 间接跳转
    hr.m_jcnd,  # 条件跳转
    hr.m_push,  # 压栈
    hr.m_pop,   # 出栈
    hr.m_goto,  # GOTO 语句
    hr.m_und    # 未定义指令
}
def combineDataFlowRes():
    #读取LLM4Sec/dataflowRes/taint_analysis_results_*.json
    dataflow_res_dir = "LLM4Sec/dataflowRes"
    """
    Count and consolidate data flow analysis results from JSON files in the dataflow results directory.
    Combines all individual JSON files into a single consolidated JSON file.
    """
    consolidated_results = {}
    file_count = 0
    
    # Check if directory exists
    if not os.path.exists(dataflow_res_dir):
        print(f"Error: Directory {dataflow_res_dir} does not exist")
        return
    
    # Iterate through all files in the directory
    for filename in os.listdir(dataflow_res_dir):
        if filename.endswith('.json') and filename.startswith('taint_analysis_results_'):
            file_path = os.path.join(dataflow_res_dir, filename)
            try:
                with open(file_path, 'r') as json_file:
                    data = json.load(json_file)
                    # Merge data into consolidated results
                    consolidated_results.update(data)
                    file_count += 1
                    print(f"Processed: {filename}")
            except Exception as e:
                print(f"Error processing {filename}: {e}")
    
    # Write consolidated results to a new JSON file
    if file_count > 0:
        output_path = os.path.join(dataflow_res_dir, "consolidated_taint_analysis_results.json")
        try:
            with open(output_path, 'w') as output_file:
                json.dump(consolidated_results, output_file, indent=4)
            print(f"Successfully consolidated {file_count} files into {output_path}")
        except Exception as e:
            print(f"Error writing consolidated results: {e}")
    else:
        print("No JSON files found to consolidate")
    
ent_sink_map={}
def init_ent_sink_map():
    """
    Initialize a mapping between entitlements and their corresponding sink functions.
    Reads from a JSON file containing entitlement to sink mappings.
    
    Returns:
        dict: A dictionary mapping entitlement keys to lists of sink functions
    """
    global ent_sink_map
    try:
        # Path to the JSON file containing entitlement to sink mappings
        #json_path = "/Users/yenkoc/Documents/GitHub/macOS_tool/UserSpace/python3/LLM4Sec/SinkList_Second/mapEntToSinkList/combined_ent_to_sink_list.json"
        json_path  = "/Users/yenkoc/Documents/GitHub/macOS_tool/UserSpace/python3/LLM4Sec/SinkList_Second/mapEntToSinkList/combined_result_revised_sink_list_second.json"
        
        # Check if the file exists
        if not os.path.exists(json_path):
            print(f"Error: Entitlement sink map file not found at {json_path}")
            return {}
        
        # Read and parse the JSON file
        with open(json_path, 'r') as file:
            entitlement_sink_map = json.load(file)
            
        print(f"Successfully loaded entitlement to sink mappings with {len(entitlement_sink_map)} entries")
        ent_sink_map= entitlement_sink_map
        
    except json.JSONDecodeError as e:
        print(f"Error parsing JSON file: {e}")
        return {}
    except Exception as e:
        print(f"Unexpected error loading entitlement sink map: {e}")
        return {}


def extract_entitlements(binary_path):
    """
    Extract entitlements from a signed macOS binary using codesign.

    :param binary_path: Path to the binary file
    :return: Dictionary containing the entitlements, or None if extraction failed
    """
    try:
        # Construct the codesign command to extract entitlements
        cmd = ["codesign", "-d", "--entitlements", ":-", binary_path]

        # Execute command
        result = subprocess.run(cmd, check=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)

        # Check if we got output
        if result.stdout:
            # The output from codesign is in XML/plist format

            try:

                # Skip the first line which usually contains a comment
                xml_content = result.stdout.strip()
                if "<?xml" not in xml_content.split('\n')[0]:
                    xml_content = '\n'.join(xml_content.split('\n')[1:])

                # Parse the plist data
                entitlements = plistlib.loads(xml_content.encode('utf-8'))

                result_list = process_entitlements(entitlements)
                # print(result_list)
                return result_list
            except Exception as e:
                print(f"Error parsing entitlements: {e}")
                return None
        else:
            # Check stderr for error messages
            if "code object is not signed" in result.stderr:
                print(f"Binary is not signed: {binary_path}")
            else:
                print(f"No entitlements found or other error: {result.stderr}")
            return None

    except subprocess.CalledProcessError as e:
        print(f"Error running codesign: {e.stderr}")
        return None
    except Exception as e:
        print(f"Unexpected error: {e}")
        return None
def classdumpcccc(input_file):
    # 利用一个class-dumpc的文件
    # 构造二进制文件路径
    binary_dir = "/Users/yenkoc/Documents/GitHub/macOS_tool/UserSpace/python3/classdumpc/Release"
    binary_name = "classdumpc"
    binary_path = os.path.join(binary_dir, binary_name)

    # 检查二进制文件是否存在
    if not os.path.exists(binary_path):
        print(f"Error: Binary file '{binary_path}' not found.")
        return

    # 检查输入文件是否存在
    if not os.path.exists(input_file):
        print(f"Error: Input file '{input_file}' not found.")
        return

    # 使用 subprocess 运行二进制文件
    try:
        #print(f"Running binary: {binary_path} with input file: {input_file}")

        # 执行二进制文件，并捕获其输出
        result = subprocess.run(
            [binary_path, input_file],  # 二进制文件和参数
            stdout=subprocess.PIPE,  # 捕获标准输出
            stderr=subprocess.PIPE,  # 捕获错误输出
            text=True  # 将输出解码为字符串
        )
        return result.stdout
    except Exception as e:
        print(f"Error occurred while processing: {e}")
def dump_exported_apis_single(binary_path):
    return_content=classdumpcccc(binary_path)
    if return_content==None:
        return
    return_content_list=return_content.split("\n")
    exportAPI_num=0
    protocol_start=0
    writefile_content_list=[]
    for return_line in return_content_list:
        if return_line.startswith("@protocol") and return_line!="@protocol NSObject" and return_line!="@protocol NSCoding" and return_line!="@protocol NSXPCListenerDelegate <NSObject>" and "JSExport" not in return_line and "NSSecureCoding" not in return_line and "NSURLSession" not in return_line and "Delegate" not in return_line and "View" not in return_line:
            #if return_line.startswith("@protocol"):
            protocol_start=1
            writefile_content_list.append(return_line)
        if protocol_start==1:
            if len(return_line)!=0 and return_line[0]=="-" and "listener" not in return_line:
                writefile_content_list.append(return_line)
                exportAPI_num+=1
        if return_line.startswith("@end") and protocol_start==1:
            writefile_content_list.append(return_line)
            protocol_start=0
    #final_res+=exportAPI_num
    item=binary_path.split("/")[-1]
    #写入文件看看情况
    # Create directory if it doesn't    exist
    #os.makedirs("./LLM4Sec/Data/exported_apis/groundtruth_NSXPC/", exist_ok=True)
    outputfile_path="/Users/yenkoc/Documents/GitHub/macOS_tool/UserSpace/python3/LLM4Sec/exportedAPI/groundtruth_NSXPC/"
    f = open(outputfile_path+item, 'a')
    #写入二进制路径
    #f.write("Service Path:\n")
    #f.write(f"{no_check_path}\n")
    #f.write("\n")
    #f.write("Service Exported Protocols:\n")
    #写入协议
    for yk in writefile_content_list:
        f.write(f"{yk}\n")
    #f.write("\n")
    f.close()
def dump_exported_apis_all():
    #读取groundtruth_NSXPC_Nocheck.txt
    with open("LLM4Sec/Data/groundtruth_NSXPC_Nocheck.txt", "r") as file:
        for line in file:
            line = line.strip()
            if line:
                #提取出二进制文件
                dump_exported_apis_single(line)
def has_dst_opcode(insn):
    """ 根据 `opcode` 判断 `minsn_t` 是否有 `dst` """
    return insn.opcode not in NO_DST_OPCODES

def new_init_env(binary_path):
    #tempdir = tempfile.mkdtemp()
    #shutil.copy(binary_path, tempdir)
    if checkfileExist(binary_path):
        tempdir_list=binary_path.split("/")[:-1]
        tempdir=""
        for tt in tempdir_list:
            tempdir+="/"+tt
        tempdir=tempdir[1:]
        ida.open_database(binary_path, True)
        return tempdir
    else:
        return ""
    return ""
# 提取arm形式包括arm64，arm64的二进制从fat二进制里面，提升下我的代码
def extract_arm_binary_from_fat(binary_path, output_path=None):
    """
    Extract ARM binary (arm64/arm64e) from a Fat binary file.
    Only extracts if input is actually a Fat binary.

    :param binary_path: Path to the binary file
    :param output_path: Optional output path for extracted binary. If None, creates in same directory.
    :return: Path to extracted binary if successful, original path if not Fat binary, None if failed
    """
    try:
        # Get binary info
        info = lipo_binary_info(binary_path)
        if not info:
            print("Could not get binary info")
            return None

        # Check if it's a Fat binary
        if "Non-fat" in info:
            print("Input is not a Fat binary, using original file")
            return binary_path

        # Determine architecture
        arch = None
        if "arm64e" in info:
            arch = "arm64e"
        elif "arm64" in info:
            arch = "arm64"
        else:
            print("No ARM architecture found in binary")
            return None

        # Set output path if not provided
        if not output_path:
            temp_dir = tempfile.mkdtemp()
            output_path = os.path.join(temp_dir, f"{arch}_{os.path.basename(binary_path)}")

        # Extract the architecture
        cmd = ["lipo", "-thin", arch, binary_path, "-output", output_path]
        result = subprocess.run(cmd, check=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)

        if checkfileExist(output_path):
            print(f"Successfully extracted {arch} binary to: {output_path}")
            return output_path
        else:
            print("Failed to extract binary")
            return None

    except subprocess.CalledProcessError as e:
        print(f"Error running lipo: {e.stderr}")
        return None
    except Exception as e:
        print(f"Unexpected error: {e}")
        return None

def process_entitlements(entitlements_dict):
    """
    Process entitlements dictionary and convert array values into individual key-value pairs.

    :param entitlements_dict: Dictionary containing entitlements
    :return: List of strings in format "key:value"
    """
    result = []

    if not entitlements_dict:
        return result

    for key, value in entitlements_dict.items():
        if isinstance(value, list) or isinstance(value, tuple):
            # If value is an array, create individual entries for each item
            for item in value:
                result.append(f"{key}:{item}")
        elif "com.apple.security.temporary-exception.files.home-relative-path.read-write"==key and "Images" in value:
            result.append(f"{key}:{value}")
        else:
            # For non-array values, just add the key-value pair
            #result.append(f"{key}:{value}")
            result.append(f"{key}")
    return result


def extract_entitlements(binary_path):
    """
    Extract entitlements from a signed macOS binary using codesign.

    :param binary_path: Path to the binary file
    :return: Dictionary containing the entitlements, or None if extraction failed
    """
    try:
        # Construct the codesign command to extract entitlements
        cmd = ["codesign", "-d", "--entitlements", ":-", binary_path]

        # Execute command
        result = subprocess.run(cmd, check=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)

        # Check if we got output
        if result.stdout:
            # The output from codesign is in XML/plist format

            try:

                # Skip the first line which usually contains a comment
                xml_content = result.stdout.strip()
                if "<?xml" not in xml_content.split('\n')[0]:
                    xml_content = '\n'.join(xml_content.split('\n')[1:])

                # Parse the plist data
                entitlements = plistlib.loads(xml_content.encode('utf-8'))

                result_list = process_entitlements(entitlements)
                # print(result_list)
                return result_list
            except Exception as e:
                print(f"Error parsing entitlements: {e}")
                return None
        else:
            # Check stderr for error messages
            if "code object is not signed" in result.stderr:
                print(f"Binary is not signed: {binary_path}")
            else:
                print(f"No entitlements found or other error: {result.stderr}")
            return None

    except subprocess.CalledProcessError as e:
        print(f"Error running codesign: {e.stderr}")
        return None
    except Exception as e:
        print(f"Unexpected error: {e}")
        return None
def lipo_binary_info(input_file):
    """
    使用 lipo 提取 Fat Binary 的特定架构。

    :param input_file: 原始二进制文件路径
    :param arch: 要提取的架构（如 arm64e）
    :param output_file: 输出文件路径
    """
    try:
        # 构造 lipo 命令
        cmd = ["lipo", "-info", input_file]

        # 执行命令
        result = subprocess.run(cmd, check=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)

        #print(f"Successfully extracted '{arch}' architecture to: {output_file}")
        if result.stdout:
            print("Command output:", result.stdout)
            return result.stdout
        if result.stderr:
            print("Command error:", result.stderr)

    except subprocess.CalledProcessError as e:
        print(f"Error occurred: {e.stderr}")
    except Exception as e:
        print(f"Unexpected error: {e}")
def checkfileExist(program_path):
    if os.path.exists(program_path):
        #print(f"The file at {file_path} exists.")
        return True
    else:
        #print(f"The file at {file_path} does not exist.")
        return False
def init_env(binary_path,isFatBinary):
    tempdir = tempfile.mkdtemp()
    #shutil.copy(noEnt_path, tempdir)
    if isFatBinary:
        info=lipo_binary_info(binary_path)
        if "arm64e" in info:
            arm64_binary = os.path.join(tempdir, "arm64_" + os.path.basename(binary_path))
            if checkfileExist(binary_path):
                os.system(f"lipo -thin arm64e {binary_path} -output {arm64_binary}")
            else:
                return ""
        elif "arm64" in info:
            arm64_binary = os.path.join(tempdir, "arm64_" + os.path.basename(binary_path))
            if checkfileExist(binary_path):
                os.system(f"lipo -thin arm64 {binary_path} -output {arm64_binary}")
            else:
                return ""

    else:
        arm64_binary=binary_path
    if checkfileExist(arm64_binary):
        ida.open_database(arm64_binary, True)
    else:
        return ""
    return tempdir
def close_env(deleteTempDir):
    # 检查文件夹是否存在
    ida.close_database(True)
    if os.path.exists(deleteTempDir):
        shutil.rmtree(deleteTempDir)
        print(f"Folder '{deleteTempDir}' has been deleted.")
    else:
        print(f"Folder '{deleteTempDir}' does not exist.")
def get_mcode_name(mcode):
    """returns the name of the mcode_t passed in parameter."""
    for x in dir(hr):
        if x.startswith('m_'):
            if mcode == getattr(hr, x):
                return x
    return None


# -----------------------------------------------------------------------------
def get_mopt_name(mopt):
    """returns the name of the mopt_t passed in parameter."""
    for x in dir(hr):
        if x.startswith('mop_'):
            if mopt == getattr(hr, x):
                return x
    return None

# -----------------------------------------------------------------------------
class microcode_insnviewer_t(ida_graph.GraphViewer):
    """Displays the graph view of Hex-Rays microcode."""
    #原始版本
    def __init__(self, mba, mmat_name, fn_name, block, serial):
        title = "Microinstruction: %s - %d.%d (%s)" % (fn_name, block, serial, mmat_name)
        ida_graph.GraphViewer.__init__(self, title, True)
        self.mblock = mba.get_mblock(block)
        self.minsn = self.get_minsn(serial)

    #新版本
    def __init__(self):
        title = "Microinstruction: %s - %d.%d (%s)"
        ida_graph.GraphViewer.__init__(self, title, True)
        #self.mblock = mba.get_mblock(block)
       # self.minsn = self.get_minsn(serial)


    def get_minsn(self, serial):
        curr = self.mblock.head
        for i in range(serial):
            curr = curr.next
        return curr

    def _insert_mop(self, mop, parent,leaf_node):
        if mop.t == hr.mop_z:
            return -1

        text = get_mopt_name(mop.t) + '\n' + mop._print()
        node_id = self.AddNode(text)
        self.AddEdge(parent, node_id)

        if mop.t == hr.mop_d:  # result of another instruction
            dst_id = self._insert_minsn(mop.d,leaf_node)
            if dst_id:
                self.AddEdge(node_id, dst_id)
        elif mop.t == hr.mop_f:  # list of arguments
            for arg in mop.f.args:
                self._insert_mop(arg, node_id,leaf_node)
        elif mop.t == hr.mop_a:  # mop_addr_t: address of operand
            self._insert_mop(mop.a, node_id,leaf_node)
        elif mop.t == hr.mop_p:  # operand pair
            self._insert_mop(mop.pair.lop, node_id,leaf_node)
            self._insert_mop(mop.pair.hop, node_id,leaf_node)
        else:
            leaf_node.append(mop)

        return node_id

    def _insert_minsn(self, minsn,leaf_node):
        if minsn:
            text = get_mcode_name(minsn.opcode) + '\n' + minsn._print()
            node_id = self.AddNode(text)

            self._insert_mop(minsn.l, node_id,leaf_node)
            self._insert_mop(minsn.r, node_id,leaf_node)
            self._insert_mop(minsn.d, node_id,leaf_node)
            return node_id
        return None

    def OnRefresh(self):
        self.Clear()
        self._insert_minsn(self.minsn)
        return True

    def OnGetText(self, node_id):
        return self._nodes[node_id]

def genMBA(pfn):
    sea = pfn.start_ea
    eea = pfn.end_ea
    addr_fmt = "%016x" if ida_ida.inf_is_64bit() else "%08x"
    fn_name = (ida_funcs.get_func_name(pfn.start_ea) if pfn else "0x%s-0x%s" % (
    addr_fmt % sea, addr_fmt % eea))

    F = ida_bytes.get_flags(sea)
    if not ida_bytes.is_code(F):
        return (False, "The selected range must start with an instruction")

    # text, mmat, mba_flags = ask_desired_maturity()
    text = hr.MMAT_LVARS
    mmat = 8
    mba_flags = 0
    if text is None and mmat is None:
        return (True, "Cancelled")
    sel = False
    if not sel and pfn:
        mbr = hr.mba_ranges_t(pfn)
    else:
        mbr = hr.mba_ranges_t()
        mbr.ranges.push_back(ida_range.range_t(sea, eea))

    hf = hr.hexrays_failure_t()
    ml = hr.mlist_t()
    mba = hr.gen_microcode(mbr, hf, ml, hr.DECOMP_WARNINGS, mmat)
    if not mba:
        return (False, "0x%s: %s" % (addr_fmt % hf.errea, hf.desc()))
    # vp = printer_t()
    mba.set_mba_flags(mba.get_mba_flags() | mba_flags)
    return mba

def mba_handle(mba,taint_source,cur_call_func,next_call_func):
    #pfn = ida_funcs.get_func(path)
    #都是block的判断，为了跨指令的判断
    # -1代表还没开始
    block_start = -1
    isStartBlock = False
    isTaintOtherArgu = False
    isBlockInvoke = False
    # block变量们，后面查看回调调用会用到
    block_vars = set()
    # 代表已经到了参数阶段了
    isEndBlock = False
    isFirstEndBlock=False
    isCorrectBlockInvoke=False
    Block_Parameter_taint_index = []
    for i in range(0, mba.qty):
        mblock = mba.get_mblock(i)
        insn = mblock.head
        while insn:
            #每一条指令都是一个ast tree，这里处理就是把叶子节点都拿下来，从左往右，其实只要确定左边的参数是污点，那么右边参数也是污点
            #leaf node -> mop_list
            leaf_nodes=[]
            microcode_insnviewer_t()._insert_minsn(insn,leaf_nodes)
            #print("-----------------just break")
            # visit_top_insn(insn)
            leaf_list=[]
            for leaf_index in range(len(leaf_nodes)):
                leaf_node=leaf_nodes[leaf_index]
                if leaf_node.t==hr.mop_l:
                    var_name=(mba.vars)[leaf_node.l.idx].name
                    leaf_list.append(var_name)
                elif leaf_node.t==hr.mop_h:
                    func_name=leaf_node.helper
                    leaf_list.append(func_name)
                elif leaf_node.t==hr.mop_str:
                    string_name=leaf_node.cstr
                    leaf_list.append(string_name)
                elif leaf_node.t==hr.mop_S:
                    stkvar_ref_t=leaf_node.s
                    leaf_list.append(stkvar_ref_t)
                elif leaf_node.t==hr.mop_v:
                    glo_var_ea=leaf_node.g
                    leaf_list.append(glo_var_ea)
                elif leaf_node.t==hr.mop_n:
                    mmmnumber=leaf_node.nnn
                    leaf_list.append(mmmnumber.org_value)
            if has_dst_opcode(insn)==True:
                #说明如果参数里面有taint，则要把dst对应的寄存器放入taint_source里面
                isTaint=False
                for leaf_list_index in range(len(leaf_list)-1):
                    if leaf_list[leaf_list_index] in taint_source:
                        isTaint=True
                if isTaint:
                    taint_source.add(leaf_list[-1])
            #需要考虑的是在调用函数的也是有很大可能污点传播的，特别是addxxxx函数的时候
            if insn.opcode == hr.m_call or insn.opcode == hr.m_icall:
                isFuncTaint=False
                #判断是不是可疑函数
                isPossible=False
                possiblyfunc_features=["add"]
                possiblyfunc_features_list=[]
                for leaf_list_index in range(len(leaf_list)):
                    if leaf_list[leaf_list_index] in taint_source:
                        isFuncTaint=True
                    for possiblyfunc_feature in possiblyfunc_features:
                        #这里需要考虑因为找的是函数名字其他都需要pass掉，加判断是字符串
                        if isinstance(leaf_list[leaf_list_index],str) and possiblyfunc_feature in leaf_list[leaf_list_index]:
                            possiblyfunc_features_list.append(leaf_list_index)
                            isPossible=True
                if isFuncTaint and isPossible:
                    for leaf_list_index in range(len(leaf_list)):
                        #不要把除了参数以外的东西加进来，考虑objc和正常函数调用
                        if (isinstance(leaf_list[leaf_list_index],str) and ("objc" in leaf_list[leaf_list_index] or "sub" in leaf_list[leaf_list_index])) or leaf_list_index in possiblyfunc_features_list:
                            continue
                        taint_source.add(leaf_list[leaf_list_index])
            #这里继续处理一下函数调用, 这里需要处理objc的跳转，和block
            if "Block" in cur_call_func:
                #代表下一个block函数，需要解释block_layout
                '''
                struct Block_literal {
                    void *isa;                  // 1️⃣ 指向 `NSConcreteStackBlock` 或 `NSConcreteGlobalBlock`
                    int flags;                  // 2️⃣ Block 标志位（如 GLOBAL、HAS_COPY_DISPOSE）
                    int reserved;               // 3️⃣ 保留字段（未使用）
                    void (*invoke)(void *);     // 4️⃣ 调用 Block 的函数指针
                    struct Block_descriptor *descriptor;  // 5️⃣ Block 描述符
                };
                NSConcreteStackBlock
                NSConcreteGlobalBlock
                NSConcreteMallocBlock
                '''
                #先找到这个isa，代表要开始解析结构体
                exclude_NSBlock_index=-1

                for leaf_call_index_ in range(len(leaf_list)):
                    if isinstance(leaf_list[leaf_call_index_],int):
                        symbol_name = ida_name.get_ea_name(leaf_list[leaf_call_index_])
                        if "NSConcrete" in symbol_name and "Block" in symbol_name:
                            isStartBlock=True
                            exclude_NSBlock_index=leaf_call_index_
                            block_start=0
                            break
                if exclude_NSBlock_index!=-1:
                    #添加一下污点,排除nsblock
                    for leaf_call_index_ in range(len(leaf_list)):
                        if leaf_call_index_==exclude_NSBlock_index:
                            continue
                        taint_source.add(leaf_list[leaf_call_index_])
                        block_vars.add(leaf_list[leaf_call_index_])
                # 判断一下是不是我们要跳转到block块
                if isStartBlock and block_start == 2:
                    for leaf_list_index in range(len(leaf_list)):
                        if isinstance(leaf_list[leaf_list_index],int) and leaf_list[leaf_list_index]==int(next_call_func,16):
                            isCorrectBlockInvoke=True
                if block_start>-1 and block_start<5:
                    block_start+=1
                #这里需要fix，这里逻辑不太对，这里逻辑是block的参数都必须要是taint才给进行下一步，这个不对，其次这个5的数字也不对的，也需要改成到调用block为止
                if isCorrectBlockInvoke and isStartBlock and block_start==5:
                    #查看参数有没有被taint，如果被taint，那invoke函数的第一个参数需要被taint.
                    for leaf_list_index in range(len(leaf_list)):
                        if leaf_list[leaf_list_index] in taint_source:
                            Block_Parameter_taint_index.append(0)
                            #回归正常
                            block_start=-1
                            isStartBlock=False
                            #isCorrectBlockInvoke=False
                            isEndBlock=True
                            isFirstEndBlock=True
                            #break

                #if isEndBlock and isFirstEndBlock==False:
                #在处理block参数的时候，还要开始搜索是不是到调用的阶段了
                if isCorrectBlockInvoke:
                    #这里可能会有第一个的情况，尝试跳过
                    #判断是不是有block_vars说明要调用了
                    #判断要不要把除第一个参数以外都标记上污点
                    for leaf_list_index in range(len(leaf_list)):
                        if leaf_list[leaf_list_index] in block_vars:
                            #说明找到了
                            isBlockInvoke=True
                            isEndBlock=False
                            #关闭掉，等待下一次启动
                            isCorrectBlockInvoke=False
                            isStartBlock = False
                if isBlockInvoke:
                    for leaf_list_index in range(len(leaf_list)):
                        if leaf_list[leaf_list_index] in taint_source:
                            isTaintOtherArgu=True
                            isBlockInvoke=False
                if isTaintOtherArgu:
                    # #代表之后所有参数都污点
                    Block_Parameter_taint_index.append("#")
                    return Block_Parameter_taint_index
                #这样可以跳转到下一个指令
                if isFirstEndBlock:
                    isFirstEndBlock=False


            elif ("[" in ida_funcs.get_func_name(int(next_call_func,16)) and "]" in ida_funcs.get_func_name(int(next_call_func,16))):
                next_objcfunc_sign = ida_funcs.get_func_name(int(next_call_func, 16))
                next_objcmethod_name = extract_objc_method(next_objcfunc_sign)
                #根据方法名来判断是不是已经到那个objc call指令了
                isReadyCall=False
                for leaf_call_index_ in range(len(leaf_list)):
                    if next_objcmethod_name==leaf_list[leaf_call_index_]:
                        isReadyCall=True
                        break
                #下一个函数是否被taint
                isParameterTaint=False
                #obj这里需要处理就是因为多了obj_send那些元素导致参数的污点下标需要额外处理，这里就是以那个函数名开始为1,后面开始2，3这样到下一层就能对应
                Obj_Parameter_taint_index=[]
                Obj_next_call_param_taint_index=0
                is_obj_next_call_parm=False
                if isReadyCall:
                    #判断目前参数是不是在taint_source集合里面
                    for leaf_call_taint_index in range(len(leaf_list)):
                        if leaf_list[leaf_call_taint_index] in taint_source and is_obj_next_call_parm:
                            isParameterTaint=True
                            Obj_Parameter_taint_index.append(Obj_next_call_param_taint_index)
                        if leaf_list[leaf_call_taint_index] == "objc_msgSend":
                            #说明已经到了函数名的位置，后面的都是参数，需要taint,这里重置为1，跟后面调用参数idx找污点对应上
                            Obj_next_call_param_taint_index=-1
                            is_obj_next_call_parm=True
                        Obj_next_call_param_taint_index+=1
                if isParameterTaint and len(Obj_Parameter_taint_index)!=0:
                    #说明下一个函数的参数被污点传播到了，有下一步看的价值, 返回到下一步
                    return Obj_Parameter_taint_index
            elif "objc_msgSend" in ida_funcs.get_func_name(int(next_call_func,16)):
                #又一个oc方法调用的，就是类型识别不出来，或者跨二进制了
                #筛选一下，根据oc方法名字
                next_objcfunc_sign = ida_funcs.get_func_name(int(next_call_func, 16))
                #这里用了和前面不一样的拿到函数名字方式
                next_objcmethod_name = next_objcfunc_sign.split("$")[1]
                isReadyCall = False
                for leaf_call_index_ in range(len(leaf_list)):
                    if next_objcmethod_name == leaf_list[leaf_call_index_]:
                        isReadyCall = True
                        break
                # 下一个函数是否被taint
                isParameterTaint = False
                # obj这里需要处理就是因为多了obj_send那些元素导致参数的污点下标需要额外处理，这里就是以那个函数名开始为1,后面开始2，3这样到下一层就能对应
                Obj_Parameter_taint_index = []
                Obj_next_call_param_taint_index = 0
                is_obj_next_call_parm = False
                if isReadyCall:
                    # 判断目前参数是不是在taint_source集合里面
                    for leaf_call_taint_index in range(len(leaf_list)):
                        if leaf_list[leaf_call_taint_index] in taint_source and is_obj_next_call_parm:
                            isParameterTaint = True
                            Obj_Parameter_taint_index.append(Obj_next_call_param_taint_index)
                        if leaf_list[leaf_call_taint_index] == "objc_msgSend":
                            # 说明已经到了函数名的位置，后面的都是参数，需要taint,这里重置为1，跟后面调用参数idx找污点对应上
                            Obj_next_call_param_taint_index = -1
                            is_obj_next_call_parm = True
                        Obj_next_call_param_taint_index += 1
                if isParameterTaint and len(Obj_Parameter_taint_index) != 0:
                    # 说明下一个函数的参数被污点传播到了，有下一步看的价值, 返回到下一步
                    return Obj_Parameter_taint_index
            #这里处理下下一个跳转是一个正常的函数
            else:
                next_func_name=ida_funcs.get_func_name(int(next_call_func,16))
                Obj_Parameter_taint_index = []
                for leaf_call_taint_index in range(len(leaf_list)):
                    if isinstance(leaf_list[leaf_call_taint_index],int):
                        #说明是一个地址
                        func_name = ida_funcs.get_func_name(leaf_list[leaf_call_taint_index])
                        if func_name!=None:
                            if next_func_name==func_name:
                                for leaf_call_taint_index_inner in range(len(leaf_list)):
                                    if leaf_list[leaf_call_taint_index_inner] in taint_source:
                                        #这里ir优化程度不够，所以没法区分是下一个函数第几个参数被taint，😓，这里把全部参数都taint得了
                                        next_func_pfn = ida_funcs.get_func(int(next_call_func,16))
                                        next_func_pfn_mba=genMBA(next_func_pfn)
                                        for next_pararm_taint_index in range(next_func_pfn_mba.argidx.size()):
                                            Obj_Parameter_taint_index.append(next_pararm_taint_index)
                                        return Obj_Parameter_taint_index



            insn = insn.next

def getSourceList_Single(original_binary_path):
    #拿到对应的source api，然后开始分析
    exported_api_name=original_binary_path.split("/")[-1]
    #用这个exported api name从之前dump的exportedapi文件夹里面找到对应的文件
    exported_api_path="./LLM4Sec/exportedAPI/groundtruth_NSXPC/"+exported_api_name
    #读取exported_api_path文件
    with open(exported_api_path, "r") as file:
        protocol_methods = []
        for line in file:
            line = line.strip()
            # Check if the line starts with @protocol
            if line and line.startswith("@protocol"):
                protocol_name = line.split()[1]

                # Continue reading the file to extract methods until @end
                for method_line in file:
                    method_line = method_line.strip()
                    if method_line.startswith("@end"):
                        break
                    # Skip empty lines and lines that start with @protocol
                    if method_line and not method_line.startswith("@protocol"):
                        # Add the method to our list
                        protocol_methods.append(method_line)
                
                # Process the extracted methods
                for method in protocol_methods:
                    # Here you can further process each method
                    # For example, extract method name, parameters, etc.
                    print(f"Found method in {protocol_name}: {method}")
                
                # Return or store the protocol methods as needed
    # Extract source list from protocol methods
    source_list = []
    # Process protocol methods to extract source list
    for method in protocol_methods:
        # Remove all content within parentheses
        # 匹配嵌套括号内容
        pattern = r'\((?:[^()]+|(?R))*\)'
        method_without_parentheses = regex.sub(pattern, '', method)
        # Handle nested parentheses in method signatures
        # This is especially important for block parameters like (void (^)(void))
        # First, extract the method name by finding the first colon or space
        
        # Remove leading hyphen and any spaces
        method_without_parentheses = method_without_parentheses.strip('- ')
        
        # Remove any trailing semicolons and spaces
        method_without_parentheses = method_without_parentheses.strip('; ')
        
        # Add to source list
        if method_without_parentheses:
            source_list.append(method_without_parentheses)
            print(f"Added source: {method_without_parentheses}")
    #继续处理source变成ida格式
    final_source_list=[]
    for source in source_list:
        key_source=""
        temp_source=source.split(" ")
        for sing_source in temp_source:
            yk=sing_source.split(":")[0]
            key_source+=yk+":"
        final_source_list.append(key_source)
    return final_source_list
def getSinkList_Single(original_binary_path):
    global ent_sink_map
    sink_list=[]
    #根据entitlement来取出sinklist
    entitlements=extract_entitlements(original_binary_path)
    if entitlements==None:
        return sink_list
    #handle_entitlement_list = process_entitlements(entitlements)
    for entitlement in entitlements:
        # Check if the entitlement exists in the mapping
        if entitlement not in ent_sink_map:
            print(f"Entitlement {entitlement} not found in sink map, skipping")
            continue
        sink_list.append(ent_sink_map[entitlement])
    final_sink_list=[]
    for sink_temp in sink_list:
        for temp_var in sink_temp:
            final_sink_list.append(temp_var)
    final_sink_list=list(set(final_sink_list))
    return final_sink_list
def getSinkListOfiservice():
    sink_name_list=[]
    with open("./LLMAssistant/S4_taint_analysis/iservice_sink_point","r") as f:
        for func_name in f.readlines():
            sink_name_list.append(func_name.replace("\n",""))
    return sink_name_list

def startAnalysis(input_binary_path,original_binary_path):
    #binary_path="/Users/yenkoc/Downloads/experiment_execution/com.apple.ImageKit.RecentPictureService"
    #binary_path="/Users/yenkoc/Downloads/experiment_execution/com.apple.photos.VideoConversionService"
    #binary_path = "/Users/yenkoc/Downloads/experiment_execution/DistributionHelper"
    res_source_list=[]

    binary_path=input_binary_path
    
    tempdir = new_init_env(binary_path)
    if (tempdir == ""):
        return
    # source点简单给一个方便测试
    #test_source="-[IKPTRecentsService pushRecents:thumbnails:originalImagesInfo:reply:]"
    #test_source="-[VideoConversionService generateGIFForVideoAtSourceBookmarkDictionary:toDestinationBookmarkDictionary:options:replyHandler:]"
    #test_source="-[DistributionHelperService fileAtPathExistsOnGraft:reply:]"
    #拿到source点
    service_source_list=getSourceList_Single(original_binary_path)
    #拿到服务的sink list根据entitlement
    complete_sink_list=[]
    #测试一下iservice的sink list
    #service_sink_list=getSinkListOfiservice()
    #下面是原来的
    service_sink_list=getSinkList_Single(original_binary_path)
    # 需要把sink_List转化成地址
    for sink_name in service_sink_list:
        if "View" in sink_name:
            continue

        func_eeea=idc.get_name_ea_simple(sink_name)
        '''
        if hex(func_eeea)=='0xffffffffffffffff' and ("[" in sink_name and "]" in sink_name):
            #说明是oc函数，有可能一开始idapro无法识别间接跳转
            oc_func_prefix="_objc_msgSend$"
            sink_name=sink_name.replace("[","").replace("]","")
            ocfunc_name=oc_func_prefix+sink_name.split(" ")[1]
            func_eeea = idc.get_name_ea_simple(ocfunc_name)
        '''
        if hex(func_eeea)!='0xffffffffffffffff':
            complete_sink_list.append(func_eeea)

    #找到全部的source完整的名字
    complete_source_list=[]
    for temp_half_source in service_source_list:
        for func_ea in idautils.Functions():
            func_name = ida_name.get_ea_name(func_ea)
            if func_name and (temp_half_source in func_name):
                complete_source_list.append(func_name)  # 返回第一个匹配的地址
    complete_source_list=list(set(complete_source_list))
    #这里可以把source sink一开始都对上的找出来，后面就不会再数据流什么的
    complete_sink_name_list=[]
    for temp_sink_addr in complete_sink_list:
        complete_sink_name_list.append(ida_funcs.get_func_name(temp_sink_addr))
    temp_source_index_list=[]
    temp_sink_index_list=[]
    #进行对比
    for temp_sink_name_index in range(len(complete_sink_name_list)):
        yk_sink_name=complete_sink_name_list[temp_sink_name_index]
        for temp_source_name_index in range(len(complete_source_list)):
            yk_source_name=complete_source_list[temp_source_name_index]
            if yk_source_name==yk_sink_name:
                res_source_list.append(yk_source_name)
                temp_source_index_list.append(temp_source_name_index)
                temp_sink_index_list.append(temp_sink_name_index)
    #用收集的index 去除source和sink
    temp_source_index_list.sort(reverse=True)
    temp_sink_index_list.sort(reverse=True)
    for yk_source_rem_i in temp_source_index_list:
        complete_source_list.pop(yk_source_rem_i)
    for yk_sink_rem_i in temp_sink_index_list:
        complete_sink_list.pop(yk_sink_rem_i)
    if len(complete_source_list)==0 or len(complete_source_list)==0:
        return res_source_list
    ## 先把call graph搞定
    #拿到call_graphs
    for single_source in complete_source_list:
        call_graphs=getCallGraph(single_source,complete_sink_list)
        call_graphs = list(map(list, set(map(tuple, call_graphs))))
        #print(call_graphs)
        #遍历call_graphs
        call_graph_success=[]
        for call_graph in call_graphs:
            # 设置一个初始状态
            call_graph.reverse()
            print("call_graph:", call_graph)
            sources = set()
            for call_level in range(len(call_graph)-1):
                #开始生成ir
                #判断下一个调用的是block块，需要额外处理
                cur_call_element=call_graph[call_level]
                if "Block" in cur_call_element:
                    cur_call_element=cur_call_element.replace("Block_","")
                current_call_addr=int(cur_call_element,16)
                current_call_pfn= ida_funcs.get_func(current_call_addr)
                call_mba=genMBA(current_call_pfn)
                #初始化一个污点集合 这里如果是第一次和之后还是不一样需要分开处理
                if call_level==0:
                    #这里nsxpc的话从2下标开始
                    for i in range(2,call_mba.argidx.size()):
                        sources.add(list(call_mba.vars)[i].name)
                else:
                    # 存入sources，先清空，因为进入下一层了
                    sources.clear()
                    if "#" in Parameter_taint_index_list:
                        #除了第一个参数都taint掉
                        if len(Parameter_taint_index_list)==2:
                        #说明第一个参数也要taint
                            for next_pararm_taint_index in range(call_mba.argidx.size()):
                                sources.add(list(call_mba.vars)[next_pararm_taint_index].name)
                        else:
                        #除了第一个参数其他taint
                            for next_pararm_taint_index in range(call_mba.argidx.size()):
                                if next_pararm_taint_index==0:
                                    continue
                                sources.add(list(call_mba.vars)[next_pararm_taint_index].name)
                    else:
                        for next_pararm_taint_index in Parameter_taint_index_list:
                            sources.add(list(call_mba.vars)[next_pararm_taint_index].name)
                #开始处理mba
                #print("sources:",sources)
                next_call_func=call_graph[call_level+1]
                if "Block" in next_call_func:
                    next_call_func = next_call_func.replace("Block_", "")
                Parameter_taint_index_list=mba_handle(call_mba,sources,call_graph[call_level],next_call_func)
                if Parameter_taint_index_list==None:
                    Parameter_taint_index_list=[]
                    break
                if Parameter_taint_index_list!=None and len(Parameter_taint_index_list)!=0 and call_level==len(call_graph)-2:
                    #说明污点已经传播到最后一个函数
                    call_graph_success.append(call_graph)
        if len(call_graph_success):
            res_source_list.append(single_source)
    close_env(tempdir)
    return res_source_list
def main():
    #读取groundtruth_NSXPC_Nocheck.txt
    final_service_list={}
    count=0
    file=open("LLM4Sec/Data/groundtruth_NSXPC_Nocheck.txt", "r")
    file_lines=file.readlines()
    #for line_index in range(len(file_lines)):
    #line_index=41
    line_index=60
    #line_index=60
    line = file_lines[line_index]
    line = line.strip()
    program_name=line.split("/")[-1]
    if line:
        #提取出二进制文件
        extracted_binary=extract_arm_binary_from_fat(line)
        if extracted_binary:
            #提取出函数符号
            source_list=startAnalysis(extracted_binary,line)
            count+=1
            if len(source_list)!=0:
                final_service_list[line]=source_list
                # Convert the results to JSON and write to a file
                if final_service_list:
                    try:
                        # Create a JSON file with the results
                        #下面是之前版本的路径
                        #json_output_path = f"LLM4Sec/dataflowRes/taint_analysis_results_{program_name}.json"
                        #新路径
                        json_output_path = f"./LLMAssistant/S4_taint_analysis/taint_analysis_results_{program_name}.json"
                        with open(json_output_path, 'w') as json_file:
                            json.dump(final_service_list, json_file, indent=4)
                        print(f"Results successfully written to {json_output_path}")
                    except Exception as e:
                        print(f"Error writing results to JSON file: {e}")

        else:
            print(f"Failed to extract binary: {line}")
    file.close()
    print("final_result:")
    print(final_service_list)


def generateSinklistforSinglebinary(input_binary_path, original_binary_path):
    # binary_path="/Users/yenkoc/Downloads/experiment_execution/com.apple.ImageKit.RecentPictureService"
    # binary_path="/Users/yenkoc/Downloads/experiment_execution/com.apple.photos.VideoConversionService"
    # binary_path = "/Users/yenkoc/Downloads/experiment_execution/DistributionHelper"
    res_source_list = []

    binary_path = input_binary_path

    tempdir = new_init_env(binary_path)
    if (tempdir == ""):
        return
    # source点简单给一个方便测试
    # test_source="-[IKPTRecentsService pushRecents:thumbnails:originalImagesInfo:reply:]"
    # test_source="-[VideoConversionService generateGIFForVideoAtSourceBookmarkDictionary:toDestinationBookmarkDictionary:options:replyHandler:]"
    # test_source="-[DistributionHelperService fileAtPathExistsOnGraft:reply:]"
    # 拿到source点
    #service_source_list = getSourceList_Single(original_binary_path)
    # 拿到服务的sink list根据entitlement
    complete_sink_list = {}
    # 测试一下iservice的sink list
    # service_sink_list=getSinkListOfiservice()
    # 下面是原来的
    service_sink_list = getSinkList_Single(original_binary_path)
    # 需要把sink_List转化成地址
    for sink_name in service_sink_list:
        if "View" in sink_name:
            continue

        func_eeea = idc.get_name_ea_simple(sink_name)
        '''
        if hex(func_eeea)=='0xffffffffffffffff' and ("[" in sink_name and "]" in sink_name):
            #说明是oc函数，有可能一开始idapro无法识别间接跳转
            oc_func_prefix="_objc_msgSend$"
            sink_name=sink_name.replace("[","").replace("]","")
            ocfunc_name=oc_func_prefix+sink_name.split(" ")[1]
            func_eeea = idc.get_name_ea_simple(ocfunc_name)
        '''
        if hex(func_eeea) != '0xffffffffffffffff':
            complete_sink_list[sink_name]=func_eeea
    close_env(tempdir)
    return complete_sink_list
def CountBinarySinklist():
    # 读取groundtruth_NSXPC_Nocheck.txt
    final_service_list = {}
    count = 0
    file = open("LLM4Sec/Data/groundtruth_NSXPC_Nocheck.txt", "r")
    file_lines = file.readlines()
    for line_index in range(len(file_lines)):
        # line_index=41
        #line_index = 60
        # line_index=60
        line = file_lines[line_index]
        line = line.strip()
        program_name = line.split("/")[-1]
        if line:
            # 提取出二进制文件
            extracted_binary = extract_arm_binary_from_fat(line)
            if extracted_binary:
                # 提取出函数符号
                sink_list = generateSinklistforSinglebinary(extracted_binary, line)
                # 指定输出文件路径
                output_file = f"LLMAssistant/S4_taint_analysis/{program_name}.json"

                # 写入 JSON 文件
                with open(output_file, "w", encoding="utf-8") as f:
                    json.dump(sink_list, f, indent=2, ensure_ascii=False)
                print(f"[完成] sink_list 已写入: {output_file} sink_list length:{len(sink_list)}")

                count += 1
#dump_exported_apis_all()
#binary_path = "/Users/yenkoc/Downloads/experiment_execution/DistributionHelper"
#startAnalysis(binary_path)
#初始化ent_sink_map，方便后面的存取
init_ent_sink_map()
#开始数据流分析
#main()
#统计下每一个二进制的sink list
CountBinarySinklist()
#统计敏感api
#combineDataFlowRes()
#开始计算
'''
json_file_path="/Users/yenkoc/Documents/GitHub/macOS_tool/UserSpace/python3/LLM4Sec/dataflowRes/consolidated_taint_analysis_results.json"
with open(json_file_path, 'r', encoding='utf-8') as f:
    data = json.load(f)  # 读取并解析 JSON 内容，得到一个字典或列表

total_count = 0
value_list=[]
# 假设 data 是一个字典，遍历其中的 key-value
if isinstance(data, dict):
    for key, value in data.items():
        if isinstance(value, list):
            for v in value:
                value_list.append(v)
            total_count += len(value)
        elif isinstance(value, dict):

            total_count += len(value)  # 或 len(value.keys())
        else:
            # 其他类型统一计作 1
            total_count += 1
else:
    # 如果最外层不是字典（例如是列表），可根据需求自行处理
    print("最外层数据不是字典，无法遍历 key-value！")
print(total_count)
for te in value_list:
    print(te)

#找到api 24 原本23，漏了1个
#总共 41 原本40 漏了1个
'''