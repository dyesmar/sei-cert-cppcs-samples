// EXP54-CPP: Noncompliant Code Example
int *g() {
  int i = 12;
  return &i;
}
 
void h(int *i);
 
void f() {
  int *i = g();
  h(i);
}
