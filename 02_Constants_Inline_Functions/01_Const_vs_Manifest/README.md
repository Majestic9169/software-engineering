
## Source Code and Compilation

### 01_Const.cpp

#### Source Code:
```cpp
#include <cmath>
#include <iostream>
using namespace std;

const int TWO = 2;
const double PI = 4.0 * atan(1.0);

int main() {
  int r = 10;
  double peri = TWO * PI * r;
  cout << "Perimeter = " << peri << endl;

  return 0;
}

/*
 * TWO is a const variable initialized to 2
 * PI is a const variable initialized to 4.0*atan(1.0)
 * TWO and PI are variables
 * Type of TWO is const int
 * Type of PI is const double
 */

```
#### Compilation Command:
```sh
g++ 01_Const.cpp -o 01_Const.out
```
#### Output:
```
Perimeter = 62.8319
```
### 01_Define.cpp

#### Source Code:
```cpp
// Define.cpp
#include <cmath>
#include <iostream>

using namespace std;

#define TWO 2
#define PI 4.0 * atan(1)

int main() {
  int r = 10;
  double peri = TWO * PI * r;
  cout << "Perimeter = " << peri << endl;

  return 0;
}

/*
 * TWO is a manifest constant
 * PI is a manifest constant as macro
 * TWO and PI look like variables
 * C Pre Processor replaces the token TWO by 2
 * CPP replaces the TOKEN PI by 4.0*atain(1.0) and evaluates
 * Compiler sees them as constants
 * Types of TWO and PI may be indeterminate
 * TWO * PI = 6.28319 by constant folding of compiler
 */

```
#### Compilation Command:
```sh
g++ 01_Define.cpp -o 01_Define.out
```
#### Output:
```
Perimeter = 62.8319
```
### 02_ConstPointer-1.cpp

#### Source Code:
```cpp
int main() {
  int m = 4;
  const int n = 5;
  const int *p = &n;

  // n = 6; // ERROR n is constant and can not be changed
  // *p = 7; // ERROR p points to constant data (n) that can not be changed
  p = &m; // OKAY
  // *p = 8 // p is still supposed to point to constant data so you can not
  // change the value of m despite it not being const

  m = 5; // OKAY
  // *p = 7; // ERROR

  // int* q = n; // ERROR q is not a const pointer which means you would be able
  // to change n, which is not allowed

  return 0;
}

/*            +-------------------+
 *            |     +----------+  |
 *            |     |  +----+  |  |
 *            |     |  |    |  |  |
 *            |     |  |    ^  |  |
 *          const  int *    p  |  |
 *            ^     ^  ^       |  |
 *                  |  +-------+  |
 *                  |             |
 *                  +-------------+
 *
 *           p is a pointer to an integer which is constant
 */

```
#### Compilation Command:
```sh
g++ 02_ConstPointer-1.cpp -o 02_ConstPointer-1.out
```
#### Output:
```
```
### 02_ConstPointer-2.cpp

#### Source Code:
```cpp
int main() {
  int m = 4, n = 5;
  int *const p = &n;

  n = 6;  // OKAY
  *p = 7; // OKAY

  // p = &m; // ERROR: p is a constant pointer, can not be reassigned
}

/*               +----------------+
 *               |  +----------+  |
 *               |  |  +----+  |  |
 *               |  |  |    |  |  |
 *               |  |  |    ^  |  |
 *              int * const p  |  |
 *               ^  ^  ^       |  |
 *                  |  +-------+  |
 *                  |             |
 *                  +-------------+
 *
 *              p is a const pointer to an integer
 */

```
#### Compilation Command:
```sh
g++ 02_ConstPointer-2.cpp -o 02_ConstPointer-2.out
```
#### Output:
```
```
### 02_ConstPointer-3.cpp

#### Source Code:
```cpp
#include <cstring>
#include <iostream>

int main() {
  char *str = strdup("IIT, Kharagpur");
  str[0] = 'N';
  std::cout << str << std::endl;
  str = strdup("JIT, Kharagpur");
  std::cout << str << std::endl;

  const char *str1 = strdup("IIT, Kharagpur");
  // str1[0] = 'N'; // ERROR
  std::cout << str1 << std::endl;
  str = strdup("JIT, Kharagpur");
  std::cout << str1 << std::endl;

  char *const str2 = strdup("IIT, Kharagpur");
  str2[0] = 'N';
  std::cout << str2 << std::endl;
  // str2 = strdup("JIT, Kharagpur"); // ERROR
  // std::cout << str2 << std::endl;

  const char *const str3 = strdup("IIT, Kharagpur");
  // str3[0] = 'N'; // ERROR
  // std::cout << str3 << std::endl;
  // str3 = strdup("JIT, Khraragpur"); // ERROR
  // std::cout << str3 << std::endl;

  return 0;
}

```
#### Compilation Command:
```sh
g++ 02_ConstPointer-3.cpp -o 02_ConstPointer-3.out
```
#### Output:
```
NIT, Kharagpur
JIT, Kharagpur
IIT, Kharagpur
IIT, Kharagpur
NIT, Kharagpur
```
### 02_UndefinedConstPointers.cpp

#### Source Code:
```cpp
#include <iostream>
using namespace std;

int main() {
  const int a = 5;
  int *b;
  b = (int *)&a;
  *b = 10;
  cout << a << " " << b << " " << &a << " " << *b << endl;

  return 0;
}

/*
 * b actually points to a
 * But when accesses through a the compiler substitutes the constant experssion.
 * This behaviour is undefind
 */

```
#### Compilation Command:
```sh
g++ 02_UndefinedConstPointers.cpp -o 02_UndefinedConstPointers.out
```
#### Output:
```
5 0x7ffd31119b5c 0x7ffd31119b5c 10
```