// pass by value and reference.

// #include<iostream>
// using namespace std;
// void swap(int* x, int* y){ // usi form me receive hoga.
//     int temp = *x;
//     *x = *y;
//     *y = temp;
//     // return 0;
// }
// int main(){
//     int a,b;
//     cout<<"Enter the value of a & b : ";
//     cin>>a>>b;
//     int* x = &a;
//     int* y = &b;
//     swap(x,y); // value jis form me send kiya jayega..
//     cout<<a<<" "<<b;
// }

// pass by vlaue and reference using alias.

#include<iostream>
using namespace std;
void swap(int &x, int &y){ // pass by reference.
    int temp = x;
    x = y;
    y = temp;
}
int main(){
    int a,b;
    cout<<"Enter the value of a & b : ";
    cin>>a>>b;
    swap(a,b); // value jis form me send kiya jayega ussi form receive hoga.
    cout<<a<<" "<<b;
}