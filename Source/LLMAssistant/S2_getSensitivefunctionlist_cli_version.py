
from openai import OpenAI, api_key
import json
import re
import sys
import os

def get_filter_index():
    new_func_pseudocode_dir = "./new_func_pseudocode"

    filter_number=0
    filter_index_list=[]
    file_index=0
    
    for file in os.listdir(new_func_pseudocode_dir):
        
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

    
    
    return filter_index_list

def file_exists_in_dir(filename, directory):
    """
    判断文件是否存在于指定目录中（不递归子目录）
    """
    os.makedirs(directory, exist_ok=True)
    
    
    return filename in os.listdir(directory)


example1='''
-[LSRLanguageModel trainAppLmFromPlainTextAndWriteToAppDirectory:vocabFile:]
void __cdecl -[LSRLanguageModel trainAppLmFromPlainTextAndWriteToAppDirectory:vocabFile:](
        LSRLanguageModel *self,
        SEL a2,
        id *a3,
        id *a4)
{
  void *v7; // x20
  os_log_s *v8; // x22
  void *v9; // x22
  unsigned __int8 v10; // w23
  os_log_s *v11; // x21
  id v12; // x23
  os_log_s *v13; // x22
  void *v14; // x23
  int v15; // [xsp+0h] [xbp-50h] BYREF
  const char *v16; // [xsp+4h] [xbp-4Ch]
  __int16 v17; // [xsp+Ch] [xbp-44h]
  void *v18; // [xsp+Eh] [xbp-42h]

  -[_EARAppLmData setInputFormat:](self->_appLmData, "setInputFormat:", 1LL);
  v7 = objc_retainAutoreleasedReturnValue(
         +[_EARLmBuilder buildLmWithConfig:root:data:dir:shouldStop:](
           &OBJC_CLASS____EARLmBuilder,
           "buildLmWithConfig:root:data:dir:shouldStop:",
           self->_recognizerConfigFilePath,
           CFSTR("app-lm.NGRAM"),
           self->_appLmData,
           &stru_10005A368,
           0LL));
  v8 = (os_log_s *)SFLogConnection;
  if ( !v7 )
  {
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
    {
      v15 = 136315138;
      v16 = "-[LSRLanguageModel trainAppLmFromPlainTextAndWriteToAppDirectory:vocabFile:]";
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        v8,
        OS_LOG_TYPE_ERROR,
        "%s Failed to train model successfully",
        (uint8_t *)&v15,
        0xCu);
      if ( !a3 )
        goto LABEL_13;
    }
    else if ( !a3 )
    {
      goto LABEL_13;
    }
    *a3 = 0LL;
    goto LABEL_13;
  }
  if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_DEBUG) )
  {
    v15 = 136315138;
    v16 = "-[LSRLanguageModel trainAppLmFromPlainTextAndWriteToAppDirectory:vocabFile:]";
    _os_log_debug_impl(
      (void *)&_mh_execute_header,
      v8,
      OS_LOG_TYPE_DEBUG,
      "%s Model trained successfully!",
      (uint8_t *)&v15,
      0xCu);
    v8 = (os_log_s *)SFLogConnection;
  }
  if ( os_log_type_enabled(v8, OS_LOG_TYPE_DEBUG) )
  {
    v12 = *a3;
    v13 = objc_retain(v8);
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "path"));
    v15 = 136315394;
    v16 = "-[LSRLanguageModel trainAppLmFromPlainTextAndWriteToAppDirectory:vocabFile:]";
    v17 = 2112;
    v18 = v14;
    _os_log_debug_impl((void *)&_mh_execute_header, v13, OS_LOG_TYPE_DEBUG, "%s Writing to: %@", (uint8_t *)&v15, 0x16u);
    objc_release(v14);
    objc_release(v13);
  }
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(*a3, "path"));
  v10 = (unsigned __int8)objc_msgSend(v7, "writeToDirectory:", v9);
  objc_release(v9);
  if ( (v10 & 1) == 0 )
  {
    v11 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
    {
      v15 = 136315138;
      v16 = "-[LSRLanguageModel trainAppLmFromPlainTextAndWriteToAppDirectory:vocabFile:]";
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        v11,
        OS_LOG_TYPE_ERROR,
        "%s Write process failed",
        (uint8_t *)&v15,
        0xCu);
    }
    a4 = a3;
    goto LABEL_14;
  }
LABEL_13:
  if ( a4 )
LABEL_14:
    *a4 = 0LL;
  objc_release(v7);
}
'''

example2='''
bool __cdecl -[DeviceUIServiceViewController performDragOperation:](DeviceUIServiceViewController *self, SEL a2, id a3)
{
  id v4; // x19
  AMPDevicesClient *v5; // x21
  AMPDevice *v6; // x20

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController fileURLsForDrag:](self, "fileURLsForDrag:", a3));
  if ( v4 )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController devicesClient](self, "devicesClient"));
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController device](self, "device"));
    -[AMPDevicesClient copyFiles:toDevice:withReply:](v5, "copyFiles:toDevice:withReply:", v4, v6, &stru_1000B8A38);
    objc_release(v6);
    objc_release(v5);
  }
  objc_release(v4);
  return v4 != 0LL;
}
'''


usc_api_key = "xxx"
stream = True  

openai = OpenAI(
    api_key=usc_api_key,
    base_url="https://api.deepinfra.com/v1/openai",
)
stream = False  


save_res_dir="./sensitive_save_res_dir"

filter_index_list=get_filter_index()


if len(sys.argv) != 3:
    print("Usage: python your_script.py <start_index> <end_index>")
    sys.exit(1)

try:
    start_index = int(sys.argv[1])
    end_index = int(sys.argv[2])
except ValueError:
    print("Start and end indices must be integers.")
    sys.exit(1)

print(f"Processing from index {start_index} to {end_index - 1}")
save_res_dir=f"./S2_result/new_func_pseudocode_{start_index}_{end_index}"
all_func_pse_dir="./new_func_pseudocode"
for file_index in range(start_index,end_index):
    
    check_result=file_exists_in_dir(f"{file_index}.json", save_res_dir)
    
    if file_index in filter_index_list or check_result:
        continue
    print(f"file_index:{file_index}")

    with open(all_func_pse_dir+"/"+str(file_index)+".json", "r") as f:
        data = json.load(f)
        function_name = data["function_name"]
        function_argument_number = data["function_argument_number"]
        function_signature = data["function_signature"]
        pseudocode = data["pseudocode"]
        target_function=pseudocode
        prompt = f"""
        You are an expert in macOS user-space security. Your task is to analyze a given function and determine whether it belongs to one or more of the following 5 types of **sensitive operations**. Follow a structured 3-step reasoning process and then provide a final decision and explanation.
        Sensitive Operation Types:
            1. File and File System Operations
            Involving operating system file permissions, file reading and writing, etc., which may affect system integrity or privacy leakage, such as:
            ⟶ Modifying file permissions or ownership (such as chmod / chown)
            ⟶ Performing read, write/delete operations on system or other users' files
            ⸻
            2. Privileged Networking
            Involving sensitive operations in network communications, which may lead to unauthorized access or information leakage, such as:
            ⟶ Starting services such as privileged ports 80, 443, 22
            ⟶ Directly constructing network packets (for ping, ICMP, TCP SYN flood, etc.)
            ⸻
            3. Process and Memory Management
            Involving the control of system running processes and memory, attackers can use this to implement high-risk behaviors such as injecting third-party libraries, such as:
            ⟶ Creating, terminating, debugging processes, or obtaining sensitive process information
            ⟶ Accessing arbitrary process memory space may lead to information leakage or sandbox bypass
            ⟶ Ability to load unsigned third-party libraries, which may lead to arbitrary code execution
            ⸻
            4. System & Kernel Level Control
            Affects the behavior of the entire system and is the highest privilege operation. Once abused, it may lead to complete control of the system, such as:
            ⟶ Modify system-level configuration (such as firewall, startup items, etc.)
            ⟶ Load or inject KEXT to control kernel behavior and achieve LPE (local privilege escalation)
            5. Access Transparency Consent and Control (TCC) related functions, such as:
                Access some tcc-protected resources without user consent, such as
                • Photos: Access photos taken or stored by users.
                • Camera: Collect videos or images through the system camera.
                • Microphone: Recording or voice input.
                • Bluetooth: Access Bluetooth device information or data.
                • Contacts: Read contacts.
                • Location: Get GPS or WiFi location information.
            • Calendars / Reminders: Read or write user schedules.
            • Screen Recording: Capture the user's current desktop screen.
            • Input Monitoring: Monitor the user's keyboard input, which poses a risk of keyboard logging.
            • File system directories (such as Downloads, Desktop): Access user private directories through the SystemPolicy* series entitlement.
        ——————————————
        
        Example 1
        Function:
        {example1}
        Step 1 (Function name & parameters):

        The name trainAppLmFromPlainTextAndWriteToAppDirectory:vocabFile: and parameter path suggest it is operating on a file.
        
        Step 2 (Function body):
        
        Calls  +[_EARLmBuilder buildLmWithConfig:root:data:dir:shouldStop:](
           &OBJC_CLASS____EARLmBuilder,
           "buildLmWithConfig:root:data:dir:shouldStop:",
           self->_recognizerConfigFilePath,
           CFSTR("app-lm.NGRAM"),
           self->_appLmData,
           &stru_10005A368,
           0LL)); 这个函数, indicting it is operating on file .
        
        Step 3 (Log String analysis):
        
        v16 = "-[LSRLanguageModel trainAppLmFromPlainTextAndWriteToAppDirectory:vocabFile:]";
    v17 = 2112;
    v18 = v14;
    _os_log_debug_impl((void *)&_mh_execute_header, v13, OS_LOG_TYPE_DEBUG, "%s Writing to: %@", (uint8_t *)&v15, 0x16u);
    these log indict it is operating on file
        
        ✅ Verdict:
        As long as one of the three steps indicates a sensitive operation, we consider this function to be a sensitive function. All three steps of this function indicate file operations.
        This function is a sensitive operation. Type: [1] File I/O
        
    Example2:
    {example2}
    Step 1 (Function name & parameters):
    bool __cdecl -[DeviceUIServiceViewController performDragOperation:](DeviceUIServiceViewController *self, SEL a2, id a3)
    There is no clue that it is related to sensitive operations.
    
    Step 2 (Function body):
    v4 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController fileURLsForDrag:](self, "fileURLsForDrag:", a3));
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController devicesClient](self, "devicesClient"));
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController device](self, "device"));
    -[AMPDevicesClient copyFiles:toDevice:withReply:](v5, "copyFiles:toDevice:withReply:", v4, v6, &stru_1000B8A38);
    these operations indict it is operating on file
    
    Step 3 (Log String analysis):
        There is no clue that it is related to sensitive operations.
        
    ✅ Verdict:
    As long as one of the three steps indicates a sensitive operation, we consider this function to be a sensitive function. one of three steps of this function indicate file operations.
    This function is a sensitive operation. Type: [1] File I/O
        
    Now analyze the following function:
    {target_function}
    
    🔍 Step 1: Function name and parameter analysis
        What does the function name imply?
        Do the parameter names indicate sensitive usage?



    🔍 Step 2: Function body behavior
        Does it invoke any sensitive APIs or operations?
        Are there any system calls or resource access patterns?
    
    🔍 Step 3: log String analysis
        Do the string literals suggest sensitive intent?
    ✅ Final Verdict:
    Is this a sensitive operation? Yes / No
    
    If yes, which type(s)? [1~5]
    
    Explain briefly why.
    
    ✏️ Your answer:
    
    
    
    - Did you overlook any indicators of sensitivity?
    - Is your verdict well supported by the evidence?
    - Can you improve the explanation or classification?

✏️ Your reflection:


1. Only output JSON, do not add extra explanations or code boxes;
2. All strings are prohibited from containing raw line breaks (\n), please use `\\n` instead;
3. All double quotes must be escaped as `\\\"`;
4. Output control characters such as carriage returns, tabs, etc. are prohibited;
5. The structure is as follows:
Please ensure the output is valid JSON that can be parsed using Python's json.loads(). All control characters (like newlines) inside strings must be properly escaped (e.g., \n should be written as \\n), and all strings must use double quotes.
        {{
          "step1": "...",
          "step2": "...",
          "step3": "...",
          "verdict": {{
            "is_sensitive": true,
            "types": [1, 3],
            "reason": "Function executes a command using system() and references a local file path."
          }},
          "reflection": "Initial analysis missed that the file path is user-controlled, increasing the severity."
        }}
        Ensure all backslashes in strings are properly escaped (e.g., use `\\` instead of `\`) to make valid JSON.

        Please return valid JSON. All string values must be in a single line, and any newline must be escaped as \\n. Do not include raw control characters.
        Please use \\\" to escape all double quotes to ensure that the entire string can be parsed correctly by json.loads()
        一定要确保是合理的json格式，在输出之前一定要思考是不是合理的json格式，如果不是，就校对，如果是，就返回出来
        """

        response = openai.chat.completions.create(
            
            
            model="google/gemini-2.5-flash",
            messages=[
                {"role": "system",
                 "content": "Please make sure the output format is **valid JSON**, no bare newlines are allowed, all newlines should be escaped by `\\n`, and the entire content must be parsable normally by `json.loads()`."},
                {"role": "user", "content": prompt}
            ],
            response_format={"type": "json_object"}
        )

        
        json_str = response.choices[0].message.content
        
        print(json_str)
        
        

        data = json.loads(json_str)
        
        
        data["function_code"]=file_index
        
        with open(save_res_dir+"/"+str(file_index)+".json", "w") as f:
            json.dump(data, f)
        
            
            
            
            
                
                    
