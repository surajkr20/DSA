// Write a program to print out all Armstrong numbers between 1 and 500.

#include<iostream>
#include<math.h>
using namespace std;
bool ArmStrong(int x){
    if(x<0) return false;

    int temp = x;
    int cubesum = 0;

    while(temp!=0){
        int ld = temp%10;
        int cube = (ld*ld*ld);
        cubesum = cubesum + cube;
        temp = temp/10;
    }
    return (cubesum == x);
}
int main(){
    int n;
    cout<<"Enter any digit : ";
    cin>>n;

    int result = ArmStrong(n);
    
    if(result==1) cout<<"it's armstrong no";
    else cout<<"it's not a armstrong no";
}