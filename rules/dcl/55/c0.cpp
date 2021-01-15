// DCL55-CPP: Compliant Solution
#include <cstddef>
#include <cstring>
 
struct test {
  int a;
  char b;
  int c;
};
 
// Safely copy bytes to user space.
extern int copy_to_user(void *dest, void *src, std::size_t size);
 
void do_stuff(void *usr_buf) {
  test arg{1, 2, 3};
  // May be larger than strictly needed.
  unsigned char buf[sizeof(arg)];
  std::size_t offset = 0;
 
  std::memcpy(buf + offset, &arg.a, sizeof(arg.a));
  offset += sizeof(arg.a);
  std::memcpy(buf + offset, &arg.b, sizeof(arg.b));
  offset += sizeof(arg.b);
  std::memcpy(buf + offset, &arg.c, sizeof(arg.c));
  offset += sizeof(arg.c);
 
  copy_to_user(usr_buf, buf, offset /* size of info copied */);
}
