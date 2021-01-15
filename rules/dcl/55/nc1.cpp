// DCL55-CPP: Noncompliant Code Example
#include <cstddef>
 
struct test {
  int a;
  char b;
  int c;
};
 
// Safely copy bytes to user space
extern int copy_to_user(void *dest, void *src, std::size_t size);
 
void do_stuff(void *usr_buf) {
  test arg{};
 
  arg.a = 1;
  arg.b = 2;
  arg.c = 3;
 
  copy_to_user(usr_buf, &arg, sizeof(arg));
}
