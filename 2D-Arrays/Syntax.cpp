// Two-dimensional Arrays

#include<iostream>
using namespace std;
int main(){
    // Declarations of 2d arrays
    int arr[3][3]; // 3 rows and 3 collumns and both index is (0-2).

    // intialization of 2d array
    // arr[3][3] = 90;
    // another way of intializing 2d array.

    int arr1[4][4] = {{1,2,3,4},{4,5,6,7},{7,8,9,0},{10,11,12,13}};
    
    cout<<arr1[1][3]<<endl;
    // print arr vlaues one by one using traverse method.
    for(int i=0; i<4; i++){
        cout<<arr1[0][i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<4; i++){
        cout<<arr1[1][i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<4; i++){
        cout<<arr1[2][i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<4; i++){
        cout<<arr1[3][i]<<" ";
    }
    cout<<endl;

    // print using nested loops

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

}