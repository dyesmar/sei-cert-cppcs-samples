// MEM50-CPP: Noncompliant Code Example
#include <new>

void f() noexcept(false) {
  unsigned char *ptr = static_cast<unsigned char *>(::operator new(0));
  *ptr = 0;
  // ...
  ::operator delete(ptr);
}
