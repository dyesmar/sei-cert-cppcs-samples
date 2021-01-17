// OOP53-CPP: Noncompliant Code Example
class C {
  int dependsOnSomeVal;
  int someVal;
  
public:
  C(int val) : someVal(val), dependsOnSomeVal(someVal + 1) {}
};
