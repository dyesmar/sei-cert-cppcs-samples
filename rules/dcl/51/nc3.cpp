// DCL51-CPP: Noncompliant Code Example (Reserved Macros)
#include <cinttypes> // for int_fast16_t

void f(std::int_fast16_t val) {
  enum { MAX_SIZE = 80 };
  // ...
}
