// CON53-CPP: Noncompliant Code Example
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
  std::lock_guard<std::mutex> from_lock(from->balanceMutex);
  
  // Not enough balance to transfer.
  if (from->get_balance() < amount) {
    return -1; // Indicate error
  }
  std::lock_guard<std::mutex> to_lock(to->balanceMutex);
  
  from->set_balance(from->get_balance() - amount);
  to->set_balance(to->get_balance() + amount);
  
  return 0;
}
  
void f(BankAccount *ba1, BankAccount *ba2) {
  // Perform the deposits.
  std::thread thr1(deposit, ba1, ba2, 100);
  std::thread thr2(deposit, ba2, ba1, 100);
  thr1.join();
  thr2.join();
}
