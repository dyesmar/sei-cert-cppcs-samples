// MEM54-CPP: Compliant Solution (std::aligned_storage)
#include <new>
  
void f() {
  char c; // Used elsewhere in the function
  std::aligned_storage<sizeof(long), alignof(long)>::type buffer;
  long *lp = ::new (&buffer) long;
  
  // ...
}
