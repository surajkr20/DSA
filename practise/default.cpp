
#include<iostream>
#include<vector>
using namespace std;

int rotateArr(vector<int>& num, int i, int j){
    while(i<=j){
        int temp = num[i];
        num[i] = num[j];
        num[j] = temp;
        i++;
        j--;
    }
}

int display(vector<int>& arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int> arr = {2,3,1,5,9,4};
    int n = arr.size();
    int k = 2;

    rotateArr(arr,0,n-k-1);
    rotateArr(arr,n-k,n-1);
    rotateArr(arr,0,n-1);
    display(arr);
}