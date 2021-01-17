// CTR54-CPP: Noncompliant Code Example
#include <iostream>
 
template <typename Ty>
bool in_range(const Ty *test, const Ty *r, size_t n) {
  return test >= r && test < (r + n);
}
 
void f() {
  double foo[10];
  double *x = &foo[0];
  double bar;
  std::cout << std::boolalpha << in_range(&bar, x, 10);
}
