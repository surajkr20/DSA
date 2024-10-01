#include<iostream>
using namespace std;
void display(int arr[],int size){  // int arr[] ek pointer h, int* arr
    for(int i=0; i<=size-1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void change(int arr[],int size){ // int arr[] - int* arr
    arr[3] = 34;
    arr[0] = 100;
    
}
int main(){
    int arr[] = {23,43,45,56,44};
    int size = sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    change(arr,size);
    display(arr,size);
}