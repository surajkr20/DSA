#include<iostream>
#include<vector>
using namespace std;
int Search(vector<int>& nums,int n){
    int s = nums.size();
    int lo = 0;
    int hi = s-1;

    // finding pivot element
    while(lo<hi){
        int mid = lo+(hi-lo)/2;
        if(nums[mid]>nums[hi]) lo = mid+1;
        else hi = mid;
    }

    // pivot is lo
    // Determining which part of the arr to search , reset value of l and h
    lo = 0;
    hi = s-1;

    int pivot = lo;
    if (n >= nums[pivot] && n <= nums[hi]) lo = pivot;
    else hi = pivot - 1;

    // standard binary search

   while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] == n)
        {
            return mid;
        }
        else if (nums[mid] < n)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    
    return -1;
}
int main(){
    vector<int> arr = {4,5,6,1,2,3};
    int n;
    cout<<"Enter your target : ";
    cin>>n;

    cout<<Search(arr,n);
}