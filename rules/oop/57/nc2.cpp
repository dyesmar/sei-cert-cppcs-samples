// OOP57-CPP: Noncompliant Code Example
#include <cstring>
  
class C {
  int i;
  
public:
  virtual void f();
   
  // ...
};
  
void f(C &c1, C &c2) {
  if (!std::memcmp(&c1, &c2, sizeof(C))) {
    // ...
  }
}
