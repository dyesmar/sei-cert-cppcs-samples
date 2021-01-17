// MEM50-CPP: Compliant solution (std::string::c_str())
#include <string>
 
std::string str_func();
void display_string(const char *s);

void f() {
  std::string str = str_func();
  const char *cstr = str.c_str();
  display_string(cstr);  /* ok */
}
