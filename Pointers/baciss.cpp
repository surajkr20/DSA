// pointers - a way to store addresses 

#include<iostream>
using namespace std;
int main(){
    // int x,y;
    // cout<<&x<<" "<<&y<<endl; // printing address of x and y.
    // cout<<sizeof(int)<<endl; // print size of int data types.
    // cout<<sizeof(char)<<endl; // print size of char data types.
    // cout<<sizeof(bool)<<endl; // print size of float data types.
    // cout<<sizeof(float)<<endl; // print size of boolean data types.
    // cout<<sizeof(double)<<endl; // print size of double data types.
    // cout<<sizeof(long long); // print size of long long data types.
    int n;
    char m;
    int* p = &n; // int* is a data type like int, char, float etc its stored the address of n.
    char* k = &m;  
    cout<<k<<endl;  
    cout<<&m<<endl;
    cout<<&n<<endl;
    cout<<p<<endl;
}