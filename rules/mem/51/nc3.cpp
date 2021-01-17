// MEM51-CPP: Noncompliant Code Example (array new[])
void f() {
  int *array = new int[10];
  // ...
  delete array;
}
