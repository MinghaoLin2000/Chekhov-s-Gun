import os
import plistlib
import shlex
import subprocess

from IPSW.DownloadIpsw import output

ent_set={}
def collectEnt(input_file,output_content):
    res = output_content.split("\n\t")
    single_ent=[]
    for single_res in res:
        if single_res.startswith("[Key]"):
            ent=single_res.split("[Key] ")[1]
            single_ent.append(ent)
    ent_set[input_file]=single_ent

def findNSXPC():
    file_path_list=[]
    f1=open("./../groundtruth_nocheck","rb")
    for file_path in f1.readlines():
        file_path_list.append(file_path.decode("utf-8").replace('\n',""))
    f2 = open("./../groundtruth_check", "rb")
    for file_path1 in f2.readlines():
        file_path_list.append(file_path1.decode("utf-8").replace('\n',""))
    return file_path_list

def dumpEnt(input_file):
    safe_file_url = shlex.quote(input_file)
    command = f"codesign -d --entitlements - {safe_file_url}"
    output_file="/Users/yenkoc/Downloads/macOSNonNSXPC/"
    output_file+=input_file.split("/")[-1]
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
        #collectEnt(input_file,output_content)
        with open(output_file, "a") as file:
            file.write(f"file_path:{input_file}\n")
        with open(output_file, "a") as file:
            file.write("Entitlement ------------\n")
        # 将输出写入文件
        with open(output_file, "a") as file:
            file.write(output_content)
        # print(f"Output written to {output_file}")


    except Exception as e:
        print(f"An error occurred while running the command: {e}")
def checkServiceType(info_plist_file_path):
    f=open(info_plist_file_path,"rb")
    pl=plistlib.loads(f.read())
    #print("info_plist_file_path:",info_plist_file_path)
    if "ServiceType" in pl['XPCService']:
        ServiceType=pl['XPCService']['ServiceType']
        if ServiceType=="Application":
            return True
    return False
def find_folder(base_path, target_folder):
    # 遍历文件夹和子文件夹
    #yk_fileNum=0
    NSXPC = findNSXPC()
    #print(NSXPC)
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
                        #print(f"Found binary: {binary_path}")
                        for item in os.listdir(macos_path):
                            item_path = os.path.join(macos_path, item)
                            # 如果是文件，则打印文件名
                            if os.path.isfile(item_path):
                                 if item_path not in NSXPC:
                                    dumpEnt(item_path)
                                    #print(item_path)

base_directory = "/System/Library/PrivateFrameworks/"  # 替换为你的根文件夹路径
target_folder_name = "MacOS"
# 调用函数
find_folder(base_directory, target_folder_name)
base_directory = "/System/Library/Frameworks/"  # 替换为你的根文件夹路径
target_folder_name = "MacOS"
# 调用函数
find_folder(base_directory, target_folder_name)
#print(ent_set)
'''
with open("output.txt", "w", encoding="utf-8") as f:
    for item in ent_set:
        f.write(item + "\n")  # 每个元素占一行
'''