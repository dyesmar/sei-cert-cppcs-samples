// DCL54-CPP: Compliant Solution
#include <new>

extern "C++" void update_bookkeeping(void *allocated_ptr, std::size_t size, bool alloc);

struct S {
  void *operator new(std::size_t size) noexcept(false) {
    void *ptr = ::operator new(size);
    update_bookkeeping(ptr, size, true);
    return ptr;
  }
 
  void operator delete(void *ptr, std::size_t size) noexcept {
    ::operator delete(ptr);
    update_bookkeeping(ptr, size, false);
  }
};
