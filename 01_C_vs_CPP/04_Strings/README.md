
## Source Code and Compilation

### 01_AddStrings.c

#### Source Code:
```cpp
// AddStrings.c
#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = {'H', 'E', 'L', 'L', 'O', ' ', '\0'};
  char str2[] = "WORLD";
  char str[20];
  strcpy(str, str1);
  strcat(str, str2);

  printf("%s\n", str);

  return 0;
}

/*
 * Need header string.h
 * C-string is an array of characters
 * String concaternation done with strcat function
 * Need a copy into str
 * str must be large enough to fit the result
 */

```
#### Compilation Command:
```sh
gcc 01_AddStrings.c -o 01_AddStrings.out
```
#### Output:
```
HELLO WORLD
```
### 01_AddStrings.cpp

#### Source Code:
```cpp
// AddStrings.cpp
#include <iostream>
#include <string>

int main() {
  std::string str1 = "HELLO ";
  std::string str2 = "WORLD";

  std::string str = str1 + str2;

  std::cout << str << std::endl;

  return 0;
}

/*
 * Need header string
 * string is a data type in C++ standard library
 * strings are concatenated like addition in int
 * operator= can be used on strings in place of strcpy function in C
 * operator<=, operator<, operator>=, operator> operators can be used on strings
 * in place of strcmp function in C
 */

```
#### Compilation Command:
```sh
g++ 01_AddStrings.cpp -o 01_AddStrings.out
```
#### Output:
```
HELLO WORLD
```