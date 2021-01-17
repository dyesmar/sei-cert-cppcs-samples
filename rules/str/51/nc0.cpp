// STR51-CPP: Noncompliant Code Example
#include <cstdlib>
#include <string>
 
void f() {
  std::string tmp(std::getenv("TMP"));
  if (!tmp.empty()) {
    // ...
  }
}
