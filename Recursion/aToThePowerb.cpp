// Make a function which calculates 'a' raised to the power 'b' using recursion.

#include<iostream>
using namespace std;
void power(int a, int b){
    // using loops
    int prod = 1;
    for(int i=0; i<b; i++){
        prod = prod*a;
    }
    cout<<prod<<endl;
}
int powRec(int a,int b){
    // it's take more time complexities
    if(b==0) return 1;
    return a*powRec(a,b-1);
}
int lessPow(int x, int n){
    // it's uses less complexities
    if(n==1) return x;
    if(n%2==0){
        return lessPow(x,n/2)*lessPow(x,n/2);
    }
    if(n%2!=0){
        return lessPow(x,n/2)*lessPow(x,n/2)*x;
    }
}
int main(){
    int a;
    cout<<"Enter the value of a : ";
    cin>>a;
    int b;
    cout<<"Enter the value of b : ";
    cin>>b;

    // using loops
    // power(a,b);

    // using recursion
    // cout<<a<<" "<<"raised to the power"<<" "<<b<<" "<<"is"<<" "<<powRec(a,b);

    // another method it's uses less complexities
    cout<<lessPow(a,b)<<endl;
}