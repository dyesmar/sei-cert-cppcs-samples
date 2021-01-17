// MEM50-CPP: Compliant Solution
#include <new>

void f() noexcept(false) {
  void *ptr = ::operator new(0);
  // ...
  ::operator delete(ptr);
}
