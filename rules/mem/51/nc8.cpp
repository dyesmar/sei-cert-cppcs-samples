// MEM51-CPP: Noncompliant Code Example (std::shared_ptr)
#include <memory>

struct S {};

void f() {
  std::shared_ptr<S> s{new S[10]};
}
