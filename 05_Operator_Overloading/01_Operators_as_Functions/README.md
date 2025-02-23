
## Source Code and Compilation

### 01_StringConcat.cpp

#### Source Code:
```cpp
// StringConcat.cpp
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

typedef struct _String {
  char *str;
} String;

String operator+(const String &fName, const String &lName) {
  String s;
  s.str = (char *)malloc(strlen(fName.str) + strlen(lName.str) + 1);
  strcpy(s.str, fName.str);
  strcat(s.str, lName.str);
  return s;
}

int main() {
  String fName, lName, name;
  fName.str = strdup("Partha ");
  lName.str = strdup("Das");

  name = fName + lName; // Overloaded operator +
  cout << "First Name: " << fName.str << endl;
  cout << "Last Name: " << lName.str << endl;
  cout << "Full Name: " << name.str << endl;

  return 0;
}

```
#### Compilation Command:
```sh
g++ 01_StringConcat.cpp -o 01_StringConcat.out
```
#### Output:
```
First Name: Partha 
Last Name: Das
Full Name: Partha Das
```
### 02_EnumAddition.cpp

#### Source Code:
```cpp
// EnumAddition.cpp
#include <iostream>

using namespace std;

enum E {
  C0 = 0,
  C1 = 1,
  C2 = 2,
};

E operator+(const E &a, const E &b) {
  unsigned int uia = a, uib = b;
  unsigned int t = (uia + uib) % 3;
  return (E)t;
}

int main() {
  E a = C1;
  E b = C2;

  int x = -1;
  x = a + b; // Overloaded opeator+ for enum E
  cout << x << endl;
}

/*
 * Result is a valid enum E value
 *
 */

```
#### Compilation Command:
```sh
g++ 02_EnumAddition.cpp -o 02_EnumAddition.out
```
#### Output:
```
0
```