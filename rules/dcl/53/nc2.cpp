// DCL53-CPP: Noncompliant Code Example
#include <iostream>

struct Widget {
  explicit Widget(int i) { std::cout << "Widget constructed" << std::endl; }
};

struct Gadget {
  explicit Gadget(Widget wid) { std::cout << "Gadget constructed" << std::endl; }
};

void f() {
  int i = 3;
  Gadget g(Widget(i));
  std::cout << i << std::endl;
}
