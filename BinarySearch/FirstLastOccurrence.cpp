// Ques. Find first and last position of element in sorted array. input = [5,7,7,8,8,10], target = 8, then output is = (3,4).

#include<iostream>
#include<vector>
using namespace std;
vector<int> FirstLast(vector<int>& nums, int target){
    int lo = 0, hi = nums.size()-1;
    int first = -1, last = -1;

    // finding first occurrence
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(nums[mid]==target){
            first = mid;
            hi = mid - 1;
        }
        else if(nums[mid]<target) lo = mid+1;
        else hi = mid-1;
    }
    
    // finding last occurrence
    lo = 0, hi = nums.size()-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(nums[mid]==target){
            last = mid;
            lo = mid+1;
        }
        else if(nums[mid]<target) lo = mid+1;
        else hi = mid-1;
    }

    // // initialize a vector and push the first and last element and then return
    vector<int> v;
    v.push_back(first);
    v.push_back(last);

    return v;
}
int main(){
    int target;
    std::cout<<"Enter your target no : ";
    std::cin>>target;

    vector<int> arr = {1,2,2,2,3,3,4,5,6,7,7,7};

    vector<int> result = FirstLast(arr,target);

    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
}