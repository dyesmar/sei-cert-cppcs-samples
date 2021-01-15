// DCL57-CPP: Noncompliant Code Example (function-try-block)
// Assume that this class is provided by a 3rd party and it is not something
// that can be modified by the user.
class Bad {
  ~Bad() noexcept(false);
};
