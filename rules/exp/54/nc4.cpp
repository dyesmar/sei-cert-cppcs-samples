// EXP54-CPP: Noncompliant Code Example
#include <functional>
 
void f() {
  auto l = [](const int &j) { return j; };
  std::function<const int&(const int &)> fn(l);
 
  int i = 42;
  int j = fn(i);
}
