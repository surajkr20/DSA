#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int> arr = {2,5,0,-2,-4,7};
    int n = arr.size();

    // Apply insertion sort
    for(int i=1; i<n; i++){
        int j = i;
        // while(j>=1){
        //     if(arr[j]>=arr[j-1]) break;
        //     else swap(arr[j],arr[j-1]);
        //     j--;
        // }
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int ele : arr){
        cout<<ele<<" ";
    }
}