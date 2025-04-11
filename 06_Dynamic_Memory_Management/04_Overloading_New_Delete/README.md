
## Source Code and Compilation

### 01_OverloadingNew.cpp

#### Source Code:
```cpp
#include <cstdlib>
#include <iostream>
using namespace std;

void *operator new(size_t n) {
  cout << "Overloaded new" << endl;
  void *ptr = malloc(n);
  return ptr;
}

void operator delete(void *p) {
  cout << "Overloaded delete" << endl;
  free(p);
}

int main() {
  int *p = new int;
  *p = 30;
  cout << "The value is :" << *p << endl;
  delete p;
}

/*
 * new operator overloaded
 * The first paramter of overloaded new operator must be size_t
 * The return type of overloaded new operator must be void*
 * the first parameter of overloaded delete operator must be void*
 * more parameters are allowed
 * delete operator should NOT be overloaded (usually) with extra parameters
 * using operator new() instead of malloc/free will make the function recursive
 * and lead to runtime error
 */

```
#### Compilation Command:
```sh
g++ 01_OverloadingNew.cpp -o 01_OverloadingNew.out
```
#### Output:
```
Overloaded new
The value is :30
Overloaded delete
```
### 02_OverloadingArrayNew.cpp

#### Source Code:
```cpp
#include <cstring>
#include <iostream>
using namespace std;

void *operator new[](size_t os, char setv) {
  cout << "Overloaded operator new[]" << endl;
  void *t = operator new(os);
  memset(t, setv, os);
  return t;
}

void operator delete[](void *ss) {
  cout << "Overloaded operator delete[]" << endl;
  operator delete(ss);
}

int main() {
  char *t = new ('#') char[10];

  cout << "p = " << &t << endl;
  for (int i = 0; i < 10; i++)
    cout << t[i];
  cout << endl;
  delete[] t;

  return 0;
}

/*
 * operator new[] overloaded with initialization
 * the first parameter of overloaded operator new[] must be size_t
 * the return type of overloaded operator new[] must be void*
 * multiple parameters may be used for overloading
 * operator delete[] should not be overloaded (usually) with extra parameters
 */

```
#### Compilation Command:
```sh
g++ 02_OverloadingArrayNew.cpp -o 02_OverloadingArrayNew.out
```
#### Output:
```
Overloaded operator new[]
p = 0x7ffd42f9e4f0
##########
Overloaded operator delete[]
```