// MEM50-CPP: Compliant Solution
#include <iostream>
#include <string>
 
int main(int argc, const char *argv[]) {
  std::string str;

  if (argc > 1) {
    str = argv[1];
  }

  std::cout << str << std::endl;
}
