import os
import subprocess
import shlex


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
f=open("groundtruth_nocheck","r")
final_res=0
#遍历每一行
for no_check_file in f.readlines():
    no_check_path=no_check_file[:-1]
    return_content=classdumpcccc(no_check_path)
    if return_content==None:
        continue
    return_content_list=return_content.split("\n")
    exportAPI_num=0
    protocol_start=0
    writefile_content_list=[]
    for return_line in return_content_list:
        #if return_line.startswith("@protocol") and return_line!="@protocol NSObject" and return_line!="@protocol NSCoding" and return_line!="@protocol NSXPCListenerDelegate <NSObject>":
        if return_line.startswith("@protocol"):
            protocol_start=1
            writefile_content_list.append(return_line)
        if protocol_start==1:
            if len(return_line)!=0 and return_line[0]=="-" and "listener" not in return_line:
                writefile_content_list.append(return_line)
                exportAPI_num+=1
        if return_line.startswith("@end") and protocol_start==1:
            writefile_content_list.append(return_line)
            protocol_start=0
    final_res+=exportAPI_num
    item=no_check_path.split("/")[-1]
    #写入文件看看情况
    outputfile_path="/Users/yenkoc/Downloads/protocolEnt_test/"
    f = open(outputfile_path+item, 'a')
    #写入二进制路径
    f.write("Service Path:\n")
    f.write(f"{no_check_path}\n")
    f.write("\n")
    f.write("Service Exported Protocols:\n")
    #写入协议
    for yk in writefile_content_list:
        f.write(f"{yk}\n")
    f.write("\n")
    #写入ent
    safe_file_url = shlex.quote(no_check_path)
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


        f.write("Service Entitlements:\n")
        # 将输出写入文件
        f.write(output_content)
        # print(f"Output written to {output_file}")

    except Exception as e:
        print(f"An error occurred while running the command: {e}")
print(final_res)