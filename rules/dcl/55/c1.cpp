// DCL55-CPP: Compliant Solution (Padding Bytes)
#include <cstddef>

struct test {
  int a;
  char b;
  char padding_1, padding_2, padding_3;
  int c;
 
  test(int a, char b, int c) : a(a), b(b),
    padding_1(0), padding_2(0), padding_3(0),
    c(c) {}
};
// Ensure c is the next byte after the last padding byte.
static_assert(offsetof(test, c) == offsetof(test, padding_3) + 1,
              "Object contains intermediate padding");
// Ensure there is no trailing padding.
static_assert(sizeof(test) == offsetof(test, c) + sizeof(int),
              "Object contains trailing padding");



// Safely copy bytes to user space.
extern int copy_to_user(void *dest, void *src, std::size_t size);

void do_stuff(void *usr_buf) {
  test arg{1, 2, 3};
  copy_to_user(usr_buf, &arg, sizeof(arg));
}
