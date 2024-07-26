#include <iostream>

class Node {
public:
  int value;
  Node *next;

  Node(int val) : value(val), next(nullptr) {}
  ~Node() {
    std::cout << "Node with value " << value << " is being deleted"
              << std::endl;
  }
};

void createList() {
  Node *head = new Node(1);
  Node *second = new Node(2);
  head->next = second;

  // Clean up duty!
  delete head;
  delete second;
}

int main() {
  createList();
  std::cout << "List created and memory freed" << std::endl;
  return 0;
}
