// DCL57-CPP: Noncompliant Code Example
#include <stdexcept>
 
class S {
  bool has_error() const;
 
public:
  ~S() noexcept(false) {
    // Normal processing
    if (has_error()) {
      throw std::logic_error("Something bad");
    }
  }
};
