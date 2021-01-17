// ERR59-CPP: Noncompliant Code Example
// application.cpp
#include "library.h"
 
void f() {
  try {
    func();
  } catch(int &e) {
    // Handle error
  }
}
