#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int majorityElement(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    for(int ele : nums) cout<<ele<<" ";
    cout<<endl;
    return nums[(nums.size())/2];
}
int main(){
    vector<int> arr = {3,2,3};
    int n = arr.size();

    cout<<majorityElement(arr);
}