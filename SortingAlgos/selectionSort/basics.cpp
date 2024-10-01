#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int> arr = {5,3,1,4,2};
    int n = arr.size();

    // forEach loop
    for(int ele : arr){
        cout<<ele<<" ";
    }

    // selection sort
    for(int i=0; i<n-1; i++){
        int min = INT_MAX;
        int mindx = -1;
        // minimum element calculation in orange box
        for(int j=i; j<n; j++){
            if(arr[j]<min){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i],arr[mindx]);
    }

    // after sorting array
    cout<<endl;
    for(int ele : arr){
        cout<<ele<<" ";
    }
}