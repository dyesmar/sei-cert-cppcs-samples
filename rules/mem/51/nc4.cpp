// MEM51-CPP: Noncompliant Code Example (malloc())
#include <cstdlib>
void f() {
  int *i = static_cast<int *>(std::malloc(sizeof(int)));
  // ...
  delete i;
}
