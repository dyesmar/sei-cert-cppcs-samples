// DCL55-CPP: Compliant Solution
#include <cstddef>
#include <cstring>
 
class base {
public:
  virtual ~base() = default;
};
class test : public virtual base {
  alignas(32) double h;
  char i;
  unsigned j : 80;
protected:
  unsigned k;
  unsigned l : 4;
  unsigned short m : 3;
public:
  char n;
  double o;
  
  test(double h, char i, unsigned j, unsigned k, unsigned l, unsigned short m,
       char n, double o) :
    h(h), i(i), j(j), k(k), l(l), m(m), n(n), o(o) {}
  
  virtual void foo();
  bool serialize(unsigned char *buffer, std::size_t &size) {
    if (size < sizeof(test)) {
      return false;
    }
    
    std::size_t offset = 0;
    std::memcpy(buffer + offset, &h, sizeof(h));
    offset += sizeof(h);
    std::memcpy(buffer + offset, &i, sizeof(i));
    offset += sizeof(i);
    unsigned loc_j = j; // Only sizeof(unsigned) bits are valid, so this is not narrowing.
    std::memcpy(buffer + offset, &loc_j, sizeof(loc_j));
    offset += sizeof(loc_j);
    std::memcpy(buffer + offset, &k, sizeof(k));
    offset += sizeof(k);
    unsigned char loc_l = l & 0b1111;
    std::memcpy(buffer + offset, &loc_l, sizeof(loc_l));
    offset += sizeof(loc_l);
    unsigned short loc_m = m & 0b111;
    std::memcpy(buffer + offset, &loc_m, sizeof(loc_m));
    offset += sizeof(loc_m);
    std::memcpy(buffer + offset, &n, sizeof(n));
    offset += sizeof(n);
    std::memcpy(buffer + offset, &o, sizeof(o));
    offset += sizeof(o);
    
    size -= offset;
    return true;
  }
};
 
// Safely copy bytes to user space.
extern int copy_to_user(void *dest, void *src, size_t size);
 
void do_stuff(void *usr_buf) {
  test arg{0.0, 1, 2, 3, 4, 5, 6, 7.0};
  
  // May be larger than strictly needed, will be updated by
  // calling serialize() to the size of the buffer remaining.
  std::size_t size = sizeof(arg);
  unsigned char buf[sizeof(arg)];
  if (arg.serialize(buf, size)) {
    copy_to_user(usr_buf, buf, sizeof(test) - size);
  } else {
    // Handle error
  }
}
