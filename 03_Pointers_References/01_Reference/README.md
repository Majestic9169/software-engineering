
## Source Code and Compilation

### 01_Behaviour.cpp

#### Source Code:
```cpp
// Behaviour.cpp
#include <iostream>
using namespace std;

int main() {
  int a = 10;
  int &b = a; // b is a reference of a

  // a and b have the same memory location
  cout << "a = " << a << ", b = " << b << ". " << "&a = " << &a
       << ", &b = " << &b << endl;

  ++a; // Changing a appears as change in b
  cout << "a = " << a << ", b = " << b << endl;

  ++b; // Changing b also changes a
  cout << "a = " << a << ", b = " << b << endl;

  return 0;
}

/*
 * a and b have the same memory location and hence the same value
 * Changing one changes the other and vice versa
 */

```
#### Compilation Command:
```sh
g++ 01_Behaviour.cpp -o 01_Behaviour.out
```
#### Output:
```
a = 10, b = 10. &a = 0x7ffcf1b14d7c, &b = 0x7ffcf1b14d7c
a = 11, b = 11
a = 12, b = 12
```
### 02_PitfallsInReference.cpp

#### Source Code:
```cpp
// PitfallsInReference.cpp
#include <iostream>
using namespace std;

int main() {
  int i = 2;
  int &j = i;
  const int &k = 5; // const tells compiler to allocated a memory with value 5
  const int &l = j + k; // similariy for j + k = 7 for l to refer to

  cout << i << ", " << &i << endl;
  cout << j << ", " << &j << endl;
  cout << k << ", " << &k << endl;
  cout << l << ", " << &l << endl;

  return 0;
}

```
#### Compilation Command:
```sh
g++ 02_PitfallsInReference.cpp -o 02_PitfallsInReference.out
```
#### Output:
```
2, 0x7ffea2febd44
2, 0x7ffea2febd44
5, 0x7ffea2febd48
7, 0x7ffea2febd4c
```
### 03_CallByReference.cpp

#### Source Code:
```cpp
// CallByReference.cpp
#include <iostream>
using namespace std;

void Function_under_param_test(int &, int);

int main() {
  int a = 20;
  cout << "a = " << a << ", &a = " << &a << endl;
  Function_under_param_test(a, a);
}

void Function_under_param_test(int &b, int c) {
  cout << "b = " << b << ", &b = " << &b << endl;
  cout << "c = " << c << ", &c = " << &c << endl;
}

/*
 * Param b is call by reference while param c is call by value
 *
 */

```
#### Compilation Command:
```sh
g++ 03_CallByReference.cpp -o 03_CallByReference.out
```
#### Output:
```
a = 20, &a = 0x7fff8833b194
b = 20, &b = 0x7fff8833b194
c = 20, &c = 0x7fff8833b174
```
### 04_Swap.cpp

#### Source Code:
```cpp
// Swap.cpp
#include <iostream>
using namespace std;

void swap(int &x, int &y) {
  int t;
  t = x;
  x = y;
  y = t;
}

int main() {
  int a = 10, b = 15;
  cout << "a = " << a << " & b = " << b << " to swap" << endl;
  swap(a, b);
  cout << "a = " << a << " & b = " << b << " on swap" << endl;

  return 0;
}

```
#### Compilation Command:
```sh
g++ 04_Swap.cpp -o 04_Swap.out
```
#### Output:
```
a = 10 & b = 15 to swap
a = 15 & b = 10 on swap
```
### 05_ReferenceParamAsConst.cpp

#### Source Code:
```cpp
// ReferenceParamByConst.cpp
#include <iostream>
using namespace std;

int Ref_const(const int &x) { return x + 1; }

int main() {
  int a = 10, b;
  b = Ref_const(a);
  cout << "a = " << a << " and b = " << b << endl;

  return 0;
}

```
#### Compilation Command:
```sh
g++ 05_ReferenceParamAsConst.cpp -o 05_ReferenceParamAsConst.out
```
#### Output:
```
a = 10 and b = 11
```