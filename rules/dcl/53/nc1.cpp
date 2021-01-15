// DCL53-CPP: Noncompliant Code Example
#include <iostream>
 
struct Widget {
  Widget() { std::cout << "Constructed" << std::endl; }
};

void f() {
  Widget w();
}
