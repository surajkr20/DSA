
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter value of a :- ";
    cin>>a;
    cout<<"Enter value of b :- ";
    cin>>b;
    int pow = 1;
    for (int  i = 1; i <= b; i++)
    {
        pow = pow*a;
    }
    cout<<pow;
}