// EXP50-C: Noncompliant Code Example
void f(int i, const int *b) {
  int a = i + b[++i];
  // ...
}
