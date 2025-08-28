import os
import subprocess
import glob

# Paths
base_path = r"D:\Ghanu Study\Jay Vekariya\Fork_computerprograming"
paths = [os.path.join(base_path, "New", "Code"),
         os.path.join(base_path, "Old", "Code")]

for path in paths:
    c_files = glob.glob(os.path.join(path, "*.c"))
    
    for c_file in c_files:
        exe_file = c_file.replace(".c", ".exe")
        print(f"Running: {os.path.basename(c_file)}")
        
        # Step 1: Compile
        try:
            compile_process = subprocess.run(
                ["gcc", c_file, "-o", exe_file],
                capture_output=True, text=True
            )
            
            if compile_process.returncode != 0:
                print(" -> error")  # Compilation error
                continue
        except Exception as e:
            print(" -> error")
            continue
        
        # Step 2: Run with timeout
        try:
            run_process = subprocess.run(
                [exe_file],
                capture_output=True, text=True,
                timeout=4
            )
            
            if run_process.returncode == 0:
                print(" -> done")
            else:
                print(" -> error")
        
        except subprocess.TimeoutExpired:
            print(" -> infinite loop")
        except Exception as e:
            print(" -> something else")
