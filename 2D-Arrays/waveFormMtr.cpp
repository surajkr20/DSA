// Ques. Write a program to print the matrix in wave form.

#include<iostream>
using namespace std;
int main(){

    int m,n;
    cout<<"Enter rows and collumns of given matrix : ";
    cin>>m>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    // wave print
    cout<<"wave elements of given array's"<<endl;
    for(int i=0; i<m; i++){
        if(i%2==0){
            for(int j=0; j<n; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        } else{
            for(int j=n-1; j>=0; j--){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    // opposite wave printing
    cout<<"printing opposite wave, given elements of array : ";
    for(int i=m-1; i>=0; i--){
        if(i%2==0){
            for(int j=0; j<n; j++){
                cout<<arr[i][j]<<" ";
            }
        
        } else{
            for(int j=n-1; j>=0; j--){
                cout<<arr[i][j]<<" ";
            }
            
        }
    }
}