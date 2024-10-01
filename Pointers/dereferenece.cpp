// its called star operator(*p)

#include<iostream>
using namespace std;
int main(){
    int x = 100;
    x = 130; // value update

    int* p = &x;

    *p = 50; // value update without x variable means using star operator.

    cout<<*p; // *p means - p ke andar jo address rkha h, uss address pr jao and vahan ki value print kr do.
    
    // int x,y;
    // int* p = &x;
    // int* p1 = &y;
    // cout<<"Enter the value of x and y : ";
    // cin>>*p>>*p1;
    // cout<<*p+*p1;
    // return 0;
}