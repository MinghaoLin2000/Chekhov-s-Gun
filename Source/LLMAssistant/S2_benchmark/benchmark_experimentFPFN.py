benchmark_file="./groundtruth_construct/sensitivefunc.txt"
flash_file="./S2_benchmark_Classification/sensitivefunc.txt"
# 替换为你的文件路径
groundtruth_file = benchmark_file
llm_file = flash_file

# 读取 groundtruth 函数名列表
with open(groundtruth_file, "r", encoding="utf-8") as f:
    groundtruth_set = set(line.strip() for line in f if line.strip())

# 读取 LLM 分类结果函数名列表
with open(llm_file, "r", encoding="utf-8") as f:
    llm_set = set(line.strip() for line in f if line.strip())

# 计算 False Positives 和 False Negatives
false_positives = llm_set - groundtruth_set  # 误报：预测有但实际没有
false_negatives = groundtruth_set - llm_set  # 漏报：实际有但预测没发现

# 输出结果
print(f"✅ Total Groundtruth: {len(groundtruth_set)}")
print(f"✅ Total LLM Predictions: {len(llm_set)}")
print(f"❌ False Positives (LLM-only): {len(false_positives)}")
print(f"❌ False Negatives (Missed by LLM): {len(false_negatives)}")

# 如需打印具体项：
print("\nFalse Positives:")
for fp in sorted(false_positives):
    print(f"  {fp}")

print("\nFalse Negatives:")
for fn in sorted(false_negatives):
    print(f"  {fn}")
# 计算混淆矩阵
TP = len(groundtruth_set & llm_set)      # 真阳性：LLM 命中且基准也认为是 sink
FP = len(false_positives)                # 假阳性：LLM 命中但基准认为不是 sink
FN = len(false_negatives)                # 假阴性：基准是 sink 但 LLM 漏掉

# 避免除零错误
precision = TP / (TP + FP) if (TP + FP) else 0
recall    = TP / (TP + FN) if (TP + FN) else 0
f1        = 2 * precision * recall / (precision + recall) if (precision + recall) else 0

print(f"\n📊 Metrics")
print(f"   Precision : {precision:.3%}")
print(f"   Recall    : {recall:.3%}")
print(f"   F1-score  : {f1:.3%}")