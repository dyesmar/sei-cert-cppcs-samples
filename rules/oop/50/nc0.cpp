// OOP50-CPP: Noncompliant Code Example
struct B {
  B() { seize(); }
  virtual ~B() { release(); }
  
protected:
  virtual void seize();
  virtual void release();
};
 
struct D : B {
  virtual ~D() = default;
  
protected:
  void seize() override {
    B::seize();
    // Get derived resources...
  }
  
  void release() override {
    // Release derived resources...
    B::release();
  }
};
