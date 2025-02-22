
## Source Code and Compilation

### 01_Macros.cpp

#### Source Code:
```cpp
#include <iostream>
using namespace std;

#define SQUARE_BAD(x) x *x
#define SQUARE_BETTER(x) (x) * (x)

int main() {
  int a = 3, b, c, d;

  b = SQUARE_BAD(a);
  cout << "Square = " << b << endl;

  c = SQUARE_BAD(a + 1);
  cout << "Square = " << c << endl;

  d = SQUARE_BETTER(++a);
  cout << "Square = " << d << endl;

  return 0;
}

/*
 * SQUARE(x) is a macro with one param
 * Macro SQUARE(x) is efficient
 * SQUARE(a+1) fails
 * SQUARE(++a) fails
 * SQUARE(++a) does not check type
 */

```
#### Compilation Command:
```sh
g++ 01_Macros.cpp -o 01_Macros.out
```
#### Output:
```
Square = 9
Square = 7
Square = 25
```
### 02_Inlines.cpp

#### Source Code:
```cpp
// Inlines.cpp
#include <iostream>
using namespace std;

inline int SQUARE(int x) { return x * x; }

int main() {
  int a = 3, b;
  b = SQUARE(a);
  cout << "Square = " << b << endl;

  return 0;
}

/*
 * SQUARE(x) is a function with one param
 * inline SQUARE(x) is almost as efficient as the equivalent macro
 * SQUARE(a + 1) works
 * SQUARE(++a) works
 * SQUARE(++a) checks type
 */

/*
 * inlineing is a directive, it is not compulsory the function will be inlined
 * other unintended functions may be inlined as well
 * inline functions may not be recursive
 * NOTE: Implement inline functions in header files directly
 */

```
#### Compilation Command:
```sh
g++ 02_Inlines.cpp -o 02_Inlines.out
```
#### Output:
```
Square = 9
```