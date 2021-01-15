// DCL57-CPP: Noncompliant Code Example (std::uncaught_exception())
#include <exception>
#include <stdexcept>
 
class S {
  bool has_error() const;
 
public:
  ~S() noexcept(false) {
    // Normal processing
    if (has_error() && !std::uncaught_exception()) {
      throw std::logic_error("Something bad");
    }
  }
};
