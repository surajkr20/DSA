#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[3][3];

    cout<<"Enter 2D Arrays elements : "<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    int sum = 0;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum = sum+arr[i][j];
        }
    }
    cout<<"Total elements of sum : "<<" "<<sum;

}