
## Source Code and Compilation

### 01_MallocFree.c

#### Source Code:
```cpp
// MallocFree.c
#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p = malloc(sizeof(int));
  *p = 5;
  printf("%d\n", *p);
  free(p);
  return 0;
}

/*
 * Dynamic Memory management functions in stdlib.h header for C
 */

```
#### Compilation Command:
```sh
gcc 01_MallocFree.c -o 01_MallocFree.out
```
#### Output:
```
5
```
### 01_MallocFree.cpp

#### Source Code:
```cpp
// MallocFree.cpp
#include <cstdlib>
#include <iostream>

int main() {
  int *p = (int *)malloc(sizeof(int));
  *p = 5;

  std::cout << *p << std::endl;

  free(p);

  return 0;
}

/*
 * malloc in cstdlib
 * malloc() allocates memory on the heap or free store
 * sizeof(int) needs to be provided
 * pointer to allocated memory returned as void* - needs case to int*
 * (implicit cast in C, not in C++)
 * allocated memory is released by free() from heap or free store
 * calloc() and realloc() also available in both languages
 */

```
#### Compilation Command:
```sh
g++ 01_MallocFree.cpp -o 01_MallocFree.out
```
#### Output:
```
5
```