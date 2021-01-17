// OOP57-CPP: Noncompliant Code Example
#include <cstring>
  
class C {
  int *i;
  
public:
  C() : i(nullptr) {}
  ~C() { delete i; }
  
  void set(int val) {
    if (i) { delete i; }
    i = new int{val};
  }
  
  // ...
};
  
void f(C &c1) {
  C c2;
  std::memcpy(&c2, &c1, sizeof(C)); 
}
