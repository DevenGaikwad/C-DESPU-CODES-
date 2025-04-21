// MULTIPLE INHERITANCE

#include<iostream>
using namespace std;

// Base class
class Father {
  public:
    void Height() {
      cout << "Height is 5.7 Feet \n" ;
    }
};

// Another base class
class Mother {
  public:
    void Eyecolor() {
      cout << "Black Coloured Eyes" ;
    }
};

// Derived class
class Child: public Father, public Mother {
};

int main() {
  Child myObj;
  myObj.Height();
  myObj.Eyecolor();
  return 0;
}
