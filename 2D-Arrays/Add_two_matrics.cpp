// Ques. wap to program add 2 arrays.

// #include<iostream>
// using namespace std;
// int main(){

//     int size = 5;

//     int arr1[size] = {1,2,3,4,5};
//     int arr2[size] = {5,4,3,2,1};

//     int Array_sum[size];

//     for(int i=0; i<size; i++){
//         Array_sum[i] = arr1[i]+arr2[i];
//     }

//     for(int i=0; i<size; i++){
//         cout<<Array_sum[i]<<" ";
//     }
//     cout<<endl;
// }

// wap to program to two 2d arrays and print the new array.

#include<iostream>
using namespace std;
int main(){

    int i=2,j=2;

    int arr1[i][j] = {{1,2},{1,2}};
    int arr2[i][j] = {{4,5},{2,3}};

    int Arr_sum[i][j];

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            Arr_sum[i][j] = arr1[i][j]+arr2[i][j];
        }
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<Arr_sum[i][j]<<" ";
        }
    }

    cout<<endl;
}

