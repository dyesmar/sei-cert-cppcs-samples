// MSC50-CPP: Compliant Solution
#include <random>
#include <string>
  
void f() {
  std::string id("ID"); // Holds the ID, starting with the characters "ID" followed
                        // by a random integer in the range [0-10000].
  std::uniform_int_distribution<int> distribution(0, 10000);
  std::random_device rd;
  std::mt19937 engine(rd());
  id += std::to_string(distribution(engine));
  // ...
}
