// ERR55-CPP: Noncompliant Code Example
#include <cstddef>
#include <vector>
  
void f(std::vector<int> &v, size_t s) noexcept(true) {
  v.resize(s); // May throw
}
