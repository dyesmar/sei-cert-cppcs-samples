// EXP57-CPP: Compliant Solution (std::shared_ptr)
#include <memory>
 
class Handle {
  std::shared_ptr<class Body> impl;
  public:
    Handle();
    ~Handle() {}
    // ...
};
