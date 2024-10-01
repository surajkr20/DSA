#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int display(Node* head){
    Node*  Temp = head;
    while(Temp != NULL){
        cout<<Temp->val<<" ";
        Temp = Temp->next;
    }
    cout<<endl;
}
void displayrec(Node* &head){ // pass by value and reference - ans is same
    if(head == NULL) return;
    cout<<head->val<<" ";
    displayrec(head->next);
}
void displayreverse(Node* head){
    if(head==NULL) return;
    displayreverse(head->next);
    cout<<head->val<<" ";
}
int main(){
    // Allocate memory on the heap
    Node* a = new Node(10); // Creates a Node object with val=10 on the heap
    Node* b = new Node(20); // Creates a Node object with val=20 on the heap
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    // Link the nodes
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    
    // recursive dispaly of linklist elements
    display(a);
    displayrec(a);
}