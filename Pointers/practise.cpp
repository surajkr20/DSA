// Q. write a function to find out the first last digit of a number without returing anything.

#include<iostream>
using namespace std;
void find(int n, int* ptr1, int* ptr2){
    *ptr2 = n%10; // lastDigit
    while(n>9){
        n/=10;
    }
    *ptr1 = n;
    return;
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int firstDigit,lastDigit;
    int* ptr1 = &firstDigit;
    int* ptr2 = &lastDigit;
    find(n,ptr1,ptr2);
    cout<<firstDigit<<" "<<lastDigit;
}