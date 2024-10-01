#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {5,0,1,2,0,0,4,0,3};
    int n = arr.size();

    // sorting using bubble sort algo
    
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}