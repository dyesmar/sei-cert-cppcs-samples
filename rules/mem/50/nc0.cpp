// MEM50-CPP: Noncompliant Code Example (new and delete)
#include <new>
 
struct S {
  void f();
};
 
void g() noexcept(false) {
  S *s = new S;
  // ...
  delete s;
  // ...
  s->f();
}
