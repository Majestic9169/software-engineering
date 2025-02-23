
## Source Code and Compilation

### 01_EmployeeClass.cpp

#### Source Code:
```cpp
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
  string name;         // read and write: get_name() and set_name() defined
  string address;      // write only: set_addr() defined. No get method
  double sal_fixed;    // read only: get_sal_fixed()defined. No set method
  double sal_variable; // not visible: No get-set method
public:
  Employee() {
    sal_fixed = 1200;
    sal_variable = 10;
  } // Initialize
  string get_name() { return name; }
  void set_name(string name) { this->name = name; }
  void set_addr(string address) { this->address = address; }
  double get_sal_fixed() { return sal_fixed; }
  // sal_variable (not visible) used in computation method salary()
  double salary() { return sal_fixed + sal_variable; }
};

int main() {
  Employee e1;
  e1.set_name("Ram");
  e1.set_addr("Kolkata");
  cout << e1.get_name() << endl;
  cout << e1.get_sal_fixed() << endl << e1.salary() << endl;
}

```
#### Compilation Command:
```sh
g++ 01_EmployeeClass.cpp -o 01_EmployeeClass.out
```
#### Output:
```
Ram
1200
1210
```