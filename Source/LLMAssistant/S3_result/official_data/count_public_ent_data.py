import json

# Open the JSON file.
with open('final_entitlements_result.json', 'r', encoding='utf-8') as f:
    data = json.load(f)

# Count the entries in the dictionary.
if isinstance(data, dict):
    count = len(data)
    print(f"字典中有 {count} 个元素。")
else:
    print("JSON 顶层不是一个字典结构。")