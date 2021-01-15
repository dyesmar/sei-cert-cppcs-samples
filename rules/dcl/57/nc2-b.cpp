// DCL57-CPP: Noncompliant Code Example (function-try-block)
class SomeClass {
  Bad bad_member;
public:
  ~SomeClass()
  try {
    // ...
  } catch(...) {
    // Handle the exception thrown from the Bad destructor.
  }
};
