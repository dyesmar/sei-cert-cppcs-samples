// EXP54-CPP: Noncompliant Code Example
#include <initializer_list>
#include <iostream>

class C {
  std::initializer_list<int> l;
  
public:
  C() : l{1, 2, 3} {}
  
  int first() const { return *l.begin(); }
};

void f() {
  C c;
  std::cout << c.first();
}
