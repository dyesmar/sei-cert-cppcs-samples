// STR52-CPP: Noncompliant Code Example
#include <iostream>
#include <string>
 
extern void g(const char *);
 
void f(std::string &exampleString) {
  const char *data = exampleString.data();
  // ...
  exampleString.replace(0, 2, "bb");
  // ...
  g(data);
}
