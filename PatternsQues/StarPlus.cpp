
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of N : ";
    cin>>n;
    int mid = n/2 + 1; // find mid value because input take always odd no.
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==mid || j==mid){
                cout<<"*"<<" ";
            }
            else{
                cout<<"#";
            }
        }
        cout<<endl;
    }
}