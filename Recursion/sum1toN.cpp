// Ques. print sum from 1 to n (parameterised).

#include<iostream>
using namespace std;
void sum1toN(int sum,int n){
    // method-1 = by parameterized rule
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    sum1toN(sum+n, n-1);
}
int returnSum(int n){
    if(n==0) return 0;
    return n+returnSum(n-1);
}
int main(){
    int n;
    cout<<"Enter a no : ";
    cin>>n;

    // m-1 = by parameterized
    sum1toN(0,n);

    // m-2 = by return type
    cout<<returnSum(n);
}