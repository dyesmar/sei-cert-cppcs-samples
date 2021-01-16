// EXP50-C: Compliant Solution
void f(int i, const int *b) {
  ++i;
  int a = i + b[i];
  // ...
}
