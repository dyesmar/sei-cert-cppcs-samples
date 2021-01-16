// EXP58-CPP: Noncompliant Code Example
#include <cstdarg>
 
extern "C" void f(float a, ...) {
  va_list list;
  va_start(list, a);
  // ...
  va_end(list);
}
