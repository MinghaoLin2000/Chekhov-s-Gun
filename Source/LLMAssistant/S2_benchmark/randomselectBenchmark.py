import os
import random
import os
import json
def get_filter_index():
    new_func_pseudocode_dir = "../new_func_pseudocode"

    filter_number=0
    filter_index_list=[]
    file_index=0
    #open new_func_pseudocode dirctor
    for file in os.listdir(new_func_pseudocode_dir):
        #json file parse
        with open(os.path.join(new_func_pseudocode_dir, file), "r") as f:
            data = json.load(f)
            file_index=int(file.split(".")[0])
            function_name = data["function_name"]
            function_argument_number = data["function_argument_number"]
            function_signature = data["function_signature"]
            pseudocode = data["pseudocode"]
            if (function_argument_number == 0):
                filter_number+=1
                filter_index_list.append(file_index)
            elif "[" in function_name and "]" in function_name and function_argument_number == 2:
                filter_number+=1
                filter_index_list.append(file_index)
            f.close()

    #print(filter_number)
    #print(filter_index_list)
    return filter_index_list

# 敏感抽700
randomselect_file_index_list=set()
sensitive_file_index_list=set()
sensitive_dir="../S2_Classification"
for root, dirs, files in os.walk(sensitive_dir):
    for file in files:
        full_path = os.path.join(root, file)
        with open(full_path,"r") as f:
            for line in f.readlines():
                sensitive_file_index_list.add(int(line.replace("\n","")))
sensitive_file_index_list=list(sensitive_file_index_list)

while(len(randomselect_file_index_list)!=700):
    select_index=random.randint(0,len(sensitive_file_index_list))
    file_index=sensitive_file_index_list[select_index]
    randomselect_file_index_list.add(file_index)

# 不敏感抽800
no_sensitive_file_index_list=set()
filter_index_list=get_filter_index()
filter_index_list+=sensitive_file_index_list
print(len(filter_index_list))
for i in range(22390):
    if i not in filter_index_list:
        no_sensitive_file_index_list.add(i)
no_sensitive_file_index_list=list(no_sensitive_file_index_list)

while(len(randomselect_file_index_list)!=1500):
    select_index=random.randint(0,len(no_sensitive_file_index_list))
    file_index=no_sensitive_file_index_list[select_index]
    randomselect_file_index_list.add(file_index)
print(randomselect_file_index_list)
randomselect_file_index_list=list(sorted(randomselect_file_index_list))
# save data into file
with open("benchmark_file.txt","w") as bm:
    for file_index in randomselect_file_index_list:
        bm.write(str(file_index)+"\n")






