#include<iostream>
using namespace std;
int main(){

    int m,n;
    cout<<"Enter row of matrics : ";
    cin>>m;
    cout<<"Enter collumn  of matrics : ";
    cin>>n;

    int arr1[m][n];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr1[i][j];
        }
    }

    // using extra arrys
    
    // int Trans_matric[m][n];

    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         Trans_matric[i][j] = arr1[j][i];
    //     }
    // }

    // cout<<"After matrics transpose elements : ";
    
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<Trans_matric[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // transpose print using without extra array
    cout<<"after printing transpose "<<endl;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr1[j][i]<<" ";
        }
        cout<<endl;
    }

}