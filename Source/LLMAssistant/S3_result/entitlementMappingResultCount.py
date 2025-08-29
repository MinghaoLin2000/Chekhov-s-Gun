import os
import json


def combine_all_json_files(root_dir, output_file="combined_result_revised.json"):
    combine_ent_dict = {}

    for dirpath, _, filenames in os.walk(root_dir):
        for filename in filenames:
            if filename.endswith(".json"):
                filepath = os.path.join(dirpath, filename)
                try:
                    with open(filepath, "r", encoding="utf-8") as f:
                        data = json.load(f)
                        for ent, func_list in data.items():
                            if ent not in combine_ent_dict:
                                combine_ent_dict[ent] = set()
                            for tmp_func in func_list:
                                combine_ent_dict[ent].add(tmp_func)
                except Exception as e:
                    print(f"[错误] 无法解析文件: {filepath}，原因: {e}")

    # 将 set 转换为 list 以便写入 JSON
    serializable_dict = {ent: list(funcs) for ent, funcs in combine_ent_dict.items()}

    try:
        with open(root_dir+output_file, "w", encoding="utf-8") as out_f:
            json.dump(serializable_dict, out_f, indent=2, ensure_ascii=False)
        print(f"[完成] 合并后的结果已保存至: {output_file}")
    except Exception as e:
        print(f"[错误] 无法写入合并结果: {e}")

# ✅ 用法
folder_path = "./Entitlement_map_func_final/"
all_json_data = combine_all_json_files(folder_path)

'''
#按每一个类别的来
file_system_directory_path="./Entitlement_map_func_dir/tcc_related_resources/"
#
file_system_dict={}
for root, dirs, files in os.walk(file_system_directory_path):
    for file in files:
        if file.endswith(".json"):  # 只处理 json 文件
            file_path = os.path.join(root, file)
            print(file_path)
            with open(file_path, "r", encoding="utf-8") as f:
                try:
                    data = json.load(f)
                    print(f"成功解析 {file_path}")
                    for entitlement,func_list in data.items():
                        if entitlement in file_system_dict:
                            file_system_dict[entitlement]+=func_list
                        else:
                            file_system_dict[entitlement]=func_list
                    # 你可以在这里处理 data，比如合并、提取、写入等
                except json.JSONDecodeError as e:
                    print(f"解析失败: {file_path} -- {e}")
output_path = "Entitlement_map_func_final/tcc_related_resources.json"  # 保存文件路径

with open(output_path, "w", encoding="utf-8") as f:
    json.dump(file_system_dict, f, indent=2, ensure_ascii=False)
'''

'''
#按每一个类别的来
file_system_directory_path="./Entitlement_map_func_dir/privileged_networking/"
#
file_system_dict={}
for root, dirs, files in os.walk(file_system_directory_path):
    for file in files:
        if file.endswith(".json"):  # 只处理 json 文件
            file_path = os.path.join(root, file)
            print(file_path)
            with open(file_path, "r", encoding="utf-8") as f:
                try:
                    data = json.load(f)
                    print(f"成功解析 {file_path}")
                    for entitlement,func_list in data.items():
                        if entitlement in file_system_dict:
                            file_system_dict[entitlement]+=func_list
                        else:
                            file_system_dict[entitlement]=func_list
                    # 你可以在这里处理 data，比如合并、提取、写入等
                except json.JSONDecodeError as e:
                    print(f"解析失败: {file_path} -- {e}")
output_path = "./Entitlement_map_func_final/privileged_networking.json"  # 保存文件路径

with open(output_path, "w", encoding="utf-8") as f:
    json.dump(file_system_dict, f, indent=2, ensure_ascii=False)
'''
'''
#按每一个类别的来
file_system_directory_path="./Entitlement_map_func_dir/tcc_related_resources/"
#
file_system_dict={}
for root, dirs, files in os.walk(file_system_directory_path):
    for file in files:
        if file.endswith(".json"):  # 只处理 json 文件
            file_path = os.path.join(root, file)
            print(file_path)
            with open(file_path, "r", encoding="utf-8") as f:
                try:
                    data = json.load(f)
                    print(f"成功解析 {file_path}")
                    for entitlement,func_list in data.items():
                        if entitlement in file_system_dict:
                            file_system_dict[entitlement]+=func_list
                        else:
                            file_system_dict[entitlement]=func_list
                    # 你可以在这里处理 data，比如合并、提取、写入等
                except json.JSONDecodeError as e:
                    print(f"解析失败: {file_path} -- {e}")
output_path = "./Entitlement_map_func_final/tcc_related_resources_old.json"  # 保存文件路径

with open(output_path, "w", encoding="utf-8") as f:
    json.dump(file_system_dict, f, indent=2, ensure_ascii=False)
'''
