// MEM51-CPP: Noncompliant Code Example ( new )
#include <cstdlib>
 
struct S {
  ~S();
};

void f() {
  S *s = new S();
  // ...
  std::free(s);
}
