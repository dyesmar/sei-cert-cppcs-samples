// MEM56-CPP: Compliant Solution
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
  g(std::dynamic_pointer_cast<D, B>(poly));
  // poly is still referring to a valid pointer value.
}
