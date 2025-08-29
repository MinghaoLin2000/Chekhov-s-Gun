import os

import json
original_dir="./S4_taint_analysis/"
filter_dir="./S4_taint_analysis_filter/"

files = [f for f in os.listdir(original_dir) if os.path.isfile(os.path.join(original_dir, f))]

all_func_number=-1

all_filter_func_number=-1
for file in files:
    original_file_path=original_dir+file
    filter_file_path=filter_dir+file
    if not os.path.exists(filter_file_path):
        print(f"[跳过] {file} 在过滤文件夹中不存在")
        continue

    try:
        with open(original_file_path, 'r', encoding='utf-8') as f1:
            original_data = json.load(f1)

        with open(filter_file_path, 'r', encoding='utf-8') as f2:
            filter_data = json.load(f2)

        
        len_original = len(original_data)
        len_filter = len(filter_data)
        all_func_number+=len_original
        all_filter_func_number+=len_filter
        n_false_positives = len_original - len_filter

        if n_false_positives > 0:
            false_positive_rate = n_false_positives / len_original
        else:
            false_positive_rate = 0.0
        print(f"{file}: 原始 = {len_original}, 过滤后 = {len_filter}, 误报率 = {false_positive_rate:8.2%}, 准确率 = {1-false_positive_rate:8.2%}")

    except Exception as e:
        print(f"[错误] 处理文件 {file} 时出错: {e}")
all_false_positives=all_func_number-all_filter_func_number
if all_false_positives > 0:
    false_positive_rate = all_false_positives / all_func_number
else:
    false_positive_rate = 0.0
print(f"总体的误报率: 原始 = {all_func_number}, 过滤后 = {all_filter_func_number}, 误报率 = {false_positive_rate:8.2%}, 准确率 = {1-false_positive_rate:8.2%}")
