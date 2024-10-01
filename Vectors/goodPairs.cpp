// Given an arr of integers find the no of good pairs. A pair is good if nums[i]==nums[j] and i<j.
// good pairs means in arr whose indices on same value and only take whose indices, first indices is smaler than second indcies.

#include<iostream>
#include<vector>
using namespace std;

int goodPairs(vector<int>& nums){
    int n = nums.size();
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i]==nums[j]){
                cout<<"("<<i<<","<<j<<")"<<endl;
                count++;
            }
        }
    }
    return count;
}

int twoSum(vector<int>& nums, int k){
    int n = nums.size();
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if((nums[i]+nums[j])==k){
                cout<<"("<<i<<","<<j<<")"<<endl;
                count++;
            }
        }
    }
    return count;
}

int main(){
    int k;
    cout<<"Enter your pair sum value : ";
    cin>>k;

    vector<int> nums;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(1);

    cout<<"total no of good pairs is "<<" "<<goodPairs(nums);

    // cout<<"total no of pairs :-"<<" "<<twoSum(nums,k);
}