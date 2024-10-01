// Ques. Square root, leetcode(69).

#include<iostream>
using namespace std;
int sqrtBinary(int n){
    int lo = 0;
    int hi = n;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        long long m = (long long)mid;
        long long y = (long long)n;

        if(m*m==y) return mid;
        else if(m*m>y) hi = mid-1;
        else lo = mid+1;
    }
    return hi;
}
int sqrtLinear(int n){
    // it's work only perfect squares.
    for(int i=0; i<=n; i++){
        if(i*i==n){
            return i;
            break;
        }
    }
}
int main(){
    int n;
    cout<<"Enter your No : ";
    cin>>n;

    // using binary search
    cout<<sqrtBinary(n)<<endl;

    // using linear search
    // cout<<sqrtLinear(n)<<endl;
}