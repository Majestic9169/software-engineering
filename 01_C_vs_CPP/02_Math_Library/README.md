
## Source Code and Compilation

### 01_SquareRoot.cpp

#### Source Code:
```cpp
// SquareRoot.cpp
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  double x;
  cout << "Input number: " << endl;
  // cin >> x;
  x = 2.0;

  double sqrt_x = sqrt(x);
  cout << "Sq. Root of " << x << " is: " << sqrt_x << endl;
  return 0;
}

/*
 * Math header is cmath (C standard library in C++)
 * Formatting is derived from type (double) of variables
 * sqrt function from cstdlib
 * default precision is 5 (different)
 */

```
#### Compilation Command:
```sh
g++ 01_SquareRoot.cpp -o 01_SquareRoot.out
```
#### Output:
```
Input number: 
Sq. Root of 2 is: 1.41421
```
### 01_SquareRoot.c

#### Source Code:
```cpp
// SquareRoot.c
#include <math.h>
#include <stdio.h>

int main() {
  double x, sqrt_x;
  printf("Input number: \n");
  /* scanf("%lf", &x); */
  x = 2.0;

  sqrt_x = sqrt(x);

  printf("Sq. Root of %lf is: %lf\n", x, sqrt_x);
  return 0;
}

/*
 * Math header is math.h (C Standard Library)
 * Formatting (%lf) is needed for variables
 * sqrt function from cstdlib
 * Default precision in print is 6
 */

```
#### Compilation Command:
```sh
gcc 01_SquareRoot.c -o 01_SquareRoot.out
```
#### Compilation/Execution Failed:
```Command 'gcc 01_SquareRoot.c -o 01_SquareRoot.out' returned non-zero exit status 1.```