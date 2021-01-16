// EXP60-CPP: Noncompliant Code Example
// library.h
struct S {
  virtual void f() { /* ... */ }
};
 
void func(S &s); // Implemented by the library, calls S::f()
