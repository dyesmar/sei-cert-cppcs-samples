// MEM54-CPP: Compliant Solution (Clang/GCC)
#include <cstddef>
#include <new>
 
#if defined(__clang__) || defined(__GNUG__)
  const size_t overhead = sizeof(size_t);
#else
  static_assert(false, "you need to determine the size of your implementation's array overhead");
  const size_t overhead = 0; // Declaration prevents additional diagnostics about overhead being undefined; the value used does not matter.
#endif
 
struct S {
  S();
  ~S();
};
 
void *operator new[](size_t n, void *p, size_t bufsize) {
  if (n > bufsize) {
    throw std::bad_array_new_length();
  }
  return p;
}
 
void f() {
  const size_t n = 32;
  alignas(S) unsigned char buffer[sizeof(S) * n + overhead];
  S *sp = ::new (buffer, sizeof(buffer)) S[n];
  
  // ...
  // Destroy elements of the array.
  for (size_t i = 0; i != n; ++i) {
    sp[i].~S();
  }
}
