// EXP54-CPP: Compliant Solution
struct S {
  void mem_fn();
};
 
void f() {
  S *s = new S;
  s->mem_fn();
  delete s;
}
