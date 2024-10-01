
#include<iostream>
using namespace std;
int main(){
    int arr[8] = {56, 35, 96, 45, 78, 25, 12, 46};
    int arr1[8];

    int i=0;
    int j=i+1;
    while(i<j && j<8){
        if(arr[i]<arr[j]){
            arr1[i] = arr[i];
        }
        i++;
        j++;
    }

    for(int i=0; i<8; i++){
        cout<<arr1[i]<<endl;
    }
}