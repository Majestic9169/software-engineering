import os

# File extensions to delete (executables & object files)
EXECUTABLE_EXTENSIONS = (".exe", ".out", ".o", ".obj", ".a", ".so")

def cleanup(directory):
    for root, dirs, files in os.walk(directory, topdown=False):  
        for file in files:
            file_path = os.path.join(root, file)

            # Remove executables
            if file.endswith(EXECUTABLE_EXTENSIONS):
                print(f"Deleting executable: {file_path}")
                os.remove(file_path)

            # Remove internal READMEs (but keep the main one)
            elif file == "README.md" and root != os.getcwd():
                print(f"Deleting internal README: {file_path}")
                os.remove(file_path)

if __name__ == "__main__":
    cleanup(os.getcwd())
    print("Cleanup complete.")
