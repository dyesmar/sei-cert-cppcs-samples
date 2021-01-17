// MEM56-CPP: Noncompliant Code Example
#include <memory>
 
struct S {
  std::shared_ptr<S> g() { return std::shared_ptr<S>(this); }   
};
 
void f() {
  std::shared_ptr<S> s1 = std::make_shared<S>();
  // ...
  std::shared_ptr<S> s2 = s1->g();
}
