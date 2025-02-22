
## Source Code and Compilation

### 01_RbR.cpp

#### Source Code:
```cpp
// RbR.cpp
#include <iostream>
using namespace std;

int &Function_Return_By_Ref(int &x) {
  cout << "x = " << x << " &x = " << &x << endl;
  return x;
}

int main() {
  int a = 10;
  cout << "a = " << a << " &a = " << &a << endl;
  const int &b = Function_Return_By_Ref(a);
  cout << "b = " << b << " &b = " << &b << endl;

  return 0;
}

```
#### Compilation Command:
```sh
g++ 01_RbR.cpp -o 01_RbR.out
```
#### Output:
```
a = 10 &a = 0x7fff0b78951c
x = 10 &x = 0x7fff0b78951c
b = 10 &b = 0x7fff0b78951c
```
### 02_Tricky.cpp

#### Source Code:
```cpp
#include <iostream>
using namespace std;

int &Return_ref(int &x) {
  int t = x;
  t++;
  return t;
}

int main() {
  int a = 10;
  int b = Return_ref(a);
  cout << "a = " << a << " and b = " << b << endl;

  Return_ref(a) = 3; // Changes local t
  cout << "a = " << a << endl;
}

/*
 * We expect a to be 3 but it has not changed
 * It returns reference to local, this is risky
 */

```
#### Compilation Command:
```sh
g++ 02_Tricky.cpp -o 02_Tricky.out
```
#### Output:
```
```