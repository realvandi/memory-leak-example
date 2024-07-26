
#include <chrono>
#include <iostream>
#include <thread>

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

void simulateEndpoint() {
  int iteration = 0;
  while (iteration < 100) {
    std::cout << "Creating new node" << std::endl;

    Node *head = new Node(1);
    Node *second = new Node(2);
    head->next = second;

    // Properly deleting the allocated memory
    delete head;
    delete second;

    std::this_thread::sleep_for(
        std::chrono::milliseconds(10)); // Simulating some delay
    iteration++;
  }
}

int main() {
  std::cout << "Starting simulated endpoint..." << std::endl;
  simulateEndpoint();
  return 0;
}
