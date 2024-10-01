// Given a sorted array of distinct(different) integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

#include<iostream>
#include<vector>
using namespace std;
int insertPosition(vector<int>& nums,int target){
    int lo = 0;
    int hi = nums.size()-1;

    // if(target>nums[hi-1]) return hi+1;
    
    // Ensure hi is within bounds and check against nums[hi]
    if (nums.empty() || target > nums[hi]) return hi + 1;

    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(target==nums[mid]) return mid;
        if(target<nums[mid]) hi = mid-1;
        else lo = mid+1;
    }
    return lo;
}
int main(){
    int target;
    cout<<"Enter your target : ";
    cin>>target;

    vector<int> nums = {1,3,5,6};

    cout<<insertPosition(nums,target);
}