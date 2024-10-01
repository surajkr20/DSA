
// #include<iostream>
// using namespace std;

// int value = 6; // Global variables

// int fun(int x,int y){ // Formal paramenters
//     cout<<"the address of fun x and y is - "<<&x<<" "<<&y<<endl;
//     // cout<<x<<""<<y<<endl;
//     cout<<value<<endl;
// }

// int main(){
//     int x,y;
//     // x = 9;
//     // y = 5;
//     int a = 5; // local variable
//     cout<<"the address of main x and y is - "<<&x<<" "<<&y<<endl;
//     fun(x,y); // Actual parameters
//     cout<<value;
//     return 0;
// }

#include<iostream>
using namespace std;
int fun(int flag,int check){
    cout<<flag<<endl<<check;
    // cout<<check;
}
int main(){
    float flag,check;
    flag = 9.90;
    fun(flag,check);
}

