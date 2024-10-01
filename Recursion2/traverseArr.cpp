// Traverse in array using recursion.

#include<iostream>
#include<vector>
using namespace std;
void display(int arr[], int n, int idx){
    if(idx == n) return;
    cout<<arr[idx]<<endl;
    display(arr,n,idx+1);
    cout<<endl;
}
void display1(vector<int>& arr,int idx){
    if(idx==arr.size()) return;
    cout<<arr[idx]<<" ";
    display1(arr, idx+1);
}
int main(){
    int arr[] = {3,4,5,6};
    vector<int> arr1 = {3,8,9,10,24,64};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    display(arr, n, 0);
    display1(arr1,0);
}