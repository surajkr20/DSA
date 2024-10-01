// palindrome means --> 121 = 121


#include<iostream>
using namespace std;
int checkPalindrome(int n){

    if(n<0){
        return false;
    }

    int temp = n;
    int reverse = 0;
    while(temp!=0){
        int ld = temp%10;
        reverse = (reverse*10) + ld;
        temp = temp / 10;
    }

    return (reverse == n);
}
int main(){
    int n;
    cout<<"Enter a No : ";
    cin>>n;

    cout<<checkPalindrome(n);
}