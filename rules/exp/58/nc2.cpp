// EXP58-CPP: Noncompliant Code Example
#include <cstdarg>
#include <iostream>
#include <string>
 
extern "C" void f(std::string s, ...) {
  va_list list;
  va_start(list, s);
  std::cout << s << ", " << va_arg(list, int);
  va_end(list);
}
