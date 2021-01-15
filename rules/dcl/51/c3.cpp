// DCL51-CPP: Compliant Solution (Reserved Macros)
#include <cinttypes> // for std::int_fast16_t

void f(std::int_fast16_t val) {
  enum { BufferSize = 80 };
  // ...
}
