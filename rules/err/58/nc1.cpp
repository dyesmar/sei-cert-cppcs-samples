// ERR58-CPP: Noncompliant Code Example
#include <string>
  
static const std::string global("...");
 
int main()
try {
  // ...
} catch(...) {
  // IMPORTANT: Will not catch exceptions thrown
  // from the constructor of global
}
