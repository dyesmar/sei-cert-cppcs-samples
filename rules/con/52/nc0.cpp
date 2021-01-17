// CON52-CPP: Noncompliant Code Example (bit-field)
struct MultiThreadedFlags {
  unsigned int flag1 : 2;
  unsigned int flag2 : 2;
};
 
MultiThreadedFlags flags;
 
void thread1() {
  flags.flag1 = 1;
}
 
void thread2() {
  flags.flag2 = 2;
}
