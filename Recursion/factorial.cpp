// Ques. Make a function which calculates the factorial of n using recursion.

#include<iostream>
using namespace std;
int factRecurse(int n){
    // solving this ques using recursion

    if(n==1 || n==0) return 1;  // base case
    
    return n*factRecurse(n-1);    // recursive call
}

int factLoop(int n){
    // using loop
    int factVal = 1;
    for(int i=1; i<=n; i++){
        factVal *= i;
    }
    return factVal;
}

int main(){
    int n;
    cout<<"Enter a Number for find factorial value : ";
    cin>>n;

    // cout<<factLoop(n);
    cout<<factRecurse(n);
}