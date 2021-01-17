// MEM52-CPP: Noncompliant Code Example
struct A { /* ... */ };
struct B { /* ... */ }; 
  
void g(A *, B *);
void f() {
  g(new A, new B);
}
