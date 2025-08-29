benchmark_file="./groundtruth_construct/sensitivefunc.txt"
flash_file="./S2_benchmark_Classification/sensitivefunc.txt"

groundtruth_file = benchmark_file
llm_file = flash_file


with open(groundtruth_file, "r", encoding="utf-8") as f:
    groundtruth_set = set(line.strip() for line in f if line.strip())


with open(llm_file, "r", encoding="utf-8") as f:
    llm_set = set(line.strip() for line in f if line.strip())


false_positives = llm_set - groundtruth_set  
false_negatives = groundtruth_set - llm_set  


print(f"✅ Total Groundtruth: {len(groundtruth_set)}")
print(f"✅ Total LLM Predictions: {len(llm_set)}")
print(f"❌ False Positives (LLM-only): {len(false_positives)}")
print(f"❌ False Negatives (Missed by LLM): {len(false_negatives)}")


print("\nFalse Positives:")
for fp in sorted(false_positives):
    print(f"  {fp}")

print("\nFalse Negatives:")
for fn in sorted(false_negatives):
    print(f"  {fn}")

TP = len(groundtruth_set & llm_set)      
FP = len(false_positives)                
FN = len(false_negatives)                


precision = TP / (TP + FP) if (TP + FP) else 0
recall    = TP / (TP + FN) if (TP + FN) else 0
f1        = 2 * precision * recall / (precision + recall) if (precision + recall) else 0

print(f"\n📊 Metrics")
print(f"   Precision : {precision:.3%}")
print(f"   Recall    : {recall:.3%}")
print(f"   F1-score  : {f1:.3%}")