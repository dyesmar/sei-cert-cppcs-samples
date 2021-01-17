// OOP53-CPP: Compliant Solution
class C {
  int someVal;
  int dependsOnSomeVal;
  
public:
  C(int val) : someVal(val), dependsOnSomeVal(someVal + 1) {}
};
