
## Source Code and Compilation

### 01_PlacementNew.cpp

#### Source Code:
```cpp
// PlacementNew.cpp
#include <iostream>
using namespace std;

int main() {
  unsigned char buf[sizeof(int) * 2]; // Byte buffer on stack
  // placement new in buffer buf
  int *pInt = new (buf) int(3);
  int *qInt = new (buf + sizeof(int)) int(5);

  int *pBuf = (int *)buf;
  int *qBuf = (int *)buf + sizeof(int);

  cout << "Buf Addr Int Addr" << endl;
  cout << pBuf << " " << pInt << endl;
  cout << qBuf << " " << qInt << endl;
  cout << "1st Int  2nd Int" << endl;
  cout << *pBuf << " " << *qBuf << endl;

  // heap allocation
  int *rInt = new int(7);
  cout << "Heap Addr Int" << endl;
  cout << rInt << " " << *rInt << endl;
  delete rInt;
}

/*
 * Placement operator new takes a buffer address to place objects
 * There are not dynamically allocated on the heap - they may be allocated on
 * stack or heap or static whereever the buffer is located Allocations by
 * placement operator new must not be deleted
 */

```
#### Compilation Command:
```sh
g++ 01_PlacementNew.cpp -o 01_PlacementNew.out
```
#### Output:
```
Buf Addr Int Addr
0x7ffc21730bc0 0x7ffc21730bc0
0x7ffc21730bd0 0x7ffc21730bc4
1st Int  2nd Int
3 561187952
Heap Addr Int
0x55ecb413a2c0 7
```