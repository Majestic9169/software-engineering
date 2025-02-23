// Stack.cpp
#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
  vector<char> data_;
  int top_;

public:
  Stack() : top_(-1), data_(100, 0) {}
  bool empty() { return top_ == -1; }
  char top() { return data_[top_]; }
  void push(char x) { data_[++top_] = x; }
  void pop() { --top_; }
};

int main() {
  Stack s;
  char str[10] = "ABCDE";

  for (int i = 0; i < 5; i++) {
    s.push(str[i]);
  }

  cout << "Reversed String: ";
  while (!s.empty()) {
    cout << s.top();
    s.pop();
  }
  cout << endl;

  return 0;
}

/*
 * private data hides the inernals of the stack (information hiding)
 * Data structure codes contained within itself with initialization and
 * deinitialization to switch from array to vector or vice versa with
 * application needs no change application can not tamper stack - any direct
 * access to top_ or data_ is compilation error
 */
