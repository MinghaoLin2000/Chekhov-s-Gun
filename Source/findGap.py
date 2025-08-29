# 打开文件
with open("nsxpc_check_txt", "rb") as f1, open("nsxpc_nocheck_txt", "rb") as f3, open("nsxpc_all_txt", "rb") as f2:
    # 读取文件内容到集合，避免每次都读取文件
    f1_lines = set(f1.readlines())
    f3_lines = set(f3.readlines())
    wk = 0
    for f2_line in f2:
        # 如果f2_line在f3中，跳过
        if f2_line in f3_lines:
            continue
        # 如果f2_line在f1中，也跳过
        if f2_line in f1_lines:
            continue

        # 如果f2_line不在f1和f3中，则计数
        #wk += 1
        print(f2_line)