
// using third variable

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter the value of a and b : ";
//     cin>>a>>b;
//     int temp = a;
//     a = b;
//     b = temp;
//     cout<<a<<" "<<b;
// }

// #include<iostream> // swap without third variable
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter the value of a and b : ";
//     cin>>a>>b;
//     a = a+b;
//     b = a-b;
//     a = a-b;
//     cout<<a<<" "<<b;
// }

#include<iostream> // using fun.
using namespace std;
void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b;
}
int main(){
    int a,b;
    cout<<"Enter the value of a and b : ";
    cin>>a>>b;
    swap(a,b); // pass only value of a and b not reference;
}