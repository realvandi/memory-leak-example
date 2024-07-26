#include <iostream>

class Node {
public:
  int value;
  Node *next;

  Node(int val) : value(val), next(nullptr) {}
};

void createList() {
  Node *head = new Node(1);
  Node *second = new Node(2);
  head->next = second;

  // Intentionally neglecting to delete the allocated memory
}

int main() {
  createList();
  std::cout << "List created" << std::endl;
  return 0;
}
