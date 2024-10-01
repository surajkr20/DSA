// Linear Search and Binary search

#include<iostream>
#include<vector>
using namespace std;
int found(vector<int>& nums, int target){
    int low = 0;
    int high = nums.size()-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]>target) high = mid - 1;
        else low = mid+1;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter your target : ";
    cin>>n;

    vector<int> nums;

    nums.push_back(4);
    nums.push_back(8);
    nums.push_back(10);
    nums.push_back(15);
    nums.push_back(20);
    nums.push_back(25);

    cout<<found(nums,n);

}