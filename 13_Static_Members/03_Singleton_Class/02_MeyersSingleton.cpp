#include <iostream>
using namespace std;

class Printer { /* THIS IS A SINGLETON PRINTER -- ONLY ONE INSTANCE */
  bool blackAndWhite_, bothSided_;

  Printer(bool bw = false, bool bs = false)
      : blackAndWhite_(bw), bothSided_(bs) {
    cout << "Printer constructed" << endl;
  }

  ~Printer() { cout << "Printer destructed" << endl; }

public:
  static const Printer &printer(bool bw = false, bool bs = false) {
    static Printer myPrinter(bw, bs);
    return myPrinter;
  }

  void print(int nP) const { cout << "Printing " << nP << " pages" << endl; }
};

int main() {
  Printer::printer().print(10);
  Printer::printer().print(20);

  return 0;
}

/*
 * Function local static object is used
 * No memory management overhead - so dstructor get private
 * This is called Meyers Singleton
 */
