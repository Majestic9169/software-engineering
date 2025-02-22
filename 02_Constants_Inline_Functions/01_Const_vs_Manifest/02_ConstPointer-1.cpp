int main() {
  int m = 4;
  const int n = 5;
  const int *p = &n;

  // n = 6; // ERROR n is constant and can not be changed
  // *p = 7; // ERROR p points to constant data (n) that can not be changed
  p = &m; // OKAY
  // *p = 8 // p is still supposed to point to constant data so you can not
  // change the value of m despite it not being const

  m = 5; // OKAY
  // *p = 7; // ERROR

  // int* q = n; // ERROR q is not a const pointer which means you would be able
  // to change n, which is not allowed

  return 0;
}

/*            +-------------------+
 *            |     +----------+  |
 *            |     |  +----+  |  |
 *            |     |  |    |  |  |
 *            |     |  |    ^  |  |
 *          const  int *    p  |  |
 *            ^     ^  ^       |  |
 *                  |  +-------+  |
 *                  |             |
 *                  +-------------+
 *
 *           p is a pointer to an integer which is constant
 */
