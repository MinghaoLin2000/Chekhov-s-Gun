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
    hr.m_call,  
    hr.m_icall, 
    hr.m_ret,   
    
    hr.m_ijmp,  
    hr.m_jcnd,  
    hr.m_push,  
    hr.m_pop,   
    hr.m_goto,  
    hr.m_und    
}
def combineDataFlowRes():
    
    dataflow_res_dir = "LLM4Sec/dataflowRes"
    """
    Count and consolidate data flow analysis results from JSON files in the dataflow results directory.
    Combines all individual JSON files into a single consolidated JSON file.
    """
    consolidated_results = {}
    file_count = 0
    
    
    if not os.path.exists(dataflow_res_dir):
        print(f"Error: Directory {dataflow_res_dir} does not exist")
        return
    
    
    for filename in os.listdir(dataflow_res_dir):
        if filename.endswith('.json') and filename.startswith('taint_analysis_results_'):
            file_path = os.path.join(dataflow_res_dir, filename)
            try:
                with open(file_path, 'r') as json_file:
                    data = json.load(json_file)
                    
                    consolidated_results.update(data)
                    file_count += 1
                    print(f"Processed: {filename}")
            except Exception as e:
                print(f"Error processing {filename}: {e}")
    
    
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
        
        
        json_path  = "/Users/yenkoc/Documents/GitHub/macOS_tool/UserSpace/python3/LLM4Sec/SinkList_Second/mapEntToSinkList/combined_result_revised_sink_list_second.json"
        
        
        if not os.path.exists(json_path):
            print(f"Error: Entitlement sink map file not found at {json_path}")
            return {}
        
        
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
        
        cmd = ["codesign", "-d", "--entitlements", ":-", binary_path]

        
        result = subprocess.run(cmd, check=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)

        
        if result.stdout:
            

            try:

                
                xml_content = result.stdout.strip()
                if "<?xml" not in xml_content.split('\n')[0]:
                    xml_content = '\n'.join(xml_content.split('\n')[1:])

                
                entitlements = plistlib.loads(xml_content.encode('utf-8'))

                result_list = process_entitlements(entitlements)
                
                return result_list
            except Exception as e:
                print(f"Error parsing entitlements: {e}")
                return None
        else:
            
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
    
    
    binary_dir = "/Users/yenkoc/Documents/GitHub/macOS_tool/UserSpace/python3/classdumpc/Release"
    binary_name = "classdumpc"
    binary_path = os.path.join(binary_dir, binary_name)

    
    if not os.path.exists(binary_path):
        print(f"Error: Binary file '{binary_path}' not found.")
        return

    
    if not os.path.exists(input_file):
        print(f"Error: Input file '{input_file}' not found.")
        return

    
    try:
        

        
        result = subprocess.run(
            [binary_path, input_file],  
            stdout=subprocess.PIPE,  
            stderr=subprocess.PIPE,  
            text=True  
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
            
            protocol_start=1
            writefile_content_list.append(return_line)
        if protocol_start==1:
            if len(return_line)!=0 and return_line[0]=="-" and "listener" not in return_line:
                writefile_content_list.append(return_line)
                exportAPI_num+=1
        if return_line.startswith("@end") and protocol_start==1:
            writefile_content_list.append(return_line)
            protocol_start=0
    
    item=binary_path.split("/")[-1]
    
    
    
    outputfile_path="/Users/yenkoc/Documents/GitHub/macOS_tool/UserSpace/python3/LLM4Sec/exportedAPI/groundtruth_NSXPC/"
    f = open(outputfile_path+item, 'a')
    
    
    
    
    
    
    for yk in writefile_content_list:
        f.write(f"{yk}\n")
    
    f.close()
def dump_exported_apis_all():
    
    with open("LLM4Sec/Data/groundtruth_NSXPC_Nocheck.txt", "r") as file:
        for line in file:
            line = line.strip()
            if line:
                
                dump_exported_apis_single(line)
def has_dst_opcode(insn):
    """Determine whether a `minsn_t` has a `dst` based on its `opcode`."""
    return insn.opcode not in NO_DST_OPCODES

def new_init_env(binary_path):
    
    
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

def extract_arm_binary_from_fat(binary_path, output_path=None):
    """
    Extract ARM binary (arm64/arm64e) from a Fat binary file.
    Only extracts if input is actually a Fat binary.

    :param binary_path: Path to the binary file
    :param output_path: Optional output path for extracted binary. If None, creates in same directory.
    :return: Path to extracted binary if successful, original path if not Fat binary, None if failed
    """
    try:
        
        info = lipo_binary_info(binary_path)
        if not info:
            print("Could not get binary info")
            return None

        
        if "Non-fat" in info:
            print("Input is not a Fat binary, using original file")
            return binary_path

        
        arch = None
        if "arm64e" in info:
            arch = "arm64e"
        elif "arm64" in info:
            arch = "arm64"
        else:
            print("No ARM architecture found in binary")
            return None

        
        if not output_path:
            temp_dir = tempfile.mkdtemp()
            output_path = os.path.join(temp_dir, f"{arch}_{os.path.basename(binary_path)}")

        
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
            
            for item in value:
                result.append(f"{key}:{item}")
        elif "com.apple.security.temporary-exception.files.home-relative-path.read-write"==key and "Images" in value:
            result.append(f"{key}:{value}")
        else:
            
            
            result.append(f"{key}")
    return result


def extract_entitlements(binary_path):
    """
    Extract entitlements from a signed macOS binary using codesign.

    :param binary_path: Path to the binary file
    :return: Dictionary containing the entitlements, or None if extraction failed
    """
    try:
        
        cmd = ["codesign", "-d", "--entitlements", ":-", binary_path]

        
        result = subprocess.run(cmd, check=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)

        
        if result.stdout:
            

            try:

                
                xml_content = result.stdout.strip()
                if "<?xml" not in xml_content.split('\n')[0]:
                    xml_content = '\n'.join(xml_content.split('\n')[1:])

                
                entitlements = plistlib.loads(xml_content.encode('utf-8'))

                result_list = process_entitlements(entitlements)
                
                return result_list
            except Exception as e:
                print(f"Error parsing entitlements: {e}")
                return None
        else:
            
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
    Use lipo to extract a specific architecture from a Fat Binary.

    :param input_file: Path to the original binary file
    :param arch: Architecture to extract (e.g., arm64e)
    :param output_file: Output file path
    """
    try:
        
        cmd = ["lipo", "-info", input_file]

        
        result = subprocess.run(cmd, check=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)

        
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
        
        return True
    else:
        
        return False
def init_env(binary_path,isFatBinary):
    tempdir = tempfile.mkdtemp()
    
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



def get_mopt_name(mopt):
    """returns the name of the mopt_t passed in parameter."""
    for x in dir(hr):
        if x.startswith('mop_'):
            if mopt == getattr(hr, x):
                return x
    return None


class microcode_insnviewer_t(ida_graph.GraphViewer):
    """Displays the graph view of Hex-Rays microcode."""
    
    def __init__(self, mba, mmat_name, fn_name, block, serial):
        title = "Microinstruction: %s - %d.%d (%s)" % (fn_name, block, serial, mmat_name)
        ida_graph.GraphViewer.__init__(self, title, True)
        self.mblock = mba.get_mblock(block)
        self.minsn = self.get_minsn(serial)

    
    def __init__(self):
        title = "Microinstruction: %s - %d.%d (%s)"
        ida_graph.GraphViewer.__init__(self, title, True)
        
       


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

        if mop.t == hr.mop_d:  
            dst_id = self._insert_minsn(mop.d,leaf_node)
            if dst_id:
                self.AddEdge(node_id, dst_id)
        elif mop.t == hr.mop_f:  
            for arg in mop.f.args:
                self._insert_mop(arg, node_id,leaf_node)
        elif mop.t == hr.mop_a:  
            self._insert_mop(mop.a, node_id,leaf_node)
        elif mop.t == hr.mop_p:  
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
    
    mba.set_mba_flags(mba.get_mba_flags() | mba_flags)
    return mba

def mba_handle(mba,taint_source,cur_call_func,next_call_func):
    
    
    
    block_start = -1
    isStartBlock = False
    isTaintOtherArgu = False
    isBlockInvoke = False
    
    block_vars = set()
    
    isEndBlock = False
    isFirstEndBlock=False
    isCorrectBlockInvoke=False
    Block_Parameter_taint_index = []
    for i in range(0, mba.qty):
        mblock = mba.get_mblock(i)
        insn = mblock.head
        while insn:
            
            
            leaf_nodes=[]
            microcode_insnviewer_t()._insert_minsn(insn,leaf_nodes)
            
            
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
                
                isTaint=False
                for leaf_list_index in range(len(leaf_list)-1):
                    if leaf_list[leaf_list_index] in taint_source:
                        isTaint=True
                if isTaint:
                    taint_source.add(leaf_list[-1])
            
            if insn.opcode == hr.m_call or insn.opcode == hr.m_icall:
                isFuncTaint=False
                
                isPossible=False
                possiblyfunc_features=["add"]
                possiblyfunc_features_list=[]
                for leaf_list_index in range(len(leaf_list)):
                    if leaf_list[leaf_list_index] in taint_source:
                        isFuncTaint=True
                    for possiblyfunc_feature in possiblyfunc_features:
                        
                        if isinstance(leaf_list[leaf_list_index],str) and possiblyfunc_feature in leaf_list[leaf_list_index]:
                            possiblyfunc_features_list.append(leaf_list_index)
                            isPossible=True
                if isFuncTaint and isPossible:
                    for leaf_list_index in range(len(leaf_list)):
                        
                        if (isinstance(leaf_list[leaf_list_index],str) and ("objc" in leaf_list[leaf_list_index] or "sub" in leaf_list[leaf_list_index])) or leaf_list_index in possiblyfunc_features_list:
                            continue
                        taint_source.add(leaf_list[leaf_list_index])
            
            if "Block" in cur_call_func:
                
                '''
                struct Block_literal {
                    void *isa;                  // Points to `NSConcreteStackBlock` or `NSConcreteGlobalBlock`
                    int flags;                  // Block flags (e.g., GLOBAL, HAS_COPY_DISPOSE)
                    int reserved;               // Reserved field (unused)
                    void (*invoke)(void *);     // Function pointer used to invoke the Block
                    struct Block_descriptor *descriptor;  // Block descriptor
                };
                NSConcreteStackBlock
                NSConcreteGlobalBlock
                NSConcreteMallocBlock
                '''
                
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
                    
                    for leaf_call_index_ in range(len(leaf_list)):
                        if leaf_call_index_==exclude_NSBlock_index:
                            continue
                        taint_source.add(leaf_list[leaf_call_index_])
                        block_vars.add(leaf_list[leaf_call_index_])
                
                if isStartBlock and block_start == 2:
                    for leaf_list_index in range(len(leaf_list)):
                        if isinstance(leaf_list[leaf_list_index],int) and leaf_list[leaf_list_index]==int(next_call_func,16):
                            isCorrectBlockInvoke=True
                if block_start>-1 and block_start<5:
                    block_start+=1
                
                if isCorrectBlockInvoke and isStartBlock and block_start==5:
                    
                    for leaf_list_index in range(len(leaf_list)):
                        if leaf_list[leaf_list_index] in taint_source:
                            Block_Parameter_taint_index.append(0)
                            
                            block_start=-1
                            isStartBlock=False
                            
                            isEndBlock=True
                            isFirstEndBlock=True
                            

                
                
                if isCorrectBlockInvoke:
                    
                    
                    
                    for leaf_list_index in range(len(leaf_list)):
                        if leaf_list[leaf_list_index] in block_vars:
                            
                            isBlockInvoke=True
                            isEndBlock=False
                            
                            isCorrectBlockInvoke=False
                            isStartBlock = False
                if isBlockInvoke:
                    for leaf_list_index in range(len(leaf_list)):
                        if leaf_list[leaf_list_index] in taint_source:
                            isTaintOtherArgu=True
                            isBlockInvoke=False
                if isTaintOtherArgu:
                    
                    Block_Parameter_taint_index.append("#")
                    return Block_Parameter_taint_index
                if isFirstEndBlock:
                    isFirstEndBlock=False


            elif ("[" in ida_funcs.get_func_name(int(next_call_func,16)) and "]" in ida_funcs.get_func_name(int(next_call_func,16))):
                next_objcfunc_sign = ida_funcs.get_func_name(int(next_call_func, 16))
                next_objcmethod_name = extract_objc_method(next_objcfunc_sign)
                
                isReadyCall=False
                for leaf_call_index_ in range(len(leaf_list)):
                    if next_objcmethod_name==leaf_list[leaf_call_index_]:
                        isReadyCall=True
                        break
                
                isParameterTaint=False
                
                Obj_Parameter_taint_index=[]
                Obj_next_call_param_taint_index=0
                is_obj_next_call_parm=False
                if isReadyCall:
                    
                    for leaf_call_taint_index in range(len(leaf_list)):
                        if leaf_list[leaf_call_taint_index] in taint_source and is_obj_next_call_parm:
                            isParameterTaint=True
                            Obj_Parameter_taint_index.append(Obj_next_call_param_taint_index)
                        if leaf_list[leaf_call_taint_index] == "objc_msgSend":
                            
                            Obj_next_call_param_taint_index=-1
                            is_obj_next_call_parm=True
                        Obj_next_call_param_taint_index+=1
                if isParameterTaint and len(Obj_Parameter_taint_index)!=0:
                    
                    return Obj_Parameter_taint_index
            elif "objc_msgSend" in ida_funcs.get_func_name(int(next_call_func,16)):
                
                
                next_objcfunc_sign = ida_funcs.get_func_name(int(next_call_func, 16))
                
                next_objcmethod_name = next_objcfunc_sign.split("$")[1]
                isReadyCall = False
                for leaf_call_index_ in range(len(leaf_list)):
                    if next_objcmethod_name == leaf_list[leaf_call_index_]:
                        isReadyCall = True
                        break
                
                isParameterTaint = False
                
                Obj_Parameter_taint_index = []
                Obj_next_call_param_taint_index = 0
                is_obj_next_call_parm = False
                if isReadyCall:
                    
                    for leaf_call_taint_index in range(len(leaf_list)):
                        if leaf_list[leaf_call_taint_index] in taint_source and is_obj_next_call_parm:
                            isParameterTaint = True
                            Obj_Parameter_taint_index.append(Obj_next_call_param_taint_index)
                        if leaf_list[leaf_call_taint_index] == "objc_msgSend":
                            
                            Obj_next_call_param_taint_index = -1
                            is_obj_next_call_parm = True
                        Obj_next_call_param_taint_index += 1
                if isParameterTaint and len(Obj_Parameter_taint_index) != 0:
                    
                    return Obj_Parameter_taint_index
            
            else:
                next_func_name=ida_funcs.get_func_name(int(next_call_func,16))
                Obj_Parameter_taint_index = []
                for leaf_call_taint_index in range(len(leaf_list)):
                    if isinstance(leaf_list[leaf_call_taint_index],int):
                        
                        func_name = ida_funcs.get_func_name(leaf_list[leaf_call_taint_index])
                        if func_name!=None:
                            if next_func_name==func_name:
                                for leaf_call_taint_index_inner in range(len(leaf_list)):
                                    if leaf_list[leaf_call_taint_index_inner] in taint_source:
                                        
                                        next_func_pfn = ida_funcs.get_func(int(next_call_func,16))
                                        next_func_pfn_mba=genMBA(next_func_pfn)
                                        for next_pararm_taint_index in range(next_func_pfn_mba.argidx.size()):
                                            Obj_Parameter_taint_index.append(next_pararm_taint_index)
                                        return Obj_Parameter_taint_index



            insn = insn.next

def getSourceList_Single(original_binary_path):
    
    exported_api_name=original_binary_path.split("/")[-1]
    
    exported_api_path="./LLM4Sec/exportedAPI/groundtruth_NSXPC/"+exported_api_name
    
    with open(exported_api_path, "r") as file:
        protocol_methods = []
        for line in file:
            line = line.strip()
            
            if line and line.startswith("@protocol"):
                protocol_name = line.split()[1]

                
                for method_line in file:
                    method_line = method_line.strip()
                    if method_line.startswith("@end"):
                        break
                    
                    if method_line and not method_line.startswith("@protocol"):
                        
                        protocol_methods.append(method_line)
                
                
                for method in protocol_methods:
                    
                    
                    print(f"Found method in {protocol_name}: {method}")
                
                
    
    source_list = []
    
    for method in protocol_methods:
        
        
        pattern = r'\((?:[^()]+|(?R))*\)'
        method_without_parentheses = regex.sub(pattern, '', method)
        
        
        
        
        
        method_without_parentheses = method_without_parentheses.strip('- ')
        
        
        method_without_parentheses = method_without_parentheses.strip('; ')
        
        
        if method_without_parentheses:
            source_list.append(method_without_parentheses)
            print(f"Added source: {method_without_parentheses}")
    
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
    
    entitlements=extract_entitlements(original_binary_path)
    if entitlements==None:
        return sink_list
    
    for entitlement in entitlements:
        
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
    res_source_list=[]

    binary_path=input_binary_path
    
    tempdir = new_init_env(binary_path)
    if (tempdir == ""):
        return
    service_source_list=getSourceList_Single(original_binary_path)
    complete_sink_list=[]
    service_sink_list=getSinkList_Single(original_binary_path)
    
    for sink_name in service_sink_list:
        if "View" in sink_name:
            continue

        func_eeea=idc.get_name_ea_simple(sink_name)
        '''
        if hex(func_eeea)=='0xffffffffffffffff' and ("[" in sink_name and "]" in sink_name):
            
            oc_func_prefix="_objc_msgSend$"
            sink_name=sink_name.replace("[","").replace("]","")
            ocfunc_name=oc_func_prefix+sink_name.split(" ")[1]
            func_eeea = idc.get_name_ea_simple(ocfunc_name)
        '''
        if hex(func_eeea)!='0xffffffffffffffff':
            complete_sink_list.append(func_eeea)

    
    complete_source_list=[]
    for temp_half_source in service_source_list:
        for func_ea in idautils.Functions():
            func_name = ida_name.get_ea_name(func_ea)
            if func_name and (temp_half_source in func_name):
                complete_source_list.append(func_name)  
    complete_source_list=list(set(complete_source_list))
    
    complete_sink_name_list=[]
    for temp_sink_addr in complete_sink_list:
        complete_sink_name_list.append(ida_funcs.get_func_name(temp_sink_addr))
    temp_source_index_list=[]
    temp_sink_index_list=[]
    
    for temp_sink_name_index in range(len(complete_sink_name_list)):
        yk_sink_name=complete_sink_name_list[temp_sink_name_index]
        for temp_source_name_index in range(len(complete_source_list)):
            yk_source_name=complete_source_list[temp_source_name_index]
            if yk_source_name==yk_sink_name:
                res_source_list.append(yk_source_name)
                temp_source_index_list.append(temp_source_name_index)
                temp_sink_index_list.append(temp_sink_name_index)
    
    temp_source_index_list.sort(reverse=True)
    temp_sink_index_list.sort(reverse=True)
    for yk_source_rem_i in temp_source_index_list:
        complete_source_list.pop(yk_source_rem_i)
    for yk_sink_rem_i in temp_sink_index_list:
        complete_sink_list.pop(yk_sink_rem_i)
    if len(complete_source_list)==0 or len(complete_source_list)==0:
        return res_source_list
    
    
    for single_source in complete_source_list:
        call_graphs=getCallGraph(single_source,complete_sink_list)
        call_graphs = list(map(list, set(map(tuple, call_graphs))))
        
        
        call_graph_success=[]
        for call_graph in call_graphs:
            
            call_graph.reverse()
            print("call_graph:", call_graph)
            sources = set()
            for call_level in range(len(call_graph)-1):
                
                
                cur_call_element=call_graph[call_level]
                if "Block" in cur_call_element:
                    cur_call_element=cur_call_element.replace("Block_","")
                current_call_addr=int(cur_call_element,16)
                current_call_pfn= ida_funcs.get_func(current_call_addr)
                call_mba=genMBA(current_call_pfn)
                
                if call_level==0:
                    
                    for i in range(2,call_mba.argidx.size()):
                        sources.add(list(call_mba.vars)[i].name)
                else:
                    
                    sources.clear()
                    if "#" in Parameter_taint_index_list:
                        
                        if len(Parameter_taint_index_list)==2:
                        
                            for next_pararm_taint_index in range(call_mba.argidx.size()):
                                sources.add(list(call_mba.vars)[next_pararm_taint_index].name)
                        else:
                        
                            for next_pararm_taint_index in range(call_mba.argidx.size()):
                                if next_pararm_taint_index==0:
                                    continue
                                sources.add(list(call_mba.vars)[next_pararm_taint_index].name)
                    else:
                        for next_pararm_taint_index in Parameter_taint_index_list:
                            sources.add(list(call_mba.vars)[next_pararm_taint_index].name)
                
                
                next_call_func=call_graph[call_level+1]
                if "Block" in next_call_func:
                    next_call_func = next_call_func.replace("Block_", "")
                Parameter_taint_index_list=mba_handle(call_mba,sources,call_graph[call_level],next_call_func)
                if Parameter_taint_index_list==None:
                    Parameter_taint_index_list=[]
                    break
                if Parameter_taint_index_list!=None and len(Parameter_taint_index_list)!=0 and call_level==len(call_graph)-2:
                    
                    call_graph_success.append(call_graph)
        if len(call_graph_success):
            res_source_list.append(single_source)
    close_env(tempdir)
    return res_source_list
def main():
    
    final_service_list={}
    count=0
    file=open("LLM4Sec/Data/groundtruth_NSXPC_Nocheck.txt", "r")
    file_lines=file.readlines()
    
    
    line_index=60
    
    line = file_lines[line_index]
    line = line.strip()
    program_name=line.split("/")[-1]
    if line:
        
        extracted_binary=extract_arm_binary_from_fat(line)
        if extracted_binary:
            
            source_list=startAnalysis(extracted_binary,line)
            count+=1
            if len(source_list)!=0:
                final_service_list[line]=source_list
                
                if final_service_list:
                    try:
                        
                        
                        
                        
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
    res_source_list = []

    binary_path = input_binary_path

    tempdir = new_init_env(binary_path)
    if (tempdir == ""):
        return
    complete_sink_list = {}
    service_sink_list = getSinkList_Single(original_binary_path)
    for sink_name in service_sink_list:
        if "View" in sink_name:
            continue

        func_eeea = idc.get_name_ea_simple(sink_name)
        '''
        if hex(func_eeea)=='0xffffffffffffffff' and ("[" in sink_name and "]" in sink_name):
            
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
    
    final_service_list = {}
    count = 0
    file = open("LLM4Sec/Data/groundtruth_NSXPC_Nocheck.txt", "r")
    file_lines = file.readlines()
    for line_index in range(len(file_lines)):
        
        
        
        line = file_lines[line_index]
        line = line.strip()
        program_name = line.split("/")[-1]
        if line:
            
            extracted_binary = extract_arm_binary_from_fat(line)
            if extracted_binary:
                
                sink_list = generateSinklistforSinglebinary(extracted_binary, line)
                
                output_file = f"LLMAssistant/S4_taint_analysis/{program_name}.json"

                
                with open(output_file, "w", encoding="utf-8") as f:
                    json.dump(sink_list, f, indent=2, ensure_ascii=False)
                print(f"[完成] sink_list 已写入: {output_file} sink_list length:{len(sink_list)}")

                count += 1
#dump_exported_apis_all()
init_ent_sink_map()
main()
#CountBinarySinklist()