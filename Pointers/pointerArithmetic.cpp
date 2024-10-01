// pointer Arithmetic (increment and Decrement)
// => the dependence of addition and substaction to pointers on the data type

// int = 4 bytes se aage(in adsress)
// bool/char = 1 byte se aage.

// #include<iostream>
// using namespace std;
// int main(){
//     int x = 5;
//     int* p = &x;
//     cout<<p<<endl; // 0x61ff08
//     p++;
//     cout<<p; // 0x61ff08
// }

#include<iostream>
using namespace std;
int main(){
    int x = 4;
    int* p = &x;
    cout<<*p<<endl; // 4
    p++;
    cout<<*p; // 6422284
}