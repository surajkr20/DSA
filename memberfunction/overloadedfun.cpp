
#include<iostream>
using namespace std;

class A{
    int x,y;
public:
    int sum(int, int);
    int sum(int);
};

int A::sum(int a, int b){
    x = a, y = b;
    return (x+y);
}

int A::sum(int a){
    int b = 30;
    int x = a;
    return (x+b);
}

int main(){
    A a;
    int p,q;
    cout<<"Enter the value of p and q : ";
    cin>>p>>q;
    
    cout<<p<<" "<<q<<endl;
}