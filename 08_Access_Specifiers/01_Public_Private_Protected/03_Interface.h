// Interface.h

class Stack {
private:
  char *data_;
  int top_;

public:
  Stack();
  ~Stack();
  bool empty();
  void push(char x);
  void pop();
  char top();
};
