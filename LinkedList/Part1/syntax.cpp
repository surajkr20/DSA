
// creation of linklist and introduction

#include<iostream>
using namespace std;

// creating own dataype using class(node)
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main(){
    // creation of linked list
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    // forming link-listed
    a.next = &b;
    b.next = &c; 
    c.next = &d;

    // // print value of b without using b 
    // cout<<(a.next)->val<<endl;
    // cout<<(c.next)->val<<endl;

    // using of only a print all node values
    // cout<<(a.next)->val<<endl;
    // cout<<((a.next)->next)->val<<endl;
    // cout<<(((a.next)->next->next))->val<<endl;

    // printing linkedList.
    Node temp = a;
    // while(temp.next!=NULL){
    //     cout<<temp.val<<" ";
    //     temp = *(temp.next);
    // }
    
    while(1){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp = *(temp.next);
    }
}