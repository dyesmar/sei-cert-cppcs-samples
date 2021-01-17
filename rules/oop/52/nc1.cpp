// OOP52-CPP: Noncompliant Code Example
#include <memory>
  
struct Base {
  virtual void f();
};
  
struct Derived : Base {};
  
void f() {
  std::unique_ptr<Base> b = std::make_unique<Derived()>();
}
