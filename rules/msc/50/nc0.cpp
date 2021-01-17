// MSC50-CPP: Noncompliant Code Example
#include <cstdlib>
#include <string>
  
void f() {
  std::string id("ID"); // Holds the ID, starting with the characters "ID" followed
                        // by a random integer in the range [0-10000].
  id += std::to_string(std::rand() % 10000);
  // ...
}
