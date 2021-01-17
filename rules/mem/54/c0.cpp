// MEM54-CPP: Compliant Solution (alignas)
#include <new>
  
void f() {
  char c; // Used elsewhere in the function
  alignas(long) unsigned char buffer[sizeof(long)];
  long *lp = ::new (buffer) long;
  
  // ...
}
