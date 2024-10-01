#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int firstOccur(vector<int>& nums, int x){
    int lo = 0;
    int hi = nums.size()-1;
    bool flag = false;
    while(lo<hi) {
        int mid = lo+(hi-lo)/2;
        if(nums[mid]==x){
            if(nums[mid-1]!=x){
                flag = true;
                cout<<mid;
                break;
            }
            else hi = mid-1;
        }
        else if(nums[mid]<x) lo = mid+1;
        else hi = mid-1;
    }
    if(flag==false) cout<<-1;
}

int main(){
    vector<int> arr = {2,2,3,4,4,5,5,5};

    int x;
    cout<<"Enter the value : ";
    cin>>x;

    firstOccur(arr, x);

}