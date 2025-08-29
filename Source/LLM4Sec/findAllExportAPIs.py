import os
import subprocess
import shlex


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
def dumpEnt(path):

    f=open(path,"r")
    final_res=0
    
    blacklist=["@protocol NSObject","@protocol NSCoding","@protocol NSXPCListenerDelegate <NSObject>","@protocol NSCopying","@protocol NSSecureCoding <NSCoding>","@protocol NSXPCConnectionDelegate <NSObject>"]
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
            if return_line.startswith("@protocol") and return_line not in blacklist:
            
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
        
        outputfile_path="/Users/yenkoc/Downloads/protocolEnt_test/"
        f = open(outputfile_path+item, 'a')
        
        f.write("Service Path:\n")
        f.write(f"{no_check_path}\n")
        f.write("\n")
        f.write("Service Exported Protocols:\n")
        
        for yk in writefile_content_list:
            f.write(f"{yk}\n")
        f.write("\n")
        
        safe_file_url = shlex.quote(no_check_path)
        command = f"codesign -d --entitlements - {safe_file_url}"

        try:
            
            result = subprocess.run(command, shell=True, text=True, capture_output=True)

            
            if result.returncode == 0:
                output_content = result.stdout
                
            else:
                output_content = f"Error:\n{result.stderr}"
                


            f.write("Service Entitlements:\n")
            
            f.write(output_content)
            

        except Exception as e:
            print(f"An error occurred while running the command: {e}")

dumpEnt("Data/NSXPC_Nocheck.txt")
dumpEnt("Data/XPC_Nocheck.txt")
