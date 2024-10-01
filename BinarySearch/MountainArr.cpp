// Find peak index in mountain array 

#include<iostream>
#include<vector>
using namespace std;
int mountainArr(vector<int>& arr){
    int idx = -1;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            idx = i;
            break;
        }
    }
    return idx;
}
int peakMountain(vector<int>& nums){
    int lo = 0;
    int hi = nums.size();
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(nums[mid]>nums[mid+1] && nums[mid]<nums[mid-1]) return mid;
        else if(nums[mid]>nums[mid+1]) hi = mid - 1;
        else lo = mid+1;
    }
}
int main(){
    vector<int> arr = {1,3,5,4,1};

    // using linear search
    cout<<mountainArr(arr)<<endl;

    // using binary search
    cout<<peakMountain(arr)<<endl;
}