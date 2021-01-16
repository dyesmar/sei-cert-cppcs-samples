// EXP54-CPP: Compliant Solution
int *g() {
  static int i = 12;
  return &i;
}
 
void h(int *i);
 
void f() {
  int *i = g();
  h(i);
}
