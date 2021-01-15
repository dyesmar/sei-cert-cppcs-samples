// DCL50-CPP: Noncompliant Code Example
#include <cstdarg>

int add(int first, int second, ...) {
  int r = first + second;  
  va_list va;
  va_start(va, second);
  while (int v = va_arg(va, int)) {
    r += v;
  }
  va_end(va);
  return r;
}
