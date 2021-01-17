// MEM56-CPP: Noncompliant Code Example
#include <memory>
 
struct B {
  virtual ~B() = default; // Polymorphic object
  // ...
};
struct D : B {};
 
void g(std::shared_ptr<D> derived);
 
void f() {
  std::shared_ptr<B> poly(new D);
  // ...
  g(std::shared_ptr<D>(dynamic_cast<D *>(poly.get())));
  // Any use of poly will now result in accessing freed memory.
}
