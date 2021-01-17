// STR52-CPP: Compliant Solution
#include <iostream>
#include <string>

extern void g(const char *);

void f(std::string &exampleString) {
  // ...
  exampleString.replace(0, 2, "bb");
  // ...
  g(exampleString.data());
}
