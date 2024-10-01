
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int m;
    cout<<"Enter m : ";
    cin>>m;
    for(int i=1; i<=n; i++){
        for(int i=1; i<=m; i++){
            cout<<char (i+64)<<" ";
        }
        cout<<endl;
    }
}