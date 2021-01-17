// ERR54-CPP: Compliant Solution
// Classes used for exception handling
class B {};
class D : public B {};
 
void f() {
  try {
    // ...
  } catch (D &d) {
    // ...
  } catch (B &b) {
    // ...
  }
}
