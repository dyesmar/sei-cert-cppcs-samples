// MEM51-CPP: Noncompliant Code Example (std::unique_ptr)
#include <memory>

struct S {};

void f() {
  std::unique_ptr<S> s{new S[10]};
}
