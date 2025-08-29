import json
import os
import shutil
from openai import OpenAI
from concurrent.futures import ThreadPoolExecutor
import threading
import argparse


usc_api_key = "xxxx"

stream = False

openai = OpenAI(
    api_key=usc_api_key,
    base_url="https://api.deepinfra.com/v1/openai",
)


def combine_S2_result():
    source_dir = './../S2_result'
    destination_dir = './../S2_combine_result'

    if not os.path.exists(destination_dir):
        os.makedirs(destination_dir)

    for root, dirs, files in os.walk(source_dir):
        for file in files:
            source_file = os.path.join(root, file)
            destination_file = os.path.join(destination_dir, file)

            if os.path.exists(destination_file):
                base, ext = os.path.splitext(file)
                counter = 1
                while os.path.exists(destination_file):
                    destination_file = os.path.join(destination_dir, f"{base}_{counter}{ext}")
                    counter += 1

            shutil.copy(source_file, destination_file)

    print("文件已成功复制到目标文件夹中！")


def combine_multi_function_for_LLM(function_file_path):
    sensitive_function_dir = "./../S2_New_Classification/"
    func_pseudocode_dir = "./../new_func_pseudocode/"
    S2_combine_result = "./../S2_combine_result/"

    function_list = []
    sensitive_function_file = sensitive_function_dir + function_file_path

    with open(sensitive_function_file, "r") as sensitive_function_f:
        sensitive_func_index_list = sensitive_function_f.readlines()
        for sensitive_func_index in sensitive_func_index_list:
            sensitive_func_index = sensitive_func_index.strip()
            with open(func_pseudocode_dir + f"{sensitive_func_index}.json", "r") as func_pseudocode_f:
                func_pseudocode_json = json.load(func_pseudocode_f)
                function_name = func_pseudocode_json["function_name"]
                function_signature = func_pseudocode_json["function_signature"]

            with open(S2_combine_result + f"{sensitive_func_index}.json", "r") as S2_result_f:
                S2_result_f_json = json.load(S2_result_f)
                function_summary = S2_result_f_json["verdict"]["reason"]

            tmp_info = {
                "function_name": function_name,
                "function_signature": function_signature,
                "function_summary": function_summary
            }
            function_list.append(tmp_info)
    return function_list


def process_entitlement(tmp_ent_index, ent_file_path, batch_size, save_map_res_dir, ent_start, ent_end):
    Ent_desc_dir = "./Entitlement_desc_dir_correct/"
    Ent_json_file = Ent_desc_dir + f"{tmp_ent_index}.json"

    with open(Ent_json_file, 'r', encoding='utf-8') as ent_json_f:
        ent_json = json.load(ent_json_f)
        entitlement = ent_json["entitlement"]
        ent_capability = ent_json["capability"]

    
    entitlement_description={"entitlement_name": entitlement}
    ent_save_filename = f"./Entitlement_map_func_dir/{save_map_res_dir}/{ent_start}_{ent_end}/ent_to_sink_list_{tmp_ent_index}.json"

    if os.path.exists(ent_save_filename):
        print(f"Skipping entitlement '{entitlement}' as it has already been processed.")
        return

    functions_list = combine_multi_function_for_LLM(ent_file_path)
    response_function_list = []

    for i in range(0, len(functions_list), batch_size):
        prompt_func_list = functions_list[i:i + batch_size]
        custom_prompt = f"""
You are a macOS userland security expert. I will give you an entitlement and a list of sensitive functions. Your job is to determine, strictly and conservatively, which functions are directly related to the entitlement — i.e., functions that are **likely used in combination with this entitlement in a real-world vulnerability or abuse scenario**.

Only mark match: true when the function is very clearly related. Otherwise, return match: false.

    

    然后我会先给entitlement，然后以及函数列表，请你返回那个函数列表中跟entitlement能配合可能产生漏洞的函数列表，也返回一个函数列表出来
        
        
        **Entitlement:**
        {entitlement_description}
        
        **Functions:**
        {prompt_func_list}
        
        ---
        ---
            
            **Output format**:
            The results are returned in **valid JSON** format, with the following fields:
            ```json
            [
            {{
            "function_name": "<function name>",
            "match": <true or false>
            }}
            ]
            """

        response = openai.chat.completions.create(
            model="google/gemini-2.5-flash",
            
            
            messages=[
                {"role": "system",
                 "content": "Please make sure the output format is **valid JSON**, no bare newlines are allowed, all newlines should be escaped by `\\n`, and the entire content must be parsable normally by `json.loads()`."},
                {"role": "user", "content": custom_prompt}
            ],
            response_format={"type": "json_object"}
        )

        json_str = response.choices[0].message.content
        parsed_list = json.loads(json_str)
        print(parsed_list)
        for LLM_response in parsed_list:
            print(f"llm_response:{LLM_response}")
            if LLM_response["match"]:
                print(f"function_name:{LLM_response["function_name"]}")
                response_function_list.append(LLM_response["function_name"])

    ent_map_sinkfunc_json = {entitlement: response_function_list}

    
    os.makedirs(os.path.dirname(ent_save_filename), exist_ok=True)

    with open(ent_save_filename, "w", encoding="utf-8") as f:
        json.dump(ent_map_sinkfunc_json, f, indent=2, ensure_ascii=False)

    print(f"结果已保存至: {ent_save_filename}")


def ent_map_sinkfunction(ent_start, ent_end, ent_file_path, batch_size, max_workers=12):
    save_map_res_dir = ent_file_path.split(".")[0]
    Ent_classification_dir = "./EntitlementClassification_new/"
    Ent_file = Ent_classification_dir + ent_file_path

    with open(Ent_file, "r") as f:
        ent_index_list = f.readlines()

    tmp_ent_index_list = [index.strip() for index in ent_index_list[ent_start:ent_end]]

    
    os.makedirs(f"./Entitlement_map_func_dir/{save_map_res_dir}/{ent_start}_{ent_end}", exist_ok=True)

    
    with ThreadPoolExecutor(max_workers=max_workers) as executor:
        futures = [
            executor.submit(process_entitlement, tmp_ent_index, ent_file_path, batch_size, save_map_res_dir, ent_start,
                            ent_end)
            for tmp_ent_index in tmp_ent_index_list
        ]
        
        for future in futures:
            future.result()


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Process entitlements with specified range and file.")
    parser.add_argument("ent_start", type=int, help="Start index for entitlement processing")
    parser.add_argument("ent_end", type=int, help="End index for entitlement processing")
    parser.add_argument("ent_file_path", type=str,
                        help="Path to the entitlement file (e.g., /file_system_operations.txt)")
    args = parser.parse_args()

    ent_map_sinkfunction(args.ent_start, args.ent_end, args.ent_file_path, 100)

'''

 
        - Are you relying only on names instead of summaries/signatures?
        - Are any matches speculative or undocumented?
        - When in doubt, prefer `match: false`.
'''