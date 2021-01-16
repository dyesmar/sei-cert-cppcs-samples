// INT50-CPP: Compliant Solution (Fixed Unscoped Enumeration)
enum EnumType : int {
  First,
  Second,
  Third
};

void f(int intVar) {
  EnumType enumVar = static_cast<EnumType>(intVar);
}
