import os

sub_topics = {
    "01_C_vs_CPP": ["01_Input_Output", "02_Math_Library", "03_Containers", "04_Strings", "05_STL"],
    "02_Constants_Inline_Functions": ["01_Const_vs_Manifest", "02_Inline_vs_Macros", "03_Volatile"],
    "03_Pointers_References": ["01_Reference", "02_Return_by_Reference"],
    "04_Function_Overloading_Default_Parameters": ["01_Default_Parameters", "02_Function_Overloading", "03_Static_Polymorphism", "04_Overload_Resolution"],
    "05_Operator_Overloading": ["01_Operators_as_Functions", "02_Overloading_Rules"],
    "06_Dynamic_Memory_Management": ["01_Malloc_Free", "02_New_Delete", "03_Placement_New", "04_Overloading_New_Delete"],
    "07_Classes_Objects": ["01_Examples"],
    "08_Access_Specifiers": ["01_Public_Private_Protected", "02_Encapsulation", "03_Get_Set_Methods"],
    "09_Constructors_Destructors": ["01_Constructors", "02_Destructors", "03_Object_Lifetime"],
    "10_Copy_Constructor_Assignment": ["01_Copy_Constructor", "02_Copy_Assignment", "03_Self_Copy"],
    "11_Const_Correctness": ["01_Const_Objects", "02_Const_Member_Functions", "03_Mutable_Members"],
    "12_CMake_Tutorial": [],
    "13_Static_Members": ["01_Static_Data", "02_Static_Functions", "03_Singleton_Class"],
    "14_Friend_Functions_Classes": ["01_Examples"],
    "15_Operator_Overloading_User_Types": ["01_Non_Member_vs_Member", "02_Global_Functions", "03_Overloading_Guidelines"],
    "16_Namespaces": ["01_Nested_Namespaces", "02_Using_Namespace", "03_Global_vs_Std", "04_Namespaces_vs_Classes"],
    "17_Inheritance": ["01_Base_Derived", "02_Access_Control"]
}

def create_structure():
    os.makedirs("scripts", exist_ok=True)
    root_readme = """# Software Engineering in C++
    
## Course Topics
"""
    
    for folder, sub_dirs in sorted(sub_topics.items()):
        os.makedirs(folder, exist_ok=True)
        folder_readme = f"""# {folder[3:].replace('_', ' ')}

## Subtopics
"""
        
        for sub in sub_dirs:
            sub_path = os.path.join(folder, sub)
            os.makedirs(sub_path, exist_ok=True)
            folder_readme += f"- [{sub[3:].replace('_', ' ')}](./{folder}/{sub})\n"
            sub_readme = f"# {sub[3:].replace('_', ' ')}\n\nAdd relevant code snippets here."
            with open(os.path.join(sub_path, "README.md"), "w") as f:
                f.write(sub_readme)
        
        with open(os.path.join(folder, "README.md"), "w") as f:
            f.write(folder_readme)
        
        root_readme += f"- [{folder[3:].replace('_', ' ')}](./{folder})\n"
        for sub in sub_dirs:
            root_readme += f"  - [{sub[3:].replace('_', ' ')}](./{folder}/{sub})\n"
    
    with open("README.md", "w") as f:
        f.write(root_readme)
    
if __name__ == "__main__":
    create_structure()
    print("Repository structure created successfully.")
