// CON54-CPP: Compliant Solution (Explicit loop with predicate)
#include <condition_variable>
#include <mutex>
  
struct Node {
  void *node;
  struct Node *next;
};
   
static Node list;
static std::mutex m;
static std::condition_variable condition;
   
void consume_list_element() {
  std::unique_lock<std::mutex> lk(m);
   
  while (list.next == nullptr) {
    condition.wait(lk);
  }
  
  // Proceed when condition holds.
}
