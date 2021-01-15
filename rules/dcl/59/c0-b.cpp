// DCL59-CPP: Compliant Solution
// a.cpp
#include "a.h"
#include <iostream>

int v; // Definition of global variable v
 
void f() {
  std::cout << "f(): " << v << std::endl;
  v = 42;
  // ...
}
