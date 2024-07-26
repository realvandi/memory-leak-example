#include <chrono>
#include <iostream>
#include <thread>

class Node {
public:
  int value;
  Node *next;

  Node(int val) : value(val), next(nullptr) {}
};

/*This code snippet could be run infinitely with while(true), but is simplified
 * to 100 iterations so it works with `leaks`*/
void simulateEndpoint() {
  int iteration = 0;
  while (iteration < 100) {
    std::cout << "Creating new node" << std::endl;

    Node *head = new Node(1);
    Node *second = new Node(2);
    head->next = second;

    // Intentionally neglecting to delete the allocated memory
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
