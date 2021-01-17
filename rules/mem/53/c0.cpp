// MEM53-CPP: Compliant Solution
#include <cstdlib>
#include <new>
 
struct S {
  S();
   
  void f();
};
 
void g() {
  void *ptr = std::malloc(sizeof(S));
  S *s = new (ptr) S;
 
  s->f();
  
  s->~S();
  std::free(ptr);
}
