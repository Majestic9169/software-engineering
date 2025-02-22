import os
import subprocess

def process_source_files(directory, root_dir):
    readme_path = os.path.join(directory, "README.md")
    source_files = [f for f in os.listdir(directory) if f.endswith(('.c', '.cpp'))]

    if source_files:
        with open(readme_path, "r") as readme:
            readme.write("\n## Source Code and Compilation\n")

            for src_file in source_files:
                src_path = os.path.join(directory, src_file)
                relative_src_path = os.path.relpath(src_path, root_dir)  # Get relative path

                readme.write(f"\n### {src_file}\n")

                # Append source code
                readme.write("\n#### Source Code:\n")
                with open(src_path, "r") as f:
                    readme.write("```cpp\n" + f.read() + "\n```")

                # Determine compilation command (relative path)
                executable = os.path.splitext(src_file)[0]  # Remove extension
                executable += ".out"
                compile_cmd = f"g++ {src_file} -o {executable}" if src_file.endswith(".cpp") else f"gcc {src_file} -o {executable}"
                readme.write(f"\n#### Compilation Command:\n```sh\n{compile_cmd}\n```")

                # Compile and run the program
                try:
                    subprocess.run(compile_cmd, shell=True, check=True, cwd=directory)
                    output = subprocess.run([f"./{executable}"], capture_output=True, text=True, cwd=directory)
                    readme.write("\n#### Output:\n```\n")
                    readme.write(output.stdout + output.stderr)
                    readme.write("```")
                except subprocess.CalledProcessError as e:
                    readme.write("\n#### Compilation/Execution Failed:\n```")
                    readme.write(str(e) + "```")

    # Recursively process subdirectories
    for subdir in os.listdir(directory):
        subdir_path = os.path.join(directory, subdir)
        if os.path.isdir(subdir_path):
            process_source_files(subdir_path, root_dir)

if __name__ == "__main__":
    root_directory = os.getcwd()
    process_source_files(root_directory, root_directory)
