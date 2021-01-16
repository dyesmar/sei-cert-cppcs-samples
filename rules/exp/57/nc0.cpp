// EXP57-CPP: Noncompliant Code Example
class Handle {
  class Body *impl;  // Declaration of a pointer to an incomplete class
public:
  ~Handle() { delete impl; } // Deletion of pointer to an incomplete class
  // ...
};
