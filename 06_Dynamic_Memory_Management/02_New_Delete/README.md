
## Source Code and Compilation

### 01_NewDelete.cpp

#### Source Code:
```cpp
// NewDelete.cpp
#include <iostream>

using namespace std;

int main() {
  int *p = new int(5);
  cout << *p << endl;
  delete p;
  return 0;
}

/*
 * operator new for allocation on heap
 * No size specification necessary, type is sufficient
 * allocated memory returned as int*
 * no casting necessary
 * can be initiliazed directly
 * operator delete for deallocation from heap
 * core language feature, no header needed
 */

```
#### Compilation Command:
```sh
g++ 01_NewDelete.cpp -o 01_NewDelete.out
```
#### Output:
```
5
```
### 02_OperatorNewDelete.cpp

#### Source Code:
```cpp
// OperatorNewDelete.cpp
#include <iostream>
using namespace std;

int main() {
  int *p = static_cast<int *>(operator new(sizeof(int)));
  *p = 5;

  cout << *p << endl;
  operator delete(p);

  return 0;
}

/*
 * operator new() is the C++ equivalent of malloc()
 * it functions similarily by taking the size in bytes and returning void*
 * new() is called the new operator instead
 * under the hood the new operator calls operator new to allocate memory, it
 * also calls the required constructor and initliazes the memory
 */

```
#### Compilation Command:
```sh
g++ 02_OperatorNewDelete.cpp -o 02_OperatorNewDelete.out
```
#### Output:
```
5
```
### 03_NewArray.cpp

#### Source Code:
```cpp
// NewArray.cpp
#include <iostream>
using namespace std;

int main() {
  int *a = new int[3];
  a[0] = 10;
  a[1] = 20;
  a[2] = 30;

  for (int i = 0; i < 3; i++) {
    cout << "a[" << i << "] = " << a[i] << " ";
  }
  cout << endl;
  delete[] a;
  return 0;
}

/*
 * Allocation by operator new[] (different from new operator) on heap
 * # of elemenets explicitly passed to operator new[]
 * release by operator delete[] (different from delete operator) from heap
 */

```
#### Compilation Command:
```sh
g++ 03_NewArray.cpp -o 03_NewArray.out
```
#### Output:
```
a[0] = 10 a[1] = 20 a[2] = 30 
```