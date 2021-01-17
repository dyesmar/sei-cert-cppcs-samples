// MEM52-CPP: Noncompliant Code Example
#include <cstring>
  
void f(const int *array, std::size_t size) noexcept {
  int *copy = new int[size];
  std::memcpy(copy, array, size * sizeof(*copy));
  // ...
  delete [] copy;
}
