
## Source Code and Compilation

### 01_Volatile.cpp

#### Source Code:
```cpp
/* This is an infinite loop
 * The compiler will optimise it as
 * while(1)
 */
// static int i;
// void fun() {
//   i = 0;
//   while (i != 100)
//     ;
// }

/* i is volatile
 * it can change anytime
 * therefore program waits till the value becomes 100
 * this could be by some hardware writes to a port
 */
// static volatile int i;
// void fun() {
//   i = 0;
//   while (i != 100) // compiler will not optimise
//     ;
// }

```
#### Compilation Command:
```sh
g++ 01_Volatile.cpp -o 01_Volatile.out
```
#### Compilation/Execution Failed:
```Command 'g++ 01_Volatile.cpp -o 01_Volatile.out' returned non-zero exit status 1.```