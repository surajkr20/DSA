// remove one's in arr

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void remove1(vector<int>& ans,vector<int>& nums,int idx){
    if(nums.size()==idx){
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        return;
    }
    if(nums[idx]!=1) ans.push_back(nums[idx]);
    remove1(ans, nums, idx+1);

}

int main(){
    vector<int> arr = {1,2,3,1,1,2,1};
    vector<int> ans;
    remove1(ans,arr,0);
}