#open new_func_pseudocode dirctor
import os
import json
def get_filter_index():
    new_func_pseudocode_dir = "./new_func_pseudocode"

    filter_number=0
    filter_index_list=[]
    file_index=0
    #open new_func_pseudocode dirctor
    for file in os.listdir(new_func_pseudocode_dir):
        #json file parse
        with open(os.path.join(new_func_pseudocode_dir, file), "r") as f:
            data = json.load(f)
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
            file_index+=1
            f.close()

    #print(filter_number)
    #print(filter_index_list)
    return filter_index_list
        