// Stack.cpp
#include <iostream>
using namespace std;

class Stack {
public:
  char data_[100];
  int top_;

  bool empty() { return top_ == -1; }
  char top() { return data_[top_]; }
  void push(char x) { data_[++top_] = x; }
  void pop() { --top_; }
};

int main() {
  Stack s;
  s.top_ = -1;
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
