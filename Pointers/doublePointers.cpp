
// Double pointers = used to address of a single pointers

#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int* ptr = &x;
    int** p = &ptr;
    cout<<x<<endl;
    cout<<ptr<<endl;
    cout<<p<<endl;
    cout<<*ptr<<endl; // 5
    cout<<**p<<endl; // 5
    return 0;
}