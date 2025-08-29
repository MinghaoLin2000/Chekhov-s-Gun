import os
import json

def writeDataIntoFile(file_path,function_code):
    with open(file_path, 'a', encoding='utf-8') as f:
        f.write(str(function_code) + '\n')

def saveDataintoFile(types,function_code):
    dir_path="./S2_New_Classification"
    for type in types:
        if type==1:
            writeDataIntoFile(dir_path+"/file_system_operations.txt",function_code)
        elif type==2:
            writeDataIntoFile(dir_path+"/privileged_networking.txt",function_code)
        elif type==3:
            writeDataIntoFile(dir_path+"/process_memory_control.txt",function_code)
        elif type==4:
            writeDataIntoFile(dir_path+"/system_kernel_level_control.txt",function_code)
        elif type==5:
            writeDataIntoFile(dir_path+"/tcc_related_resources.txt",function_code)



def load_json_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as file:
        data = json.load(file)
    return data
def list_all_files(directory):
    num=0
    for root, dirs, files in os.walk(directory):
        for file in files:
            full_path = os.path.join(root, file)
            if "DS_Store" in full_path:
                continue
            json_data = load_json_file(full_path)
            if "verdict" in json_data:
                if "types" in json_data["verdict"]:
                    types=json_data["verdict"]["types"]
                    if types==None:
                        continue
                    if(len(types)!=0):
                        saveDataintoFile(types,json_data["function_code"])
                        num+=1
    print(num)


# 示例调用
list_all_files("./S2_result")
