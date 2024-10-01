#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int lower(vector<int>& num,int n){
    int lo = 0;
    int hi = num.size()-1;

    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(num[mid]==n) return num[mid-1];
        if(num[mid]<n) lo = mid+1;
        else hi = mid-1;
    }
    return -1;
}
int linearSearch(vector<int>& nums,int target){
    vector<int> arr;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]<target){
            arr.push_back(nums[i]);
        }
    }
    int mx = INT_MIN;
    for(int i=0; i<arr.size(); i++){
        if(mx<arr[i]){
            mx = arr[i];
        }
    }
    return mx;
}
int FirstOccurrence(vector<int>& nums, int target){
    int lo = 0;
    int hi = nums.size()-1;
    int first = -1, last = -1;
    // finding first occurrence
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(nums[mid]==target){
            if(nums[mid+1]!=target){
                last = mid;
                break;
            }
            else lo = mid+1;
        }
        else if(nums[mid]<target) lo = mid+1;
        else hi = mid-1;
    }
    // finding last occurrence
    lo = 0, hi = nums.size()-1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(nums[mid]==target){
            if(nums[mid-1]!=target){
                first = mid;
                break;
            }
            else hi = mid-1;
        }
        else if(nums[mid]<target) lo = mid+1;
        else hi = mid-1;
    }
    // store value of first and last occurrence
    
}
int main(){
    vector<int> arr = {-1,-1,2,2,3,3,3,4};
    int x;
    cout<<"Enter your target : ";
    cin>>x;

    // cout<<lower(arr,x);
    // cout<<linearSearch(arr,x);
    cout<<FirstOccurrence(arr,x);
}