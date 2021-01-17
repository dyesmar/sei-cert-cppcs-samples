// MSC53-CPP: Compliant Solution
#include <cstdlib>
  
[[noreturn]] void f(int i) {
  if (i > 0)
    throw "Received positive input";
  std::exit(0);
}
