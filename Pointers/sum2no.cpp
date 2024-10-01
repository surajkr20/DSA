// sum of two numbers using dereference or pointer

#include<iostream>
using namespace std;
int main(){
    int a,b;

    int* p = &a; // store the address of a in pointer
    int* p1 = &b; // store the address of b in pointer

    cout<<"enter a value of and b : ";
    cin>>*p>>*p1;

    cout<<*p + *p1;
}