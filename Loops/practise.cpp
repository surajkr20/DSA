
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the value of m and n : ";
    cin>>m>>n;
    int pow = 1;
    for(int i=1; i<=n; i++){
        pow = pow*m;
    }
    cout<<pow;
    return 0;
}