// MULTILEVEL INHERITANCE

#include<iostream>
using namespace std;

// Base class (Grandparent)
class Grandfather {
  private:
    void Height() {
      cout << "Height is 5.7 Feet \n" ;
    }
};

// Derived class (Parent)
class Father: public Grandfather {
	public:
	void Weight() {
      cout << "Weight is 76 Kgs" ;
    }
};

// Derived class (Grandchild)
class GrandChild: public Father {
};

int main() {
  GrandChild myObj;
  myObj.Height();
  myObj.Weight();
  return 0;
}
