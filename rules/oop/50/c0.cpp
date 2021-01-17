// OOP50-CPP: Compliant Solution
class B {
  void seize_mine();
  void release_mine();
   
public:
  B() { seize_mine(); }
  virtual ~B() { release_mine(); }
 
protected:
  virtual void seize() { seize_mine(); }
  virtual void release() { release_mine(); }
};
 
class D : public B {
  void seize_mine();
  void release_mine();
   
public:
  D() { seize_mine(); }
  virtual ~D() { release_mine(); }
 
protected:
  void seize() override {
    B::seize();
    seize_mine();
  }
   
  void release() override {
    release_mine();
    B::release();
  }
};
