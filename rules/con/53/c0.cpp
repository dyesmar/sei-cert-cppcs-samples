// CON53-CPP: Compliant Solution (Manual Ordering)
#include <atomic>
#include <mutex>
#include <thread>
  
class BankAccount {
  static std::atomic<unsigned int> globalId;
  const unsigned int id;
  int balance;
public:
  std::mutex balanceMutex;
  BankAccount() = delete;
  explicit BankAccount(int initialAmount) : id(globalId++), balance(initialAmount) {}
  unsigned int get_id() const { return id; }
  int get_balance() const { return balance; }
  void set_balance(int amount) { balance = amount; }
};
 
std::atomic<unsigned int> BankAccount::globalId(1);
  
int deposit(BankAccount *from, BankAccount *to, int amount) {
  std::mutex *first;
  std::mutex *second;
  
  if (from->get_id() == to->get_id()) {
    return -1; // Indicate error
  }
  
  // Ensure proper ordering for locking.
  if (from->get_id() < to->get_id()) {
    first = &from->balanceMutex;
    second = &to->balanceMutex;
  } else {
    first = &to->balanceMutex;
    second = &from->balanceMutex;
  }
  std::lock_guard<std::mutex> firstLock(*first);
  std::lock_guard<std::mutex> secondLock(*second);
  
  // Check for enough balance to transfer.
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
