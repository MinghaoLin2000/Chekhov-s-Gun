
from itertools import count
from operator import truediv
from pprint import pprint
from tempfile import tempdir
import ida

import tempfile
import shutil
import os
import re
from angr.procedures.definitions.glibc import proto
from cart.cart import binary
from claripy import false

import ida_funcs
import ida_graph
import ida_range


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
from genmc import genmc

from ida_gdl import FlowChart


Ent_path="/System/Library/PrivateFrameworks/TrialServer.framework/XPCServices/TrialArchivingService.xpc/Contents/MacOS/TrialArchivingService"
noEnt_path="/System/Library/PrivateFrameworks/MetricMeasurement.framework/Versions/A/XPCServices/MetricMeasurementHelper.xpc/Contents/MacOS/MetricMeasurementHelper"
nsxpc_num=0
yk_fileNum=0
import struct
def handle_other_domain_service():
    xpc_begin = 0
    file_path = "./../state.txt"
    with open(file_path, 'r') as file:
        
        for line in file:
            
            line = line.strip()
            
            if line.startswith("system/"):
                
                key = line[len("system/"):].split(" ")[0]  
                print(f"Extracted key: {key}")
                xpc_begin = 1
            if xpc_begin == 1 and line.startswith("program ="):
                program_path = line[len("program = "):]
                print(f"program_path:{program_path}")
                outputdir_path = "/Users/yenkoc/Downloads/macSecGui"
                outputfile_path = os.path.join(outputdir_path, key + ".txt")
                
                if os.path.exists(program_path) and "Google" not in program_path and "Clash" not in program_path:
                    largeScaleDump(program_path, outputfile_path)
                    print(f"The file at {file_path} exists.")
                else:
                    print(f"The file at {file_path} does not exist.")
                xpc_begin = 0
def checkfileExist(program_path):
    if os.path.exists(program_path):
        
        return True
    else:
        
        return False

def is_fat_binary(file_path):
    """
    Determine whether a file is a Fat Binary.
    :param file_path: File path
    :return: True if the file is a Fat Binary; otherwise, False
    """
    try:
        with open(file_path, "rb") as f:
            
            magic = f.read(4)

        
        FAT_MAGIC = 0xcafebabe
        FAT_CIGAM = 0xbebafeca

        
        magic_number = struct.unpack(">I", magic)[0]

        
        return magic_number in [FAT_MAGIC, FAT_CIGAM]

    except Exception as e:
        print(f"Error reading file: {e}")
        return False
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
    
def AddIfNSXPC():
    global nsxpc_num
    nsxpc_num+=1
def checkEntitlement_old(function_name,binary_path):
    
    FirstcheckNSXPC = 0
    
    for func_addr in idautils.Functions():
        funcname=ida_name.get_ea_name(func_addr)
        if function_name in funcname:
            '''
            with open("nsxpc_all_txt", 'a') as file:
                
                file.write(binary_path + '\n')
            '''
            if FirstcheckNSXPC==0:
                AddIfNSXPC() 
                FirstcheckNSXPC=1
            print(f"{hex(func_addr)} {ida_name.get_ea_name(func_addr)}")
            func = idaapi.get_func(func_addr)
            start_addr = func.start_ea
            end_addr = func.end_ea
            
            isFindRet=0
            
            current_addr = idc.prev_head(end_addr)
            while current_addr >= start_addr:
                
                mnemonic = idc.print_insn_mnem(current_addr)
                op1 = idc.print_operand(current_addr, 0)
                op2 = idc.print_operand(current_addr, 1)
                
                if mnemonic.lower() == "retab":
                    print(f"retn instruction found at {hex(current_addr)}: {mnemonic} {op1}, {op2}")
                    isFindRet=1
                if  (mnemonic.lower() == "mov" and isFindRet==1 and (op1 == "W0" or op1=="X0")):
                        if op2 and (idc.get_operand_type(current_addr, 1) == idc.o_imm):
                            print(f"mov instruction found at {hex(current_addr)}: {mnemonic} {op1}, {op2}")
                            ''' 
                            with open("nsxpc_nocheck_txt", 'a') as file:
                                
                                file.write(binary_path + '\n')
                            '''
                            return True
                        else:
                            '''
                            with open("nsxpc_check_txt", 'a') as file:
                                
                                file.write(binary_path + '\n')
                            return False
                            '''
                
                current_addr = idc.prev_head(current_addr)
    return False 

def dumpProcotol(input_file,output_file):
    
    
    binary_dir="/Users/yenkoc/Documents/GitHub/macOS_tool/UserSpace/python3/classdumpc/Release"
    binary_name="classdumpc"
    binary_path = os.path.join(binary_dir, binary_name)

    
    if not os.path.exists(binary_path):
        print(f"Error: Binary file '{binary_path}' not found.")
        return

    
    if not os.path.exists(input_file):
        print(f"Error: Input file '{input_file}' not found.")
        return

    
    try:
        print(f"Running binary: {binary_path} with input file: {input_file}")

        
        result = subprocess.run(
            [binary_path, input_file],  
            stdout=subprocess.PIPE,  
            stderr=subprocess.PIPE,  
            text=True  
        )

        
        with open(output_file, "w") as f:
            f.write(result.stdout)
        print(f"Output written to: {output_file}")
        
        if result.stderr:
            print(f"Error output: {result.stderr}")

    except Exception as e:
        print(f"Error occurred while processing: {e}")
    
    safe_file_url = shlex.quote(input_file)
    command = f"codesign -d --entitlements - {safe_file_url}"

    try:
        
        result = subprocess.run(command, shell=True, text=True, capture_output=True)

        
        if result.returncode == 0:
            output_content = result.stdout
            
        else:
            output_content = f"Error:\n{result.stderr}"
            

        with open(output_file, "a") as file:
            file.write("Entitlement ------------\n")
        
        with open(output_file, "a") as file:
            file.write(output_content)
        

    except Exception as e:
        print(f"An error occurred while running the command: {e}")
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

def is_address_in_segment(addr, segment_name):
    
    seg = idautils.Segments()
    for seg_addr in seg:
        seg_name = idc.get_segm_name(seg_addr)
        if seg_name == segment_name:
            seg_start = idc.get_segm_start(seg_addr)
            seg_end = idc.get_segm_end(seg_addr)
            
            if addr>=seg_start and addr<= seg_end:
                return True
    return False
class forward_taint_analysis(ida_graph.GraphViewer):
    """Displays the graph view of Hex-Rays microcode."""

    def __init__(self):
        title = "Microinstruction: %s - %d.%d (%s)"
        ida_graph.GraphViewer.__init__(self, title, True)
        
        

    def get_minsn(self, serial):
        curr = self.mblock.head
        for i in range(serial):
            curr = curr.next
        return curr

    def _insert_mop(self,paths,mblock,minsn, mop, parent, protocol_list,binary_path):
        if mop.t == hr.mop_z:
            return -1

        text = get_mopt_name(mop.t) + '\n' + mop._print()
        node_id = self.AddNode(text)
        

        if mop.t == hr.mop_d:  
            dst_id = self._insert_minsn(paths,mblock,mop.d,protocol_list,binary_path)
            if dst_id:
                self.AddEdge(node_id, dst_id)
        elif mop.t == hr.mop_f:  
            
            arg_index=0
            getprotocol=-1
            if "SPIHelper" in binary_path:
                print("debug")
            for node in mop.f.args:
                if arg_index==2:
                    if node.t==hr.mop_a and getprotocol==1:
                        protocol_addr = node.a.g
                        protocol_list.append(protocol_addr)
                    if node.t==hr.mop_l:
                        
                        while minsn.prev:
                            if minsn.opcode==hr.m_mov:
                                text = get_mcode_name(minsn.opcode) + '\n' + minsn._print()
                                print("game over")
                if arg_index==0:
                    getprotocol+=1
                
                if arg_index==1:
                    if node.t==hr.mop_str and node.cstr=="interfaceWithProtocol:":
                        getprotocol+=1
                    if node.t==hr.mop_a:
                        
                        func_name_addr=node.a.g
                        if func_name_addr!=None:
                            
                            
                            interface_name = idc.get_strlit_contents(func_name_addr)
                            
                            if interface_name==b"interfaceWithProtocol:":
                                getprotocol+=1
                arg_index+=1

            for arg in mop.f.args:
                self._insert_mop(paths,mblock,minsn,arg, node_id,protocol_list,binary_path)
        elif mop.t == hr.mop_a:  
            addr=mop.a.g
            segment_name = "__objc_protorefs"
            if addr!=None:
                for ref_addr in idautils.DataRefsTo(addr):
                    if ref_addr!=None:
                        if is_address_in_segment(ref_addr, "__objc_protorefs") or is_address_in_segment(ref_addr, "__objc_protolist"):
                            protocol_list.append(addr)
                            break
                            print(f"Address {hex(addr)} is in the {segment_name} segment.")
                        else:
                            print(f"Address {hex(addr)} is not in the {segment_name} segment.")

            self._insert_mop(paths,mblock,minsn,mop.a, node_id,protocol_list,binary_path)
        elif mop.t == hr.mop_p:  
            self._insert_mop(paths,mblock,minsn,mop.pair.lop, node_id,protocol_list,binary_path)
            self._insert_mop(paths,mblock,minsn,mop.pair.hop, node_id,protocol_list,binary_path)
        elif mop.t==hr.mop_str:
            func=mop.cstr
            if func=="interfaceWithProtocol:":
                print("sfafa")

        elif mop.t==hr.mop_h:
            call_func=mop.helper
        return node_id

    def _insert_minsn(self, paths,mblock,minsn,protocol_list,binary_path):
        if minsn:
            text = get_mcode_name(minsn.opcode) + '\n' + minsn._print()
            node_id = self.AddNode(text)

            self._insert_mop(paths,mblock,minsn, minsn.l, node_id,protocol_list,binary_path)
            self._insert_mop(paths,mblock,minsn, minsn.r, node_id,protocol_list,binary_path)
            self._insert_mop(paths,mblock,minsn, minsn.d, node_id,protocol_list,binary_path)
            return node_id
        return None

    def OnRefresh(self):
        self.Clear()
        self._insert_minsn(self.minsn)
        return True

    def OnGetText(self, node_id):
        return self._nodes[node_id]
class microcode_insnviewer_t(ida_graph.GraphViewer):
    """Displays the graph view of Hex-Rays microcode."""

    def __init__(self):
        title = "Microinstruction: %s - %d.%d (%s)"
        ida_graph.GraphViewer.__init__(self, title, True)
        
        

    def get_minsn(self, serial):
        curr = self.mblock.head
        for i in range(serial):
            curr = curr.next
        return curr

    def _insert_mop(self,paths,mblock,minsn, mop, parent, protocol_list,binary_path):
        if mop.t == hr.mop_z:
            return -1

        text = get_mopt_name(mop.t) + '\n' + mop._print()
        node_id = self.AddNode(text)
        self.AddEdge(parent, node_id)

        if mop.t == hr.mop_d:  
            dst_id = self._insert_minsn(paths,mblock,minsn,mop.d,protocol_list,binary_path)
            if dst_id:
                self.AddEdge(node_id, dst_id)
        elif mop.t == hr.mop_f:  
            
            arg_index=0
            getprotocol=-1
            if "SPIHelper" in binary_path:
                print("debug")
            for node in mop.f.args:
                if arg_index==2:
                    if node.t==hr.mop_a and getprotocol==1:
                        protocol_addr = node.a.g
                        protocol_list.append(protocol_addr)
                    if node.t==hr.mop_l:
                        
                        
                        mblock_list=[]
                        tem_insn = mblock.head
                        
                        while tem_insn:
                            text =get_mcode_name(tem_insn.opcode) + '\n' + tem_insn._print()
                            if tem_insn._print()==minsn._print():
                                break
                          
                            
                            mblock_list.append(tem_insn)
                            tem_insn = tem_insn.next
                        
                        for forward_insn in reversed(mblock_list):
                            if forward_insn.opcode==hr.m_mov:
                                text = get_mcode_name(forward_insn.opcode) + '\n' + forward_insn._print()
                                
                                d_op=forward_insn.d
                                temp_insn=forward_insn.l
                                test=node.l.var().name
                                if node.l.var().name == d_op.l.var().name:
                                    
                                    forward_taint_analysis()._insert_mop("","",forward_insn,forward_insn.l,[],protocol_list,[])


                if arg_index==0:
                    getprotocol+=1
                
                if arg_index==1:
                    if node.t==hr.mop_str and node.cstr=="interfaceWithProtocol:":
                        getprotocol+=1
                    if node.t==hr.mop_a:
                        
                        func_name_addr=node.a.g
                        if func_name_addr!=None:
                            
                            
                            interface_name = idc.get_strlit_contents(func_name_addr)
                            
                            if interface_name==b"interfaceWithProtocol:":
                                getprotocol+=1
                arg_index+=1

            for arg in mop.f.args:
                self._insert_mop(paths,mblock,minsn,arg, node_id,protocol_list,binary_path)
        elif mop.t == hr.mop_a:  
            self._insert_mop(paths,mblock,minsn,mop.a, node_id,protocol_list,binary_path)
        elif mop.t == hr.mop_p:  
            self._insert_mop(paths,mblock,minsn,mop.pair.lop, node_id,protocol_list,binary_path)
            self._insert_mop(paths,mblock,minsn,mop.pair.hop, node_id,protocol_list,binary_path)
        elif mop.t==hr.mop_str:
            func=mop.cstr
            if func=="interfaceWithProtocol:":
                print("sfafa")

        elif mop.t==hr.mop_h:
            call_func=mop.helper
        return node_id

    def _insert_minsn(self, paths,mblock,minsn_pass,minsn,protocol_list,binary_path):
        if minsn:
            text = get_mcode_name(minsn.opcode) + '\n' + minsn._print()
            node_id = self.AddNode(text)

            self._insert_mop(paths,mblock,minsn_pass, minsn.l, node_id,protocol_list,binary_path)
            self._insert_mop(paths,mblock,minsn_pass, minsn.r, node_id,protocol_list,binary_path)
            self._insert_mop(paths,mblock,minsn_pass, minsn.d, node_id,protocol_list,binary_path)
            return node_id
        return None

    def OnRefresh(self):
        self.Clear()
        self._insert_minsn(self.minsn)
        return True

    def OnGetText(self, node_id):
        return self._nodes[node_id]
'''
struct cd_objc_protocol
{
    uint32_t isa;
    uint32_t protocol_name;
    uint32_t protocol_list;
    uint32_t instance_methods;
    uint32_t class_methods;
};
struct __objc2_meth_list // sizeof=0x8
00000000 {                                       // XREF: __objc_methlist:_OBJC_CLASS_METHODS_MADAccessServer/r
00000000                                         // __objc_methlist:_OBJC_INSTANCE_METHODS_MADAccessServer/r ...
00000000     uint32_t entrysize;
00000004     uint32_t count;
00000008 };
 struct __objc2_meth // sizeof=0x18
00000000 {                                       // XREF: __objc_const:0000000100010008/r
00000000                                         // __objc_const:0000000100010020/r ...
00000000     char *name;
00000008     char *types;
00000010     IMP imp;
00000018 };
'''
def parseObjc_protocol(addr):
    if addr==None:
        return ""
    protocol_name_addr = idc.get_bytes(addr+8, 8)
    protocol_name_addr = struct.unpack('<Q', protocol_name_addr)[0]
    protocol_name=idc.get_strlit_contents(protocol_name_addr)
    return protocol_name
    
    '''
    protocol_list_addr = idc.get_bytes(addr+0x10,8)
    protocol_list_addr = struct.unpack('<Q', protocol_list_addr)[0]
    instance_method_list=[]
    if(protocol_list_addr!=0):
        
        print("func")
    instance_methods_addr = idc.get_bytes(addr+0x18, 8)
    instance_methods_addr = struct.unpack('<Q', instance_methods_addr)[0]
    entrysize_bytes=idc.get_bytes(instance_methods_addr, 4)
    count_bytes=idc.get_bytes(instance_methods_addr+4,4)
    entrysize = struct.unpack('<I', entrysize_bytes)[0]
    count = struct.unpack('<I', count_bytes)[0]
    objc2_meth_addr=instance_methods_addr+8
    for i in range(count):
        method_name_addr=struct.unpack('<Q', idc.get_bytes(objc2_meth_addr,8))[0]
        method_name = idc.get_strlit_contents(method_name_addr)
        method_type_addr = struct.unpack('<Q', idc.get_bytes(objc2_meth_addr+8, 8))[0]
        method_type = idc.get_strlit_contents(method_type_addr)
        objc2_meth_addr+=24
    '''
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
        print(f"Running binary: {binary_path} with input file: {input_file}")

        
        result = subprocess.run(
            [binary_path, input_file],  
            stdout=subprocess.PIPE,  
            stderr=subprocess.PIPE,  
            text=True  
        )
        return result.stdout
    except Exception as e:
        print(f"Error occurred while processing: {e}")
def findAllProtocols(classDump_content_lines,protocol_name,protocol_file_content):
    if protocol_name=="" or protocol_name=="NSObject":
        return
    line_size=len(classDump_content_lines)
    protocol_start=-1
    for i in range(line_size):
        if "@protocol "+protocol_name in classDump_content_lines[i] :
            protocol_start=i
            if "<" in classDump_content_lines[i] and ">" in classDump_content_lines[i]:
                pattern = r"<([^>]+)>"
                
                match = re.search(pattern, classDump_content_lines[i])

                if match:
                    
                    items = match.group(1).split(", ")
                    for next_protocol_name in items:
                        findAllProtocols(classDump_content_lines, next_protocol_name, protocol_file_content)
        if protocol_start!=-1 and "@end"==classDump_content_lines[i]:
            for yk in range(protocol_start,i+1):
                protocol_file_content.append(classDump_content_lines[yk])
            protocol_start=-1

def DFSSearchShouldAccept(ref_addr,judge_result,final_result):
    if "shouldAcceptNewConnection:" in idc.get_func_name(ref_addr):
        tmp=[]
        for res in judge_result:
            tmp.append(res)
        final_result.append(tmp)
    refs = idautils.CodeRefsTo(ref_addr, True)
    debug_stat=[re for re in idautils.CodeRefsTo(ref_addr, True)]
    if len(debug_stat)==0:
        refs = idautils.DataRefsTo(ref_addr)
        debug_stat1 = [re for re in idautils.DataRefsTo(ref_addr)]

    for code_ref in refs:
        if is_address_in_segment(code_ref, "__text") == False:
            next_func_addr=code_ref
        else:
            func = idaapi.get_func(code_ref)

            next_func_addr = func.start_ea

        judge_result.append(next_func_addr)
        DFSSearchShouldAccept(next_func_addr,judge_result,final_result)
        judge_result.pop()
def dumpProcotol_IDA(binary_path,outputfile_path):
    protocol_list = []
    for string_item in idautils.Strings():
        str_addr = string_item.ea
        str=idc.get_strlit_contents(str_addr)
        if str!=None:
            str=str.decode("utf-8")
            if "interfaceWithProtocol" in str:
                print(f"String: {str} | Address: {hex(str_addr)}")
                
                for ref in idautils.DataRefsTo(str_addr):
                    print(f"Found data reference at: {hex(ref)}")
                    for code_ref in idautils.DataRefsTo(ref):
                        print("code_ref:",code_ref)
                        
                        func = idaapi.get_func(code_ref)
                        judge_result=[func.start_ea]
                        final_result=[]
                        DFSSearchShouldAccept(func.start_ea,judge_result,final_result)
                        for paths in final_result:
                            for path in paths:
                                if is_address_in_segment(path, "__text") == False:
                                    continue
                                pfn = ida_funcs.get_func(path)
                                sea = path
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

                                for i in range(1, mba.qty):
                                    mblock = mba.get_mblock(i)
                                    insn = mblock.head
                                    while insn:
                                        cur_len=len(protocol_list)
                                        microcode_insnviewer_t()._insert_minsn(paths,mblock, insn,insn, protocol_list, binary_path)

                                        
                                        insn = insn.next
                print(protocol_list)
                protocol_list=set(protocol_list)
                protocol_list=list(protocol_list)
                classDump_content = classdumpcccc(binary_path)
                classDump_content_lines = classDump_content.split("\n")
                f = open(outputfile_path, 'a')
                f.write(f"{binary_path}\n")
                
                
                
                for protocol in protocol_list:
                    if protocol==None:
                        continue
                    protocol_name = parseObjc_protocol(protocol)
                    protocol_file_content = []
                    if protocol_name==None:
                        continue
                    protocol_name = protocol_name.decode('utf-8')
                    findAllProtocols(classDump_content_lines, protocol_name, protocol_file_content)
                    
                    for item in protocol_file_content:
                        f.write(f"{item}\n")  
                    
                safe_file_url = shlex.quote(binary_path)
                command = f"codesign -d --entitlements - {safe_file_url}"

                try:
                    
                    result = subprocess.run(command, shell=True, text=True, capture_output=True)

                    
                    if result.returncode == 0:
                        output_content = result.stdout
                        
                    else:
                        output_content = f"Error:\n{result.stderr}"
                        
                    f.write("---------------------------------------\n")
                    f.write("Entitlement:\n")
                    

                    f.write(output_content)
                    

                except Exception as e:
                    print(f"An error occurred while running the command: {e}")
    '''
    function_name="shouldAcceptNewConnection"
    
    for func_addr in idautils.Functions():
        funcname=ida_name.get_ea_name(func_addr)
        if function_name in funcname:
            pfn = ida_funcs.get_func(func_addr)
            sea=func_addr
            eea=pfn.end_ea
            addr_fmt = "%016x" if ida_ida.inf_is_64bit() else "%08x"
            fn_name = (ida_funcs.get_func_name(pfn.start_ea) if pfn else "0x%s-0x%s" % (addr_fmt % sea, addr_fmt % eea))

            F = ida_bytes.get_flags(sea)
            if not ida_bytes.is_code(F):
                return (False, "The selected range must start with an instruction")

            
            text = hr.MMAT_LVARS
            mmat = 8
            mba_flags = 0
            if text is None and mmat is None:
                return (True, "Cancelled")
            sel=False
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

            for i in range(1, mba.qty):
                mblock = mba.get_mblock(i)
                insn = mblock.head
                while insn:
                    microcode_insnviewer_t()._insert_minsn(insn,protocol_list,binary_path)
                   
                    insn = insn.next
    print(protocol_list)
    classDump_content=classdumpcccc(binary_path)
    classDump_content_lines=classDump_content.split("\n")
    f=open(outputfile_path, 'a')
    f.write(f"{binary_path}\n")
    
    
    
    for protocol in protocol_list:
        protocol_name=parseObjc_protocol(protocol)
        protocol_file_content=[]
        protocol_name = protocol_name.decode('utf-8')
        findAllProtocols(classDump_content_lines,protocol_name,protocol_file_content)
        
        for item in protocol_file_content:
            f.write(f"{item}\n")  
    '''
def get_pseudocode_for_func(func_ea):
    if not hr.init_hexrays_plugin():
        print("❌ Hex-Rays decompiler is not available.")
        return

    func = idaapi.get_func(func_ea)
    if not func:
        print("❌ Cannot find function at 0x{:X}".format(func_ea))
        return

    try:
        cfunc = hr.decompile(func)
        pseudocode_lines = cfunc.get_pseudocode()
        text = "\n".join([idaapi.tag_remove(line.line) for line in pseudocode_lines])
        return text
    except hr.DecompilationFailure:
        print("❌ Failed to decompile function at 0x{:X}".format(func_ea))
        return

def checkEntitlement_new(function_name,binary_path):
    
    FirstcheckNSXPC = 0
    
    for func_addr in idautils.Functions():
        funcname=ida_name.get_ea_name(func_addr)
        if function_name in funcname:
            print(f"{hex(func_addr)} {ida_name.get_ea_name(func_addr)}")
            func = idaapi.get_func(func_addr)
            start_addr = func.start_ea
            func_pseudocode=get_pseudocode_for_func(start_addr).split("\n")
            return_value=func_pseudocode[-2]

            if "return" in return_value and "v" in return_value:
                return ("NSXPC",True)
            else:
                return ("NSXPC",False)

            '''
            if "return 1" in return_value:
                for s in idautils.Strings():
                    if "Entitlement" in str(s) or "entitlement" in str(s):
                        return ("NSXPC", True)
                return ("NSXPC", False)
            else:
                return ("NSXPC", True)
            '''

    
    for s in idautils.Strings():
        if "Entitlement" in str(s) and "entitlement" in str(s):
            return ("XPC",True)
    for func_addr in idautils.Functions():
        funcname=ida_name.get_ea_name(func_addr)
        if "Entitlement" in funcname:
            return ("XPC",True)
    isExistXPCHandler=True
    for func_addr in idautils.Functions():
        funcname=ida_name.get_ea_name(func_addr)
        if "xpc_connection_set_event_handler" in funcname:
            isExistXPCHandler=False

    if isExistXPCHandler:
        return ("XPC",True)


    return ("XPC",False) 


def largeScaleDump(binary_path,outputfile_path):
    
    
    tempdir=init_env(binary_path,is_fat_binary(binary_path))
    if(tempdir==""):
        return
    
    TargetFunc="shouldAcceptNewConnection"
    
    check_result=checkEntitlement_new(TargetFunc,binary_path)
    Data_dir="LLM4Sec/Data/"
    if check_result[0]=="NSXPC":
        
        if check_result[1]==True:
            
            f1=open(Data_dir+"NSXPC_Check.txt","a")
            f1.write(binary_path+"\n")
        else:
            f2 = open(Data_dir + "NSXPC_Nocheck.txt", "a")
            f2.write(binary_path+"\n")

    elif check_result[0]=="XPC":
        if check_result[1]==True:
            f3=open(Data_dir+"XPC_Check.txt","a")
            f3.write(binary_path+"\n")
        else:
            f4=open(Data_dir+"XPC_Nocheck.txt","a")
            f4.write(binary_path+"\n")


        
        
        
        
        print("yenkoc!")
    
    
        
    close_env(tempdir)
def checkServiceType(info_plist_file_path):
    f=open(info_plist_file_path,"rb")
    pl=plistlib.loads(f.read())
    print("info_plist_file_path:",info_plist_file_path)
    if "ServiceType" in pl['XPCService']:
        ServiceType=pl['XPCService']['ServiceType']
        if ServiceType=="Application":
            return True
    return False

def find_folder(base_path, target_folder):
    
    
    global yk_fileNum
    for root, dirs, files in os.walk(base_path):
        
        if 'Contents' in dirs:
            contents_path = os.path.join(root, 'Contents')
            macos_path = os.path.join(contents_path, 'MacOS')

            
            if os.path.isdir(macos_path):
                
                for binary in os.listdir(macos_path):
                    binary_path = os.path.join(macos_path, binary)
                    info_plist_path=os.path.join(contents_path,"Info.plist")
                    if os.path.isfile(binary_path) and "XPCServices" in binary_path and checkServiceType(info_plist_path):  
                        print(f"Found binary: {binary_path}")
                        for item in os.listdir(macos_path):
                            item_path = os.path.join(macos_path, item)
                            
                            if os.path.isfile(item_path):
                                print(f"File: {item_path}")
                                print(f"Yk_fileNum: {yk_fileNum}")
                                outputdir_path="/Users/yenkoc/Downloads/protocolEnt"
                                
                                outputfile_path = os.path.join(outputdir_path, item + ".txt")
                                largeScaleDump(item_path, outputfile_path)
                                yk_fileNum += 1
def ground_truth_dump_protool():
    f=open("/Users/yenkoc/Documents/GitHub/macOS_tool/UserSpace/python3/groundtruth_nocheck","rb")
    for line in f.readlines():
        outputdir_path = "/Users/yenkoc/Downloads/protocolEnt"
        line_str=line.decode("utf-8")
        item=line_str.split("/")[-1][:-1]
        outputfile_path = os.path.join(outputdir_path, item + ".txt")
        largeScaleDump(line_str[:-1], outputfile_path)





base_directory = "/System/Library/PrivateFrameworks/"  
target_folder_name = "MacOS"

find_folder(base_directory, target_folder_name)
base_directory = "/System/Library/Frameworks/"  
target_folder_name = "MacOS"

find_folder(base_directory, target_folder_name)
base_directory = "/System/Library/CoreServices/"  
target_folder_name = "MacOS"

find_folder(base_directory, target_folder_name)
base_directory = "/System/Library/PreferencePanes/"  
target_folder_name = "MacOS"

find_folder(base_directory, target_folder_name)
base_directory = "/System/Library/Templates/"  
target_folder_name = "MacOS"

find_folder(base_directory, target_folder_name)
base_directory = "/System/Library/CryptoTokenKit/"  
target_folder_name = "MacOS"

find_folder(base_directory, target_folder_name)
base_directory = "/System/Applications/"  
target_folder_name = "MacOS"

find_folder(base_directory, target_folder_name)
print("totNSXPCNum:",nsxpc_num)
print("yk_fileNum:",yk_fileNum)



