#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your No :- ";
    cin>>n;
    int reverse = 0;
    for(int i=1; n!=0; i++){
        int lastDigit = n%10;
        reverse = (reverse*10)+lastDigit;
        n = n/10;
    }
    cout<<reverse;
    return 0;
}