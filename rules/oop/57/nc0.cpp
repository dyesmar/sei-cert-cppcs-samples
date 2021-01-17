// OOP57-CPP: Noncompliant Code Example
#include <cstring>
#include <iostream>
  
class C {
  int scalingFactor;
  int otherData;
  
public:
  C() : scalingFactor(1) {}
   
  void set_other_data(int i);
  int f(int i) {
    return i / scalingFactor;
  }
  // ...
};
  
void f() {
  C c;
   
  // ... Code that mutates c ...
   
  // Reinitialize c to its default state
  std::memset(&c, 0, sizeof(C));
   
  std::cout << c.f(100) << std::endl;
}
