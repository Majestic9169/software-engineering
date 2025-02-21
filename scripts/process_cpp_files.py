import os
import subprocess

def process_source_files(directory):
    readme_path = os.path.join(directory, "README.md")
    source_files = [f for f in os.listdir(directory) if f.endswith(('.c', '.cpp'))]
    
    if source_files:
        with open(readme_path, "a") as readme:
            readme.write("\n## Source Code and Compilation\n")
            
            for src_file in source_files:
                src_path = os.path.join(directory, src_file)
                readme.write(f"\n### {src_file}\n")
                
                # Append source code
                readme.write("\n#### Source Code:\n")
                with open(src_path, "r") as f:
                    readme.write("```cpp\n" + f.read() + "\n```")
                
                # Determine compilation command
                executable = os.path.join(directory, src_file.rsplit('.', 1)[0])
                executable += ".out"
                compile_cmd = ["g++", src_file, "-o", executable] if src_file.endswith(".cpp") else ["gcc", src_file, "-o", executable]
                readme.write(f"\n#### Compilation Command:\n```sh\n{' '.join(compile_cmd)}\n```")
                
                # Compile and run the program
                try:
                    subprocess.run(compile_cmd, check=True, cwd=directory, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
                    output = subprocess.run([executable], capture_output=True, text=True, cwd=directory)
                    readme.write("\n#### Output:\n```sh\n")
                    readme.write(output.stdout + output.stderr)
                    readme.write("```")
                except subprocess.CalledProcessError as e:
                    readme.write("\n#### Compilation/Execution Failed:\n```")
                    readme.write(e.stderr if e.stderr else str(e))
                    readme.write("```")
    
    # Recursively process subdirectories
    for subdir in os.listdir(directory):
        subdir_path = os.path.join(directory, subdir)
        if os.path.isdir(subdir_path):
            process_source_files(subdir_path)

if __name__ == "__main__":
    process_source_files(os.getcwd())
