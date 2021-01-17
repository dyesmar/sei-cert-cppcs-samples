// ERR53-CPP: Noncompliant Code Example
#include <string>
  
class C {
  std::string str;
  
public:
  C(const std::string &s) try : str(s) {
    // ...
  } catch (...) {
    if (!str.empty()) {
      // ...
    }
  }
};
