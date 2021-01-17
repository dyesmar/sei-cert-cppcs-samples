// CON53-CPP: Compliant Solution (std::lock())
#include <mutex>
#include <thread>
  
class BankAccount {
  int balance;
public:
  std::mutex balanceMutex;
  BankAccount() = delete;
  explicit BankAccount(int initialAmount) : balance(initialAmount) {}
  int get_balance() const { return balance; }
  void set_balance(int amount) { balance = amount; }
};
  
int deposit(BankAccount *from, BankAccount *to, int amount) {
  // Create lock objects but defer locking them until later.
  std::unique_lock<std::mutex> lk1(from->balanceMutex, std::defer_lock);
  std::unique_lock<std::mutex> lk2(to->balanceMutex, std::defer_lock);
 
  // Lock both of the lock objects simultaneously.
  std::lock(lk1, lk2);
 
  if (from->get_balance() >= amount) {
    from->set_balance(from->get_balance() - amount);
    to->set_balance(to->get_balance() + amount);
    return 0;
  }
  return -1;
}
  
void f(BankAccount *ba1, BankAccount *ba2) {
  // Perform the deposits.
  std::thread thr1(deposit, ba1, ba2, 100);
  std::thread thr2(deposit, ba2, ba1, 100);
  thr1.join();
  thr2.join();
}
