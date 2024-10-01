// Ques. Given a sorted array of non-negative distinct(different) integers, find the smallest missing non-negative in it.

#include<iostream>
#include<vector>
using namespace std;
int smallMissing(vector<int>& nums){
    int lo = 0;
    int hi = nums.size()-1;
    int ans = -1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(nums[mid]==mid) lo = mid+1;
        else {
            ans = mid;
            hi = mid-1;
        }
    }
    return ans;
}
int smallestMissing(vector<int>& arr){
    for(int i=0; i<arr.size(); i++){
        if(i!=arr[i]){
            return i;
            break;
        }
    }
}
int main(){
    vector<int> arr = {0,1,3,5,7,8,9,12};

    // using binary search (0(log n) complexity)
    cout<<smallMissing(arr)<<endl;

    // using linear search
    cout<<smallestMissing(arr)<<endl;
}