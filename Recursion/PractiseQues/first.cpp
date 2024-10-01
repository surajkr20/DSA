#include<iostream>
using namespace std;
void reverse(int arr[], int size,int m){
    int i = m+1;
    int j = size-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int display(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5] = {2,3,4,5,6};
    int m;
    cout<<"Enter your reversing position : ";
    cin>>m;
    reverse(arr,5,m);
    display(arr,5);
}