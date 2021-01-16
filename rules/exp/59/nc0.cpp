// EXP59-CPP: Noncompliant Code Example
#include <cstddef>
 
struct D {
  virtual void f() {}
  int i;
};
 
void f() {
  size_t off = offsetof(D, i);
  // ...
}
