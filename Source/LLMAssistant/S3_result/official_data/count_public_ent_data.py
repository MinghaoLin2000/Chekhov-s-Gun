import json

# 打开 JSON 文件
with open('final_entitlements_result.json', 'r', encoding='utf-8') as f:
    data = json.load(f)

# 计算字典的元素个数
if isinstance(data, dict):
    count = len(data)
    print(f"字典中有 {count} 个元素。")
else:
    print("JSON 顶层不是一个字典结构。")