
## Source Code and Compilation

### 01_SingletonPrinter.cpp

#### Source Code:
```cpp
#include <iostream>
using namespace std;

class Printer { /* THIS IS A SINGLETON PRINTER -- ONLY ONE INSTANCE */
private:
  bool blackAndWhite_, bothSided_;

  Printer(bool bw = false, bool bs = false)
      : blackAndWhite_(bw), bothSided_(bs) {
    cout << "Printer constructed" << endl;
  } // Private -- Printer cannot be constructed!

  static Printer
      *myPrinter_; // Pointer to the Instance of the Singleton Printer

public:
  ~Printer() { cout << "Printer destructed" << endl; }

  static const Printer &printer(bool bw = false, bool bs = false) {
    if (!myPrinter_)
      myPrinter_ = new Printer(bw, bs); // Constructed for first call
    return *myPrinter_;                 // Reused from next time
  }

  void print(int nP) const { cout << "Printing " << nP << " pages" << endl; }
};

Printer *Printer::myPrinter_ = 0;

int main() {
  Printer::printer().print(10);
  Printer::printer().print(20);

  delete &Printer::printer();

  return 0;
}

```
#### Compilation Command:
```sh
g++ 01_SingletonPrinter.cpp -o 01_SingletonPrinter.out
```
#### Output:
```
Printer constructed
Printing 10 pages
Printing 20 pages
Printer destructed
```
### 02_MeyersSingleton.cpp

#### Source Code:
```cpp
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

```
#### Compilation Command:
```sh
g++ 02_MeyersSingleton.cpp -o 02_MeyersSingleton.out
```
#### Output:
```
Printer constructed
Printing 10 pages
Printing 20 pages
Printer destructed
```