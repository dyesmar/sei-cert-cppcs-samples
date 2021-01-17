// MEM51-CPP: Compliant Solution (malloc())
#include <cstdlib>

void f() {
  int *i = static_cast<int *>(std::malloc(sizeof(int)));
  // ...
  std::free(i);
}
