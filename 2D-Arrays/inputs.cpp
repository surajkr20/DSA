#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter no of row : ";
    cin>>m;
    cout<<"Enter no of collumn : ";
    cin>>n;

    int arr[m][n];

    // inputs using nested loop

    cout<<"Enter arrays elements : ";

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[2][3];
//     cout<<"Enter your matrix elements : ";
//     for(int i=0; i<2; i++){
//         for(int j=0; j<3; j++){
//             cin>>arr[i][j];
//         }
//     }

//     for(int i=0; i<2; i++){
//         for(int j=0; j<3; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }