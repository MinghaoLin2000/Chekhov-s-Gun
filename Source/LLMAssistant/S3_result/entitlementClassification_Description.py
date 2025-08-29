import json
import faiss
import os
from langchain import hub

from langchain.schema import Document
from langchain_community.llms import DeepInfra
from langchain.chains import RetrievalQA
from langchain_community.vectorstores import FAISS
from sentence_transformers import SentenceTransformer
from langchain_community.embeddings import DeepInfraEmbeddings
from langchain_core.vectorstores import InMemoryVectorStore
from langchain_text_splitters import RecursiveCharacterTextSplitter
from langchain_community.vectorstores import Chroma
from langchain.prompts import PromptTemplate

# 关闭 LangSmith 日志
import langchain
import re


langchain.debug = False
os.environ["LANGCHAIN_TRACING_V2"] = "false"

# 7. 设置 LLM 模型（使用 DeepInfra 提供的模型，如 LLaMA）
os.environ["DEEPINFRA_API_TOKEN"] = 'xxxx'

# 1. 加载 JSON 数据
with open('./official_data/final_entitlements_result.json', 'r') as f:
    raw_data = json.load(f)

# 2. 转换 JSON 数据为 Document 格式
docs = []
for key in raw_data.keys():
    content = f"Entitlement: {key}\nDescription: {raw_data[key]}"
    docs.append(Document(page_content=content))


#text_splitter = RecursiveCharacterTextSplitter(chunk_size=1000, chunk_overlap=200)
#all_splits = text_splitter.split_documents(docs)
all_splits = docs  # 每个 entitlement 原本就是独立 Document，无需切分


embeddings = DeepInfraEmbeddings(
    model_id="sentence-transformers/all-MiniLM-L6-v2",
    query_instruction="",
    embed_instruction="",
)

if os.path.exists("./vector_store/index"):
    vectorstore = Chroma(persist_directory="./vector_store", embedding=embeddings)
else:
    vectorstore = Chroma.from_documents(documents=all_splits, embedding=embeddings, persist_directory="./vector_store")
retriever = vectorstore.as_retriever()
#prompt = hub.pull("rlm/rag-prompt")



llm = DeepInfra(model_id="google/gemini-2.5-flash")
#llm.model_kwargs = {
#    "temperature": 0.7,
#    "repetition_penalty": 1.2,
#    "max_new_tokens": 250,
#    "top_p": 0.9,
#}

custom_prompt = PromptTemplate.from_template("""
You are an expert on Apple entitlements and macOS security. Use the following known entitlement descriptions as reference.
You are given a new entitlement: "{question}".

step1: Although it may not appear in the list, try to infer its **capability** by comparing it with similar known entitlements and Apple security architecture.

step2: To analyze a given entitlement and determine whether it belongs to one or more of the following 5 types of **sensitive operations**. and then provide a final decision and explanation based on infered capability.
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
        step1: com.apple.security.cs.disable-library-validation. From these entitlement name and previous entitlement, We can infer
        this entitlement can grant application to load unsigned library/plugin.
        step2: The capability is belong to type 4 "Process and Memory Management".
        

    
Please provide the output in **JSON format** with the following fields:
Please return **only one valid JSON object** with the following fields included.

All fields must be inside a single JSON object — do **not** return extra commentary, markdown code block wrappers (e.g., ```json), or additional explanations outside the JSON.

The fields are:

```json
{{
  "entitlement": "<the given entitlement>",
  "capability": "<what it allows the app to do, or 0 if unknown>",
  "reasoning": "<why you think this is the capability, or explain why it's unknown>",
  "similar_entitlements": ["<list of similar known entitlements, or empty list if none>"],
 "sensitive_type": [<list of sensitive types this entitlement belongs to (1~5), or empty list [] if none>],
  "sensitive_reasoning": "<why you think it belongs to those sensitive types, or explain why none>",
   "self_reflection": "<assess how confident you are in the above answer, whether anything is unclear, and what could cause your prediction to be wrong>"
}}
Context (known entitlements):
{context}

Only return the JSON. Do not add any additional explanation or commentary outside the JSON block.""")
# 8. 创建 RetrievalQA 链
qa_chain = RetrievalQA.from_chain_type(
    llm=llm,
    retriever=retriever,
    return_source_documents=False,
    chain_type_kwargs={"prompt": custom_prompt},
    verbose=False  # 避免额外信息污染输出

)

all_ents=open("EntitlementClassification_old_/all_entitlements.txt", "r").readlines()
ent_list=[]
for ent in all_ents:
    ent_list.append(ent.replace("\n",""))

for i in range(592,len(ent_list)):
    # 9. 用户提问
    print(f"now we handle {i} element")
    query = ent_list[i]
    result = qa_chain.invoke(query)


    # 10. 输出结果
    print("Answer:", result['result'])
    output_json_str = result['result']

    try:
        # 去掉 markdown 包裹符和前后多余空行
        clean_json = output_json_str.strip().removeprefix("```json").removesuffix("```").replace("``` pformat=json","").strip()
        output_dict = json.loads(clean_json)
    except json.JSONDecodeError as e:
        print("JSON decode error:", e)
        print("Raw output was:", clean_json)
        exit(1)
    #print("\nSource Document:")
    #print(result['source_documents'][0].page_content)
    with open(f"./Entitlement_desc_dir/{i}.json", "w", encoding="utf-8") as f:
        json.dump(output_dict, f, indent=2, ensure_ascii=False)

    print(f"JSON saved to {i}.json")