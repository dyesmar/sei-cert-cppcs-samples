// MSC53-CPP: Noncompliant Code Example
#include <cstdlib>
  
[[noreturn]] void f(int i) {
  if (i > 0)
    throw "Received positive input";
  else if (i < 0)
    std::exit(0);
}
