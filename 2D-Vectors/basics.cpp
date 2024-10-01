#include<iostream>
#include<vector>
using namespace std;
int main(){ 
    // initialization of 2D-Vectors 
    int arr1[3][3] = {{1,2,3},{3,4,5},{5,6,7}};
    // rows -> 3 - 0 to 2
    // collumns -> 3 - 0 to 2

    // initialization of 2D-Vectors an another way
    int brr[3][3] = {1,2,3,4,5,6,7,8,9};

    // input in 2D array 

    int arr[2][3];
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    // printing all 2D elements, using for loop
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
