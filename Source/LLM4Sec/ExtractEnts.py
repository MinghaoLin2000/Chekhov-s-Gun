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
        
        result = subprocess.run(command, shell=True, text=True, capture_output=True)

        
        if result.returncode == 0:
            output_content = result.stdout
            
        else:
            output_content = f"Error:\n{result.stderr}"
            
        
        with open(output_file, "a") as file:
            file.write(f"file_path:{input_file}\n")
        with open(output_file, "a") as file:
            file.write("Entitlement ------------\n")
        
        with open(output_file, "a") as file:
            file.write(output_content)
        


    except Exception as e:
        print(f"An error occurred while running the command: {e}")
def checkServiceType(info_plist_file_path):
    f=open(info_plist_file_path,"rb")
    pl=plistlib.loads(f.read())
    
    if "ServiceType" in pl['XPCService']:
        ServiceType=pl['XPCService']['ServiceType']
        if ServiceType=="Application":
            return True
    return False
def find_folder(base_path, target_folder):
    
    
    NSXPC = findNSXPC()
    
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
                        
                        for item in os.listdir(macos_path):
                            item_path = os.path.join(macos_path, item)
                            
                            if os.path.isfile(item_path):
                                 if item_path not in NSXPC:
                                    dumpEnt(item_path)
                                    

base_directory = "/System/Library/PrivateFrameworks/"  
target_folder_name = "MacOS"

find_folder(base_directory, target_folder_name)
base_directory = "/System/Library/Frameworks/"  
target_folder_name = "MacOS"

find_folder(base_directory, target_folder_name)

'''
with open("output.txt", "w", encoding="utf-8") as f:
    for item in ent_set:
        f.write(item + "\n")  
'''