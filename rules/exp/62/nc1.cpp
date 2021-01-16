// EXP62-CPP: Noncompliant Code Example
#include <cstring>

struct S {
  int i, j, k;
 
  // ...

  virtual void f();
};

void f() {
  S *s = new S;
  // ...
  std::memset(s, 0, sizeof(S));
  // ...
  s->f(); // undefined behavior
}
