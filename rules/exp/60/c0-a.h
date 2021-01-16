// EXP60-CPP: Compliant Solution
// library.h
#include <type_traits>

struct S {
  void f() { /* ... */ } // No longer virtual
};
static_assert(std::is_standard_layout<S>::value, "S is required to be a standard layout type");

void func(S &s); // Implemented by the library, calls S::f()
