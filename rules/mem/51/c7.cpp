// MEM51-CPP: Compliant Solution (std::unique_ptr)
#include <memory>

struct S {};

void f() {
  std::unique_ptr<S[]> s = std::make_unique<S[]>(10);
}
