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
