// Ques. write a program to rotate the matrix by 90 degrees clockwise. (leetcode 48)

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int m;
    cout<<"Enter the no of row/collumn : ";
    cin>>m;
    int arr[m][m];

    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    // transpose in the same matrix
    for(int i=0; i<m; i++){
        for(int j=i+1; j<m; j++){
            // swapping of i,j and j,i
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // rotate the matrix by 90 degrees clockwise
    // reverse each row
    for(int k=0; k<m; k++){ // tranversing each row
        int i=0;
        int j=m-1;
        while(i<=j){
            int temp = arr[k][i];
            arr[k][i] = arr[k][j];
            arr[k][j] = temp;
            i++;
            j--;
        }

    }
    // print 
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}