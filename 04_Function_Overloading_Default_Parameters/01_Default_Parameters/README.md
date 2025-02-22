
## Source Code and Compilation

### 01_DefaultParameter.cpp

#### Source Code:
```cpp
// DefaultParamter.cpp
#include <iostream>
using namespace std;

int IdentifyFunction(int a = 10) { return (a); }

int main() {
  int x = 5, y;
  y = IdentifyFunction(x);
  cout << "y = " << y << endl;

  y = IdentifyFunction();
  cout << "y = " << y << endl;

  return 0;
}

```
#### Compilation Command:
```sh
g++ 01_DefaultParameter.cpp -o 01_DefaultParameter.out
```
#### Output:
```
y = 5
y = 10
```
### 02_DefaultParameters.cpp

#### Source Code:
```cpp
// DefaultParameters.cpp
#include <iostream>
using namespace std;

int Add(int a = 10, int b = 20) { return a + b; }

int main() {
  int x = 5, y = 6, z;
  z = Add(x, y);
  cout << "Sum = " << z << endl;

  z = Add(x);
  cout << "Sum = " << z << endl;

  z = Add();
  cout << "Sum = " << z << endl;

  return 0;
}

```
#### Compilation Command:
```sh
g++ 02_DefaultParameters.cpp -o 02_DefaultParameters.out
```
#### Output:
```
Sum = 11
Sum = 25
Sum = 30
```
### 03_Restriction-1.cpp

#### Source Code:
```cpp
// Restriction-1.cpp

// void f(int, double = 0.0, char*); // ERROR: missing default argument for
// char*

void g(int, double = 0, char * = nullptr);
// void g(int, double = 1, char * = nullptr); // ERROR: redefinition of default
// argument

int main() {
  int i = 5;
  double d = 1.2;
  char c = 'b';

  // g(); // ERROR: g does not take 0 arguments
  g(i);
  g(i, d);
  g(i, d, &c);

  return 0;
}

```
#### Compilation Command:
```sh
g++ 03_Restriction-1.cpp -o 03_Restriction-1.out
```
#### Compilation/Execution Failed:
```Command 'g++ 03_Restriction-1.cpp -o 03_Restriction-1.out' returned non-zero exit status 1.```
### 04_Restriction-2.cpp

#### Source Code:
```cpp
#include "04_Restriction-2.h"
#include <iostream>
using namespace std;

void g(int i, double d, char c) { cout << i << ' ' << d << ' ' << c << endl; }

int main() {
  int i = 5;
  double d = 1.2;
  char c = 'b';
  g();
  g(i);
  g(i, d);
  g(i, d, c);
}

```
#### Compilation Command:
```sh
g++ 04_Restriction-2.cpp -o 04_Restriction-2.out
```
#### Output:
```
0 0 a
5 0 a
5 1.2 a
5 1.2 b
```