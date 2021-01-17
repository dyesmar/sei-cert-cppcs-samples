// ERR52-CPP: Noncompliant Code Example
#include <csetjmp>
#include <iostream>
 
static jmp_buf env;
 
struct Counter {
  static int instances;
  Counter() { ++instances; }
  ~Counter() { --instances; }
};
 
int Counter::instances = 0;
 
void f() {
  Counter c;
  std::cout << "f(): Instances: " << Counter::instances << std::endl;
  std::longjmp(env, 1);
}
 
int main() {
  std::cout << "Before setjmp(): Instances: " << Counter::instances << std::endl;
  if (setjmp(env) == 0) {
    f();
  } else {
    std::cout << "From longjmp(): Instances: " << Counter::instances << std::endl;
  }
  std::cout << "After longjmp(): Instances: " << Counter::instances << std::endl;
}
