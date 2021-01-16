// EXP54-CPP: Noncompliant Code Example
struct S {
  void mem_fn();
};
 
void f() {
  S *s;
  s->mem_fn();
}
