// MEM50-CPP: Noncompliant Code Example (std::string::c_str())
#include <string>
 
std::string str_func();
void display_string(const char *);
 
void f() {
  const char *str = str_func().c_str();
  display_string(str);  /* Undefined behavior */
}
