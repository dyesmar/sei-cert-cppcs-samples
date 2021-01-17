// CON52-CPP: Compliant Solution (C++11)
struct MultiThreadedFlags {
  unsigned char flag1;
  unsigned char flag2;
};
  
MultiThreadedFlags flags;
  
void thread1() {
  flags.flag1 = 1;
}
 
void thread2() {
  flags.flag2 = 2;
}
