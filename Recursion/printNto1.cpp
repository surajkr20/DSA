// print N to 1 using recursion

#include<iostream>
using namespace std;
void nextNo(int i, int n){
    if(i>n) return;
    cout<<i<<endl;
    nextNo(i+1,n);
}
void Reverse(int n){
    // print n to 1.
    // if(n==0) return; // base vlaue
    // cout<<n<<endl; 
    // Reverse(n-1); // recursive call

    // print 1 to n
    if(n==0) return; // base vlaue
    Reverse(n-1); // recursive call
    cout<<n<<endl; 
}
int main(){
    int n;
    cout<<"Enter a NO : ";
    cin>>n;
    // Reverse(n);
    nextNo(1,n);
}