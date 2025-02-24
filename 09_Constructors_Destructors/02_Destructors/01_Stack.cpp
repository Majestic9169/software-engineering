// Stack.cpp
#include <iostream>
using namespace std;

class Stack {
private:
  char *data_;
  int top_;

public:
  Stack() : top_(-1), data_(new char[10]) { cout << "Stack() Called" << endl; }
  ~Stack() {
    delete[] data_;
    cout << "~Stack() called" << endl;
  }
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
 * Can de-initialization be a part of scope rules?
 * Yes. Destructor is implicitly called at end of scope.
 */
