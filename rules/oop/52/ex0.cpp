// OOP52-CPP: OOP52-CPP:EX0
class Base {
public:
  // ...
  virtual void AddRef() = 0;
  virtual void Destroy() = 0;
};
 
class Derived final : public Base {
public:
  // ...
  virtual void AddRef() { /* ... */ }
  virtual void Destroy() { delete this; }
private:
  ~Derived() {}
};
