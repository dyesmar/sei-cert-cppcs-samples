// MEM54-CPP: Noncompliant Code Example (Failure to Account for Array Overhead)
#include <new>
 
struct S {
  S ();
  ~S ();
};
 
void f() {
  const unsigned N = 32;
  alignas(S) unsigned char buffer[sizeof(S) * N];
  S *sp = ::new (buffer) S[N];
  
  // ...
  // Destroy elements of the array.
  for (size_t i = 0; i != n; ++i) {
    sp[i].~S();
  }
}
