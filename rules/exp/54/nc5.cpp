// EXP54-CPP: Noncompliant Code Example
class S { 
  int v; 
 
public: 
  S() : v(12) {} // Non-trivial constructor 
 
  void f(); 
};   
 
void f() { 
 
  // ...   
 
  goto bad_idea;   
 
  // ... 
 
  S s; // Control passes over the declaration, so initialization does not take place.   
 
  bad_idea: 
    s.f(); 
}
