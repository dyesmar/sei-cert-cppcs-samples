// EXP50-C: Compliant Solution
void f(int i, const int *b) {
  int a = i + b[i + 1];
  ++i;
  // ...
}
