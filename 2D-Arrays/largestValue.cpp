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

    int max = INT_MIN;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(max<arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    cout<<"max vlue is "<<" "<<max<<endl;
}