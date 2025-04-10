
## Source Code and Compilation

### global_namespace.cpp

#### Source Code:
```cpp
#include <iostream>
using namespace std;

int data = 0;

namespace name1 {
int data = 1;
}

int main() {
  using namespace name1;
  cout << data << endl;
  using name1::data;
  cout << data << endl;
}

```
#### Compilation Command:
```sh
g++ global_namespace.cpp -o global_namespace.out
```
#### Compilation/Execution Failed:
```Command 'g++ global_namespace.cpp -o global_namespace.out' returned non-zero exit status 1.```
