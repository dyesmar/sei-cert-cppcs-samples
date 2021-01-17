// STR52-CPP: Compliant Solution (std::replace())
#include <algorithm>
#include <string>
 
void f(const std::string &input) {
  std::string email{input};
  std::replace(email.begin(), email.end(), ';', ' ');
}
