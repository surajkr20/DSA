// Write a program to store roll number and marks obtained by 4 students side by side in a matrix.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[2][4] = {{2,9,5,1},{63,90,99,37}};

    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}