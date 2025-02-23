
## Source Code and Compilation

### 01_FixedSizeArray.c

#### Source Code:
```cpp
// FixedSizeArray.c
#include <stdio.h>

int main() {
  short age[4];
  age[0] = 23;
  age[1] = 34;
  age[2] = 65;
  age[3] = 74;

  printf("%d ", age[0]);
  printf("%d ", age[1]);
  printf("%d ", age[2]);
  printf("%d ", age[3]);
  printf("\n");

  return 0;
}

/*
 * No difference between arrays in C and C++
 */

```
#### Compilation Command:
```sh
gcc 01_FixedSizeArray.c -o 01_FixedSizeArray.out
```
#### Output:
```
23 34 65 74 
```
### 01_FixedSizeArray.cpp

#### Source Code:
```cpp
// FixedSizeAray.cpp
#include <iostream>

int main() {
  short age[4];
  age[0] = 23;
  age[1] = 34;
  age[2] = 65;
  age[3] = 74;

  std::cout << age[0] << " ";
  std::cout << age[1] << " ";
  std::cout << age[2] << " ";
  std::cout << age[3] << " " << std::endl;

  return 0;
}

/*
 * no difference between arrays in C and C++
 */

```
#### Compilation Command:
```sh
g++ 01_FixedSizeArray.cpp -o 01_FixedSizeArray.out
```
#### Output:
```
23 34 65 74 
```
### 02_ArbitrarySizeArray_Dynamic.c

#### Source Code:
```cpp
// ArbitrarySizeArray_Dynamic.c
#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("Enter no. of elements: ");
  int count, sum = 0;
  /* scanf("%d", &count); */
  count = 10;

  int *arr = (int *)malloc(sizeof(int) * count);
  for (int i = 0; i < count; i++) {
    arr[i] = i;
    sum += arr[i];
  }
  printf("Array Sum: %d\n", sum);
  return 0;
}

/*
 * malloc allocates space using sizeof
 */

```
#### Compilation Command:
```sh
gcc 02_ArbitrarySizeArray_Dynamic.c -o 02_ArbitrarySizeArray_Dynamic.out
```
#### Output:
```
Enter no. of elements: Array Sum: 45
```
### 02_ArbitrarySizeArray_Dynamic.cpp

#### Source Code:
```cpp
// ArbitrarySizeArray_Dynamic.cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cout << "Enter the number of elements: " << endl;
  int count, sum = 0;
  // cin >> count;
  count = 10;

  vector<int> arr;
  arr.resize(count);
  for (int i = 0; i < arr.size(); i++) {
    arr[i] = i;
    sum += arr[i];
  }
  cout << "Array Sum: " << sum << endl;

  return 0;
}

/*
 * resize fixes vecetor size at run time
 */

```
#### Compilation Command:
```sh
g++ 02_ArbitrarySizeArray_Dynamic.cpp -o 02_ArbitrarySizeArray_Dynamic.out
```
#### Output:
```
Enter the number of elements: 
Array Sum: 45
```