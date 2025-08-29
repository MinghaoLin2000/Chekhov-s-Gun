import os

# 设置文件夹路径
folder_path = "/Users/yenkoc/Downloads/protocolEnt"
export_api_num=0
# 遍历文件夹中的所有文件
for filename in os.listdir(folder_path):
    file_path = os.path.join(folder_path, filename)
    export_api_num-=1

    # 检查是否是文件（而不是目录）
    if os.path.isfile(file_path):
        try:
            # 打开文件
            with open(file_path, 'r') as file:
                for line in file.readlines():
                    line_str=line
                    if line_str.startswith("-"):
                        export_api_num+=1
        except Exception as e:
            print(f"Could not open {filename}: {e}")

print("export_api_num:",export_api_num)