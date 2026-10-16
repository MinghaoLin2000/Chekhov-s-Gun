# Open the files.
with open("nsxpc_check_txt", "rb") as f1, open("nsxpc_nocheck_txt", "rb") as f3, open("nsxpc_all_txt", "rb") as f2:
    # Load the file contents into sets to avoid reading them repeatedly.
    f1_lines = set(f1.readlines())
    f3_lines = set(f3.readlines())
    wk = 0
    for f2_line in f2:
        # Skip lines already present in f3.
        if f2_line in f3_lines:
            continue
        # Skip lines already present in f1.
        if f2_line in f1_lines:
            continue

        # Count lines that are in neither f1 nor f3.
        #wk += 1
        print(f2_line)