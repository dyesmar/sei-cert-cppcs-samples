// MEM56-CPP: Compliant Solution
#include <memory>
 
void f() {
  std::shared_ptr<int> p1 = std::make_shared<int>();
  std::shared_ptr<int> p2(p1);
}
