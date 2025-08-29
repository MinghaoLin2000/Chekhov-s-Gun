import json
import os
import shutil
from openai import OpenAI, api_key
import json
import re
import ast
import sys
import os

# 禁止外泄
usc_api_key = "xxxx"
stream = True  # or False

openai = OpenAI(
    api_key=usc_api_key,
    base_url="https://api.deepinfra.com/v1/openai",
)
stream = False  # or False

def combine_S2_result():
    #先combine一下S2_result，之后取数据更加方便，🤡


    # 源文件夹路径（包含子文件夹）
    source_dir = './../S2_result'

    # 目标文件夹路径（你想将文件整合到这里）
    destination_dir = './../S2_combine_result'

    # 确保目标文件夹存在
    if not os.path.exists(destination_dir):
        os.makedirs(destination_dir)

    # 遍历源文件夹的所有子文件夹和文件
    for root, dirs, files in os.walk(source_dir):
        for file in files:
            # 构建源文件的完整路径
            source_file = os.path.join(root, file)

            # 构建目标文件的完整路径
            destination_file = os.path.join(destination_dir, file)

            # 如果目标文件已经存在，改名避免覆盖
            if os.path.exists(destination_file):
                base, ext = os.path.splitext(file)
                counter = 1
                while os.path.exists(destination_file):
                    destination_file = os.path.join(destination_dir, f"{base}_{counter}{ext}")
                    counter += 1

            # 将文件复制到目标文件夹
            shutil.copy(source_file, destination_file)

    print("文件已成功复制到目标文件夹中！")



def combine_multi_function_for_LLM(function_file_path):
    sensitive_function_dir="./../S2_New_Classification/"
    func_pseudocode_dir="./../new_func_pseudocode/"
    S2_combine_result="./../S2_combine_result/"

    function_list=[]

    sensitive_function_file=sensitive_function_dir+function_file_path
    with open(sensitive_function_file,"r") as sensitive_function_f:
        sensitive_func_index_list=sensitive_function_f.readlines()
        #这里只是index，还需要根据index去找函数summary以及函数名字
        for sensitive_func_index in sensitive_func_index_list:
            sensitive_func_index=sensitive_func_index.replace("\n","")
            #拿到函数名字
            func_pseudocode_f=open(func_pseudocode_dir+f"{sensitive_func_index}.json","r")
            func_pseudocode_json = json.load(func_pseudocode_f)
            function_name=func_pseudocode_json["function_name"]
            #拿到函数的签名和summary
            function_signature=func_pseudocode_json["function_signature"]
            #summary
            S2_result_f = open(S2_combine_result + f"{sensitive_func_index}.json", "r")
            S2_result_f_json = json.load(S2_result_f)
            function_summary= S2_result_f_json["verdict"]["reason"]
            tmp_info={"function_name":function_name,"function_signature":function_signature,"function_summary":function_summary}
            function_list.append(tmp_info)
    return function_list



def ent_map_sinkfunction(ent_start,ent_end,ent_file_path,batch_size):
    # 先处理file_system_operations_file
    save_map_res_dir=ent_file_path.split(".")[0]
    Ent_classification_dir = "./EntitlementClassification_new/"
    Ent_desc_dir="./Entitlement_desc_dir_correct/"
    Ent_file = Ent_classification_dir + ent_file_path
    with open(Ent_file, "r") as f:
        ent_index_list = f.readlines()
        #相当于遍历每一个entitlement
        tmp_ent_index_list=ent_index_list[ent_start:ent_end]
        for tmp_ent_index in tmp_ent_index_list:
            #这里ent_index作为索引去Entitlement_desc_dir_correct里面找entitlement name以及capability
            tmp_ent_index=tmp_ent_index.replace("\n","")
            Ent_json_file=Ent_desc_dir+f"{tmp_ent_index}.json"
            with open(Ent_json_file, 'r', encoding='utf-8') as ent_json_f:
                ent_json = json.load(ent_json_f)
                #json文件然后取出entitlement和capability
                entitlement=ent_json["entitlement"]
                ent_capability=ent_json["capability"]
                #这里有一个拼装的过程，因为一个entitlement需要跟多个函数用llm判断
                functions_list=combine_multi_function_for_LLM(ent_file_path)
                entitlement_description={"entitlement_name":entitlement,"entitlement_capability":ent_capability}
                ent_save_filename = f"./Entitlement_map_func_dir/{save_map_res_dir}/{ent_start}_{ent_end}/ent_to_sink_list_{tmp_ent_index}.json"
                if os.path.exists(ent_save_filename):
                    print(f"Skipping entitlement '{entitlement}' as it has already been processed.")
                    continue
                #函数列表
                response_function_list=[]
                for i in range(0,len(functions_list),batch_size):
                    prompt_func_list=functions_list[i:i + batch_size]
                    custom_prompt = f"""
                        You are an expert in macOS system security and entitlements. You are given the description of an entitlement and a list of function details.
                        The entitlement describes a certain capability or permission granted to an app in the macOS system. The functions contain their name, signature, and a summary of what each function does.
    
                        Your task is to **match the entitlement with the relevant functions**. For each function, assess whether it could potentially align with the capability described by the entitlement. If it is relevant, mark it as matched, otherwise, mark it as non-matched.
    
                        ### Entitlement Description:
                        {entitlement_description}
    
                        ### Functions to Evaluate:
                        {prompt_func_list}
    
                        For each function, provide:
                        1. Whether the function **matches** the entitlement description.
                        
                        Example:
                        com.apple.security.cs.disable-library-validation. If I provide this entitlement. this entitlement can grant application to load unsigned
                        library/plugin. To find function that can align this entitlement, you can think about functions like +[NSBundle bundleWithURL:],
                        +[NSBundle bundleWithPath:],-[NSBundle initWithURL:],-[NSBundle initWithPath:],-[NSBundle load],-[NSBundle loadAndReturnError:], and so on.
    
                        ### 🧠 Self-Reflection:
                        After completing the initial labeling of all functions, please **review your own reasoning for consistency**:
                        - Are any mismatches due to vague or generic reasoning?
                        - Did you misinterpret a function's scope based on naming heuristics only?
                        - Are you assuming undocumented capabilities without basis?
                        
                        If any errors or inconsistencies are found in your initial reasoning, **correct them** before generating final output.

                        
                        Only return the results in **JSON format** with the following fields for each function:
                        ```json
                        {{
                    "function_name": "<function name>",
                            "match": "<True or False>",
                        }}
                        ```
                        """
                    response = openai.chat.completions.create(
                        # model="gpt-4.1",
                        # model="meta-llama/Meta-Llama-3-8B-Instruct",
                        model="google/gemini-2.5-flash",
                        messages=[
                            {"role": "system",
                             "content": "Please make sure the output format is **valid JSON**, no bare newlines are allowed, all newlines should be escaped by `\\n`, and the entire content must be parsable normally by `json.loads()`."},
                            {"role": "user", "content": custom_prompt}
                        ],
                        response_format={"type": "json_object"}
                    )

                    # print(response.choices[0].message.content)
                    json_str = response.choices[0].message.content
                    #print(json_str)
                    # print(type(json_str))
                    parsed_list = json.loads(json_str)
                    print(parsed_list)
                    for LLM_response in parsed_list:
                        if LLM_response["match"]:
                            response_function_list.append(LLM_response["function_name"])

                ent_map_sinkfunc_json={entitlement:response_function_list}
                with open(ent_save_filename, "w", encoding="utf-8") as f:
                    json.dump(ent_map_sinkfunc_json, f, indent=2, ensure_ascii=False)

                print(f"结果已保存至: {ent_save_filename}")



                # print(data)
                # 将函数写入对应文件
                #data["function_code"] = file_index
                # 把这个json数据写入到文件里面
                #with open(save_res_dir + "/" + str(file_index) + ".json", "w") as f:
                    #json.dump(data, f)





# 命令行参数处理
ent_map_sinkfunction(0,1,"/file_system_operations.txt",100)
#每一类的entitlement file
'''
Ent_classification_dir="./EntitlementClassification_new"
file_system_operations_ent_file=Ent_classification_dir+"/file_system_operations.txt"
privileged_networking_ent_file=Ent_classification_dir+"/privileged_networking.txt"
process_memory_control_ent_file=Ent_classification_dir+"/Ent_classification_dir.txt"
system_kernel_level_control_ent_file=Ent_classification_dir+"/system_kernel_level_control.txt"
tcc_related_resources_ent_file=Ent_classification_dir+"/tcc_related_resources.txt"
'''







