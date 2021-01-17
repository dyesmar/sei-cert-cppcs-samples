// ERR55-CPP: Compliant Solution
#include <exception>
  
class Exception1 : public std::exception {};
class Exception2 : public std::exception {};
 
void foo() {
  throw Exception2{}; // Okay because foo() promises nothing about exceptions
}
 
void bar() throw (Exception1) {
  try {
    foo();
  } catch (Exception2 e) {
    // Handle error without rethrowing it
  }
}
