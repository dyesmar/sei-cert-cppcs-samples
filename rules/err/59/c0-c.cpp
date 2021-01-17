// ERR59-CPP: Compliant Solution
// application.cpp
#include "library.h"
 
void f() {
  if (int err = func()) {
    // Handle error
  }
}
