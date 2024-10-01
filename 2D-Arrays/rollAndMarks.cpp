#include<iostream>
using namespace std;
int main(){
    // int m,n;
    // cout<<"Enter students roll no : ";
    // cin>>m;
    // cout<<"Enter enter students marks : ";
    // cin>>n;

    int arr[3][2];

    // inputs using nested loop

    // cout<<"Enter arrays elements : ";

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}