
## Source Code and Compilation

### 02_AddTwoNumbers.cpp

#### Source Code:
```cpp
// AddTwoNumbers.cpp
#include <iostream>

int main() {
  int a, b;

  std::cout << "Input two numbers: " << std::endl;
  // std::cin >> a >> b;
  a = 3;
  b = 4;

  int sum = a + b;

  std::cout << "Sum of " << a << " and " << b << " is: " << sum << std::endl;
  return 0;
}

/*
 * operator>> to stream from console
 * consolge is std::cin istream (in std namespace)
 * operator>> is a binary operator
 * a and b can be directly used in operator>>
 * sum may be declared when needed. Allowed from C89 too
 * Formatting is derived from type (int) of variables
 */

```
#### Compilation Command:
```sh
g++ 02_AddTwoNumbers.cpp -o 02_AddTwoNumbers.out
```
#### Output:
```
Input two numbers: 
Sum of 3 and 4 is: 7
```
### 02_AddTwoNumbers.c

#### Source Code:
```cpp
// AddTwoNumbers.c
#include <stdio.h>

int main() {
  int a, b, sum;

  printf("Input two numbers: \n");
  // scanf("%d%d", &a, &b);
  a = 3;
  b = 4;

  sum = a + b;

  printf("Sum of %d and %d is: %d\n", a, b, sum);
  return 0;
}

/*
 * scanf to scan (read) from console
 * Console is stdin file
 * scanf is a variadic function
 * addresses of a and b needed in scanf
 * all variables a, b, and sum declared first (K&R)
 * formatting (%d) needed for variable
 */

```
#### Compilation Command:
```sh
gcc 02_AddTwoNumbers.c -o 02_AddTwoNumbers.out
```
#### Output:
```
Input two numbers: 
Sum of 3 and 4 is: 7
```
### 01_HelloWorld.c

#### Source Code:
```cpp
// HelloWorld.c
#include <stdio.h>

int main() {
  printf("Hello World in C\n");
  return 0;
}

/*
 * • IO Header is stdio.h
 * • printf to print to console
 * • Console is stdout file
 * • printf is a variadic function
 * • \n to go to the new line
 * • \n is escaped newline character
 */

```
#### Compilation Command:
```sh
gcc 01_HelloWorld.c -o 01_HelloWorld.out
```
#### Output:
```
Hello World in C
```
### 01_HelloWorld.cpp

#### Source Code:
```cpp
// HelloWorld.cpp
#include <iostream>

int main() {
  std::cout << "Hello World in C++" << std::endl;
  return 0;
}

/*
 * IO Header is iostream
 * operator<< to stream to console
 * Console is std::cout ostream (int std namespace)
 * operator<< is a binary operator
 * std::endl (in std namespace) to go to the new line
 * std::endl is stream manipulator (newline) function
 */

```
#### Compilation Command:
```sh
g++ 01_HelloWorld.cpp -o 01_HelloWorld.out
```
#### Output:
```
Hello World in C++
```
## Source Code and Compilation

### 02_AddTwoNumbers.cpp

#### Source Code:
```cpp
// AddTwoNumbers.cpp
#include <iostream>

int main() {
  int a, b;

  std::cout << "Input two numbers: " << std::endl;
  // std::cin >> a >> b;
  a = 3;
  b = 4;

  int sum = a + b;

  std::cout << "Sum of " << a << " and " << b << " is: " << sum << std::endl;
  return 0;
}

/*
 * operator>> to stream from console
 * consolge is std::cin istream (in std namespace)
 * operator>> is a binary operator
 * a and b can be directly used in operator>>
 * sum may be declared when needed. Allowed from C89 too
 * Formatting is derived from type (int) of variables
 */

```
#### Compilation Command:
```sh
g++ 02_AddTwoNumbers.cpp -o 02_AddTwoNumbers.out
```
#### Output:
```
Input two numbers: 
Sum of 3 and 4 is: 7
```
### 02_AddTwoNumbers.c

#### Source Code:
```cpp
// AddTwoNumbers.c
#include <stdio.h>

int main() {
  int a, b, sum;

  printf("Input two numbers: \n");
  // scanf("%d%d", &a, &b);
  a = 3;
  b = 4;

  sum = a + b;

  printf("Sum of %d and %d is: %d\n", a, b, sum);
  return 0;
}

/*
 * scanf to scan (read) from console
 * Console is stdin file
 * scanf is a variadic function
 * addresses of a and b needed in scanf
 * all variables a, b, and sum declared first (K&R)
 * formatting (%d) needed for variable
 */

```
#### Compilation Command:
```sh
gcc 02_AddTwoNumbers.c -o 02_AddTwoNumbers.out
```
#### Output:
```
Input two numbers: 
Sum of 3 and 4 is: 7
```
### 01_HelloWorld.c

#### Source Code:
```cpp
// HelloWorld.c
#include <stdio.h>

int main() {
  printf("Hello World in C\n");
  return 0;
}

/*
 * • IO Header is stdio.h
 * • printf to print to console
 * • Console is stdout file
 * • printf is a variadic function
 * • \n to go to the new line
 * • \n is escaped newline character
 */

```
#### Compilation Command:
```sh
gcc 01_HelloWorld.c -o 01_HelloWorld.out
```
#### Output:
```
Hello World in C
```
### 01_HelloWorld.cpp

#### Source Code:
```cpp
// HelloWorld.cpp
#include <iostream>

int main() {
  std::cout << "Hello World in C++" << std::endl;
  return 0;
}

/*
 * IO Header is iostream
 * operator<< to stream to console
 * Console is std::cout ostream (int std namespace)
 * operator<< is a binary operator
 * std::endl (in std namespace) to go to the new line
 * std::endl is stream manipulator (newline) function
 */

```
#### Compilation Command:
```sh
g++ 01_HelloWorld.cpp -o 01_HelloWorld.out
```
#### Output:
```
Hello World in C++
```