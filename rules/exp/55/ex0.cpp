// EXP55-CPP: EXP55-CPP-EX1
// Legacy function defined elsewhere - cannot be modified; does not attempt to
// modify the contents of the passed parameter.
void audit_log(char *errstr);

void f() {
  const char INVFNAME[]  = "Invalid file name.";
  audit_log(const_cast<char *>(INVFNAME));
}
