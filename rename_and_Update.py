import os

# Root folder where "Fork_computerprograming" is cloned
BASE_DIR = r"D:\Ghanu Study\Jay Vekariya\Fork_computerprograming"

# Paths of Old and New Code folders
CODE_FOLDERS = [
    os.path.join(BASE_DIR, "Old", "Code"),
    os.path.join(BASE_DIR, "New", "Code"),  # enable New as well
]

ROLL_NO = "25BEC071"

for code_path in CODE_FOLDERS:
    if not os.path.exists(code_path):
        print(f"Path not found: {code_path}")
        continue

    # Loop through all folders inside Code
    for subdir, _, files in os.walk(code_path):
        for file in files:
            if file.endswith(".c"):
                old_file_path = os.path.join(subdir, file)

                try:
                    name_without_ext, _ = os.path.splitext(file)
                    number_part, title_part = name_without_ext.split(".", 1)
                    number_part = number_part.strip()
                    title_part = title_part.strip()
                except ValueError:
                    print(f"Skipping invalid file: {file}")
                    continue

                with open(old_file_path, "r", encoding="utf-8") as f:
                    original_code = f.read()

                new_content = f"// {title_part}\n// Roll No: {ROLL_NO}\n{original_code}"

                with open(old_file_path, "w", encoding="utf-8") as f:
                    f.write(new_content)

                new_file_name = f"Q_{number_part}.c"
                new_file_path = os.path.join(subdir, new_file_name)

                os.rename(old_file_path, new_file_path)

                print(f"Processed: {file} → {new_file_name}")
