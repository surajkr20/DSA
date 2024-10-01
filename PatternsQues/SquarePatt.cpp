#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your Square No :- ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=5; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}