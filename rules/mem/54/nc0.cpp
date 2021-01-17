// MEM54-CPP: Noncompliant Code Example
#include <new>
  
void f() {
  short s;
  long *lp = ::new (&s) long;
}
