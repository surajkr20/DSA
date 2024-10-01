#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = nullptr;
    }
};
void function1() {
    int* p = new int;  // Allocated on the heap
    *p = 10;
    delete p;  // Memory must be explicitly deallocated
}
void function2() {
    int x = 10;  // Allocated on the stack
    int y = 20;  // Allocated on the stack
}  // Memory for x and y is automatically deallocated here

int main() {
    // Allocate memory on the heap
    Node* a = new Node(10); // Creates a Node object with val=10 on the heap
    Node* b = new Node(20); // Creates a Node object with val=20 on the heap

    // Link the nodes
    a->next = b;

    // Use the nodes
    cout << "a->val: " << a->val << endl; // Outputs: 10
    cout << "b->val: " << b->val << endl; // Outputs: 20

    // Deallocate memory to avoid memory leaks
    delete a;
    delete b;

    function1();
    function2();
    return 0;
}
