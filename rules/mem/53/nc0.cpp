// MEM53-CPP: Noncompliant Code Example
#include <cstdlib>
 
struct S {
  S();
   
  void f();
};
 
void g() {
  S *s = static_cast<S *>(std::malloc(sizeof(S)));
  
  s->f();
  
  std::free(s);
}
