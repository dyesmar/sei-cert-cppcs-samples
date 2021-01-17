// MEM54-CPP: Noncompliant Code Example
#include <new>
  
void f() {
  char c; // Used elsewhere in the function
  unsigned char buffer[sizeof(long)];
  long *lp = ::new (buffer) long;
  
  // ...
}
