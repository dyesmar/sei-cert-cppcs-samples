// ERR61-CPP: Compliant Solution
#include <exception>
#include <iostream>
  
struct S : std::exception {
  const char *what() const noexcept override {
    return "My custom exception";
  }
};
  
void f() {
  try {
    throw S();
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}
