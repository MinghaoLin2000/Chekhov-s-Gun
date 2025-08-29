# Initialize HeadlessIda
from itertools import count
from operator import truediv
from pprint import pprint
from tempfile import tempdir
import ida
#from headless_ida import HeadlessIda
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
from genmc import genmc

from ida_gdl import FlowChart

#initiate environment
Ent_path="/System/Library/PrivateFrameworks/TrialServer.framework/XPCServices/TrialArchivingService.xpc/Contents/MacOS/TrialArchivingService"
noEnt_path="/System/Library/PrivateFrameworks/MetricMeasurement.framework/Versions/A/XPCServices/MetricMeasurementHelper.xpc/Contents/MacOS/MetricMeasurementHelper"
nsxpc_num=0
yk_fileNum=0
import struct
def handle_other_domain_service():
    xpc_begin = 0
    file_path = "./../state.txt"
    with open(file_path, 'r') as file:
        # 遍历文件中的每一行
        for line in file:
            # 去除行首尾的空白字符（例如换行符、空格等）
            line = line.strip()
            # 判断行是否以 "gui/501/" 开头
            if line.startswith("system/"):
                # 提取 "gui/501/" 之后的部分
                key = line[len("system/"):].split(" ")[0]  # 提取key并去除后面的其他内容
                print(f"Extracted key: {key}")
                xpc_begin = 1
            if xpc_begin == 1 and line.startswith("program ="):
                program_path = line[len("program = "):]
                print(f"program_path:{program_path}")
                outputdir_path = "/Users/yenkoc/Downloads/macSecGui"
                outputfile_path = os.path.join(outputdir_path, key + ".txt")
                # 判断文件是否存在
                if os.path.exists(program_path) and "Google" not in program_path and "Clash" not in program_path:
                    largeScaleDump(program_path, outputfile_path)
                    print(f"The file at {file_path} exists.")
                else:
                    print(f"The file at {file_path} does not exist.")
                xpc_begin = 0
def checkfileExist(program_path):
    if os.path.exists(program_path):
        #print(f"The file at {file_path} exists.")
        return True
    else:
        #print(f"The file at {file_path} does not exist.")
        return False

def is_fat_binary(file_path):
    """
    判断文件是否是 Fat Binary
    :param file_path: 文件路径
    :return: True 如果是 Fat Binary，否则 False
    """
    try:
        with open(file_path, "rb") as f:
            # 读取前 4 字节
            magic = f.read(4)

        # FAT_MAGIC 和 FAT_CIGAM 的标识
        FAT_MAGIC = 0xcafebabe
        FAT_CIGAM = 0xbebafeca

        # 将字节转换为整数（大端序）
        magic_number = struct.unpack(">I", magic)[0]

        # 判断是否匹配 FAT_MAGIC 或 FAT_CIGAM
        return magic_number in [FAT_MAGIC, FAT_CIGAM]

    except Exception as e:
        print(f"Error reading file: {e}")
        return False
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
    #ida.close_database(False)
def AddIfNSXPC():
    global nsxpc_num
    nsxpc_num+=1
def checkEntitlement_old(function_name,binary_path):
    # 增加判断，防止第二个函数也包含shouldxx，虽然可能性不大（
    FirstcheckNSXPC = 0
    # 获取函数地址
    for func_addr in idautils.Functions():
        funcname=ida_name.get_ea_name(func_addr)
        if function_name in funcname:
            '''
            with open("nsxpc_all_txt", 'a') as file:
                # 写入字符串并换行
                file.write(binary_path + '\n')
            '''
            if FirstcheckNSXPC==0:
                AddIfNSXPC() #判断是否是nsxpc
                FirstcheckNSXPC=1
            print(f"{hex(func_addr)} {ida_name.get_ea_name(func_addr)}")
            func = idaapi.get_func(func_addr)
            start_addr = func.start_ea
            end_addr = func.end_ea
            #just print for debug
            isFindRet=0
            # 从函数结束地址开始反向遍历指令
            current_addr = idc.prev_head(end_addr)
            while current_addr >= start_addr:
                # 获取汇编指令的操作码和操作数
                mnemonic = idc.print_insn_mnem(current_addr)
                op1 = idc.print_operand(current_addr, 0)
                op2 = idc.print_operand(current_addr, 1)
                # 检查是否是 ret 指令，且操作数涉及 w0 或 x0
                if mnemonic.lower() == "retab":
                    print(f"retn instruction found at {hex(current_addr)}: {mnemonic} {op1}, {op2}")
                    isFindRet=1
                if  (mnemonic.lower() == "mov" and isFindRet==1 and (op1 == "W0" or op1=="X0")):
                        if op2 and (idc.get_operand_type(current_addr, 1) == idc.o_imm):
                            print(f"mov instruction found at {hex(current_addr)}: {mnemonic} {op1}, {op2}")
                            ''' 
                            with open("nsxpc_nocheck_txt", 'a') as file:
                                # 写入字符串并换行
                                file.write(binary_path + '\n')
                            '''
                            return True
                        else:
                            '''
                            with open("nsxpc_check_txt", 'a') as file:
                                # 写入字符串并换行
                                file.write(binary_path + '\n')
                            return False
                            '''
                # 获取上一条指令地址
                current_addr = idc.prev_head(current_addr)
    return False #说明一直没有

def dumpProcotol(input_file,output_file):
    #利用一个class-dumpc的文件
    # 构造二进制文件路径
    binary_dir="/Users/yenkoc/Documents/GitHub/macOS_tool/UserSpace/python3/classdumpc/Release"
    binary_name="classdumpc"
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
        print(f"Running binary: {binary_path} with input file: {input_file}")

        # 执行二进制文件，并捕获其输出
        result = subprocess.run(
            [binary_path, input_file],  # 二进制文件和参数
            stdout=subprocess.PIPE,  # 捕获标准输出
            stderr=subprocess.PIPE,  # 捕获错误输出
            text=True  # 将输出解码为字符串
        )

        # 将结果写入输出文件
        with open(output_file, "w") as f:
            f.write(result.stdout)
        print(f"Output written to: {output_file}")
        # 打印标准错误输出（如果有）
        if result.stderr:
            print(f"Error output: {result.stderr}")

    except Exception as e:
        print(f"Error occurred while processing: {e}")
    #dump出ent
    safe_file_url = shlex.quote(input_file)
    command = f"codesign -d --entitlements - {safe_file_url}"

    try:
        # 执行 shell 命令
        result = subprocess.run(command, shell=True, text=True, capture_output=True)

        # 检查命令是否成功执行
        if result.returncode == 0:
            output_content = result.stdout
            #print("Command executed successfully.")
        else:
            output_content = f"Error:\n{result.stderr}"
            #print("Command failed with error:\n", result.stderr)

        with open(output_file, "a") as file:
            file.write("Entitlement ------------\n")
        # 将输出写入文件
        with open(output_file, "a") as file:
            file.write(output_content)
        #print(f"Output written to {output_file}")

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
    # 获取段的起始地址和结束地址
    seg = idautils.Segments()
    for seg_addr in seg:
        seg_name = idc.get_segm_name(seg_addr)
        if seg_name == segment_name:
            seg_start = idc.get_segm_start(seg_addr)
            seg_end = idc.get_segm_end(seg_addr)
            # 判断地址是否在段的范围内
            if addr>=seg_start and addr<= seg_end:
                return True
    return False

# 示例：判断某个地址（例如 0x1000）是否位于 `.text` 段中

#向前的一个污点分析
class forward_taint_analysis(ida_graph.GraphViewer):
    """Displays the graph view of Hex-Rays microcode."""

    def __init__(self):
        title = "Microinstruction: %s - %d.%d (%s)"
        ida_graph.GraphViewer.__init__(self, title, True)
        #self.mblock = mba.get_mblock(block)
        #self.minsn = self.get_minsn(serial)

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
        #self.AddEdge(parent, node_id)

        if mop.t == hr.mop_d:  # result of another instruction
            dst_id = self._insert_minsn(paths,mblock,mop.d,protocol_list,binary_path)
            if dst_id:
                self.AddEdge(node_id, dst_id)
        elif mop.t == hr.mop_f:  # list of arguments
            #这里判断是不是interfaceWithProtocol函数调用
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
                        #说明是局部变量，可以通过这个语句相当于做静态分析的source点了，得反向追一下数据流
                        while minsn.prev:
                            if minsn.opcode==hr.m_mov:
                                text = get_mcode_name(minsn.opcode) + '\n' + minsn._print()
                                print("game over")
                if arg_index==0:
                    getprotocol+=1
                #这里会出现不一定是cstr的type，比如spihelper这里就会漏掉
                if arg_index==1:
                    if node.t==hr.mop_str and node.cstr=="interfaceWithProtocol:":
                        getprotocol+=1
                    if node.t==hr.mop_a:
                        #函数名字
                        func_name_addr=node.a.g
                        if func_name_addr!=None:
                            #interface_addr = idc.get_bytes(func_name_addr, 8)
                            #interface_addr = struct.unpack('<Q', interface_addr)[0]
                            interface_name = idc.get_strlit_contents(func_name_addr)
                            #interface_name=interface_name.decode("utf-8")
                            if interface_name==b"interfaceWithProtocol:":
                                getprotocol+=1
                arg_index+=1

            for arg in mop.f.args:
                self._insert_mop(paths,mblock,minsn,arg, node_id,protocol_list,binary_path)
        elif mop.t == hr.mop_a:  # mop_addr_t: address of operand
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
        elif mop.t == hr.mop_p:  # operand pair
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
        #self.mblock = mba.get_mblock(block)
        #self.minsn = self.get_minsn(serial)

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

        if mop.t == hr.mop_d:  # result of another instruction
            dst_id = self._insert_minsn(paths,mblock,minsn,mop.d,protocol_list,binary_path)
            if dst_id:
                self.AddEdge(node_id, dst_id)
        elif mop.t == hr.mop_f:  # list of arguments
            #这里判断是不是interfaceWithProtocol函数调用
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
                        #说明是局部变量，可以通过这个语句相当于做静态分析的source点了，得反向追一下数据流
                        #node taint的节点
                        mblock_list=[]
                        tem_insn = mblock.head
                        #end返回是int类型，所以这里直接用head，然后收集一个list，然后反向的遍历
                        while tem_insn:
                            text =get_mcode_name(tem_insn.opcode) + '\n' + tem_insn._print()
                            if tem_insn._print()==minsn._print():
                                break
                          #  microcode_insnviewer_t()._insert_minsn(paths, mblock, insn, insn, protocol_list,binary_path)
                            # visit_top_insn(insn)
                            mblock_list.append(tem_insn)
                            tem_insn = tem_insn.next
                        #这里做一个切片，看看是不是m_mov指令
                        for forward_insn in reversed(mblock_list):
                            if forward_insn.opcode==hr.m_mov:
                                text = get_mcode_name(forward_insn.opcode) + '\n' + forward_insn._print()
                                #然后check 右操作数，是我们想要的node，d是目标操作数
                                d_op=forward_insn.d
                                temp_insn=forward_insn.l
                                test=node.l.var().name
                                if node.l.var().name == d_op.l.var().name:
                                    #逮住了，说明在进行赋值，然后找左边的是不是protocol，如果不是还需要继续处理
                                    forward_taint_analysis()._insert_mop("","",forward_insn,forward_insn.l,[],protocol_list,[])


                if arg_index==0:
                    getprotocol+=1
                #这里会出现不一定是cstr的type，比如spihelper这里就会漏掉
                if arg_index==1:
                    if node.t==hr.mop_str and node.cstr=="interfaceWithProtocol:":
                        getprotocol+=1
                    if node.t==hr.mop_a:
                        #函数名字
                        func_name_addr=node.a.g
                        if func_name_addr!=None:
                            #interface_addr = idc.get_bytes(func_name_addr, 8)
                            #interface_addr = struct.unpack('<Q', interface_addr)[0]
                            interface_name = idc.get_strlit_contents(func_name_addr)
                            #interface_name=interface_name.decode("utf-8")
                            if interface_name==b"interfaceWithProtocol:":
                                getprotocol+=1
                arg_index+=1

            for arg in mop.f.args:
                self._insert_mop(paths,mblock,minsn,arg, node_id,protocol_list,binary_path)
        elif mop.t == hr.mop_a:  # mop_addr_t: address of operand
            self._insert_mop(paths,mblock,minsn,mop.a, node_id,protocol_list,binary_path)
        elif mop.t == hr.mop_p:  # operand pair
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
    #判断是不是有继承
    '''
    protocol_list_addr = idc.get_bytes(addr+0x10,8)
    protocol_list_addr = struct.unpack('<Q', protocol_list_addr)[0]
    instance_method_list=[]
    if(protocol_list_addr!=0):
        #todo 继续往上解析
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
        print(f"Running binary: {binary_path} with input file: {input_file}")

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
                # 查找匹配项
                match = re.search(pattern, classDump_content_lines[i])

                if match:
                    # 获取 '<' 和 '>' 之间的内容，并以逗号分开
                    items = match.group(1).split(", ")
                    for next_protocol_name in items:
                        findAllProtocols(classDump_content_lines, next_protocol_name, protocol_file_content)
        if protocol_start!=-1 and "@end"==classDump_content_lines[i]:
            for yk in range(protocol_start,i+1):
                protocol_file_content.append(classDump_content_lines[yk])
            protocol_start=-1
#搞一个回溯的搜索函数路径
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
                # 查找引用该字符串的数据引用
                for ref in idautils.DataRefsTo(str_addr):
                    print(f"Found data reference at: {hex(ref)}")
                    for code_ref in idautils.DataRefsTo(ref):
                        print("code_ref:",code_ref)
                        #这里需要做一个向上的call graph搜索找到shouldaccept的函数才行
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

                                for i in range(1, mba.qty):
                                    mblock = mba.get_mblock(i)
                                    insn = mblock.head
                                    while insn:
                                        cur_len=len(protocol_list)
                                        microcode_insnviewer_t()._insert_minsn(paths,mblock, insn,insn, protocol_list, binary_path)

                                        # visit_top_insn(insn)
                                        insn = insn.next
                print(protocol_list)
                protocol_list=set(protocol_list)
                protocol_list=list(protocol_list)
                classDump_content = classdumpcccc(binary_path)
                classDump_content_lines = classDump_content.split("\n")
                f = open(outputfile_path, 'a')
                f.write(f"{binary_path}\n")
                # if "SPIHelper" in binary_path:
                #    print("debug")
                # 这里拿到那个协议的地址，然后遍历解析objc的结构
                for protocol in protocol_list:
                    if protocol==None:
                        continue
                    protocol_name = parseObjc_protocol(protocol)
                    protocol_file_content = []
                    if protocol_name==None:
                        continue
                    protocol_name = protocol_name.decode('utf-8')
                    findAllProtocols(classDump_content_lines, protocol_name, protocol_file_content)
                    # print(protocol_file_content)
                    for item in protocol_file_content:
                        f.write(f"{item}\n")  # 每个元素写入一行
                    # dump出ent
                safe_file_url = shlex.quote(binary_path)
                command = f"codesign -d --entitlements - {safe_file_url}"

                try:
                    # 执行 shell 命令
                    result = subprocess.run(command, shell=True, text=True, capture_output=True)

                    # 检查命令是否成功执行
                    if result.returncode == 0:
                        output_content = result.stdout
                        # print("Command executed successfully.")
                    else:
                        output_content = f"Error:\n{result.stderr}"
                        # print("Command failed with error:\n", result.stderr)
                    f.write("---------------------------------------\n")
                    f.write("Entitlement:\n")
                    # 将输出写入文件

                    f.write(output_content)
                    # print(f"Output written to {output_file}")

                except Exception as e:
                    print(f"An error occurred while running the command: {e}")
    '''
    function_name="shouldAcceptNewConnection"
    #protocol_list = []
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

            #text, mmat, mba_flags = ask_desired_maturity()
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
           # vp = printer_t()
            mba.set_mba_flags(mba.get_mba_flags() | mba_flags)

            for i in range(1, mba.qty):
                mblock = mba.get_mblock(i)
                insn = mblock.head
                while insn:
                    microcode_insnviewer_t()._insert_minsn(insn,protocol_list,binary_path)
                   # visit_top_insn(insn)
                    insn = insn.next
    print(protocol_list)
    classDump_content=classdumpcccc(binary_path)
    classDump_content_lines=classDump_content.split("\n")
    f=open(outputfile_path, 'a')
    f.write(f"{binary_path}\n")
    #if "SPIHelper" in binary_path:
    #    print("debug")
    #这里拿到那个协议的地址，然后遍历解析objc的结构
    for protocol in protocol_list:
        protocol_name=parseObjc_protocol(protocol)
        protocol_file_content=[]
        protocol_name = protocol_name.decode('utf-8')
        findAllProtocols(classDump_content_lines,protocol_name,protocol_file_content)
        #print(protocol_file_content)
        for item in protocol_file_content:
            f.write(f"{item}\n")  # 每个元素写入一行
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
#直接通过字符串来判断是否有
def checkEntitlement_new(function_name,binary_path):
    # 增加判断，防止第二个函数也包含shouldxx，虽然可能性不大（
    FirstcheckNSXPC = 0
    # 获取函数地址
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

    #走到这里说明不是NSXPC了，我们需要通过字符串来进行判断了
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


    return ("XPC",False) #说明一直没有


def largeScaleDump(binary_path,outputfile_path):
    #if "media" not in binary_path:
    #    return
    tempdir=init_env(binary_path,is_fat_binary(binary_path))
    if(tempdir==""):
        return
    #feature_forEntitle
    TargetFunc="shouldAcceptNewConnection"
    #check
    check_result=checkEntitlement_new(TargetFunc,binary_path)
    Data_dir="LLM4Sec/Data/"
    if check_result[0]=="NSXPC":
        #这里有两种结果
        if check_result[1]==True:
            #写入一个数据集文件夹里面吧
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


        #dump protocol and sandbox file
        #这个是把所有的protocol都dump出来了，用classdumpc
        #dumpProcotol(binary_path,outputfile_path)
        #dumpProcotol_IDA(binary_path,outputfile_path)
        print("yenkoc!")
    #close env and delete dir
    #else:
        #print("fxxxk binary_path:",binary_path) #包括了不是nsxpc，以及有ent check的
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
    # 遍历文件夹和子文件夹
    #yk_fileNum=0
    global yk_fileNum
    for root, dirs, files in os.walk(base_path):
        # 判断该目录是否包含 Contents/MacOS 子目录
        if 'Contents' in dirs:
            contents_path = os.path.join(root, 'Contents')
            macos_path = os.path.join(contents_path, 'MacOS')

            # 检查 Contents/MacOS 是否存在且是文件夹
            if os.path.isdir(macos_path):
                # 获取 MacOS 目录下的所有文件
                for binary in os.listdir(macos_path):
                    binary_path = os.path.join(macos_path, binary)
                    info_plist_path=os.path.join(contents_path,"Info.plist")
                    if os.path.isfile(binary_path) and "XPCServices" in binary_path and checkServiceType(info_plist_path):  # 确保是文件
                        print(f"Found binary: {binary_path}")
                        for item in os.listdir(macos_path):
                            item_path = os.path.join(macos_path, item)
                            # 如果是文件，则打印文件名
                            if os.path.isfile(item_path):
                                print(f"File: {item_path}")
                                print(f"Yk_fileNum: {yk_fileNum}")
                                outputdir_path="/Users/yenkoc/Downloads/protocolEnt"
                                #outputdir_path = "/Users/yenkoc/Downloads/macOSSec"
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


# 设置起始路径和目标文件夹名称
#ground_truth_dump_protool()

base_directory = "/System/Library/PrivateFrameworks/"  # 替换为你的根文件夹路径
target_folder_name = "MacOS"
# 调用函数
find_folder(base_directory, target_folder_name)
base_directory = "/System/Library/Frameworks/"  # 替换为你的根文件夹路径
target_folder_name = "MacOS"
# 调用函数
find_folder(base_directory, target_folder_name)
base_directory = "/System/Library/CoreServices/"  # 替换为你的根文件夹路径
target_folder_name = "MacOS"
# 调用函数
find_folder(base_directory, target_folder_name)
base_directory = "/System/Library/PreferencePanes/"  # 替换为你的根文件夹路径
target_folder_name = "MacOS"
# 调用函数
find_folder(base_directory, target_folder_name)
base_directory = "/System/Library/Templates/"  # 替换为你的根文件夹路径
target_folder_name = "MacOS"
# 调用函数
find_folder(base_directory, target_folder_name)
base_directory = "/System/Library/CryptoTokenKit/"  # 替换为你的根文件夹路径
target_folder_name = "MacOS"
# 调用函数
find_folder(base_directory, target_folder_name)
base_directory = "/System/Applications/"  # 替换为你的根文件夹路径
target_folder_name = "MacOS"
# 调用函数
find_folder(base_directory, target_folder_name)
print("totNSXPCNum:",nsxpc_num)
print("yk_fileNum:",yk_fileNum)



