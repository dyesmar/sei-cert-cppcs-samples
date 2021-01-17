// MEM56-CPP: Noncompliant Code Example
#include <memory>
 
void f() {
  int *i = new int;
  std::shared_ptr<int> p1(i);
  std::shared_ptr<int> p2(i);
}
