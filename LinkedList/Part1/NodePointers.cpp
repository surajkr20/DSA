
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
int size(Node* head){
    int n = 0;
    Node*  Temp = head;
    while(Temp != NULL){
        Temp = Temp->next;
        n++;
    }
    return n;
}
int main(){
    // using node
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    
    // cout<<a->val<<endl;
    // cout<<b->val<<endl;
    // cout<<a->next->val<<endl;
    // cout<<a->next->next->val<<endl;
    // cout<<a->next->next->next->val<<endl;

    // printing nodes
    Node* temp = a; // the value of 'a' is head.
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }

    // cout<<a->next->val<<endl; // value of b
    // cout<<a->next->next->val<<endl; // value of c
    // cout<<a->next->next->next->val<<endl; // value of d

    // print node value using functions
    // display(a);
    // finding size of linklist
    // cout<<"total size of linked list "<<" "<<size(a);
}