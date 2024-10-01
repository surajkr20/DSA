#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your NO : ";
    cin>>n;
    int m;
    cout<<"Enter value of Collumn : ";
    cin>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}