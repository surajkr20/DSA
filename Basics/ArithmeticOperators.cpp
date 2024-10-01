//Arithmetic operations on data type.

// #include<iostream>
// using namespace std;
// int main(){
//     int x = 2;
//     int y = 5;
//     cout<<x+y<<endl;
//     cout<<x*y<<endl;
//     cout<<x/y<<endl;
//     cout<<x%y<<endl;
// }

// increment - Decrement operators and commnets

// #include<iostream>
// using namespace std;
// int main(){
//     int x = 5;
//     x++; // post increment >> first use then increment
//     cout<<x<<endl;
//     x--; //
//     cout<<x<<endl;
//     ++x; // pre increment >> first increase then asign value
//     cout<<x<<endl;
//     --x;
//     cout<<x<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x = 5;
//     cout<<x<<endl;
//     cout<<++x<<endl;
//     cout<<x++<<endl;
//     cout<<x<<endl;
//     return 0;
// }

// Float Datatype

// #include<iostream>
// using namespace std;
// int main(){
//     float x = 3.1;
//     cout<<x<<endl;
//     cout<<++x;
// }

// Take two integers input , a and b : a>b, and find the remainder when a is divided by b;

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    // cout<<a%b;
    int q = a/b;
    int r = a-(b*q);
    cout<<r;
    return 0;
}