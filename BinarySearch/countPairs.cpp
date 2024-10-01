// Count pairs whose sum is less than target

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int countPairs(vector<int>& nums, int target)
{
    // Sort the array
    sort(nums.begin(),nums.end());

    int count = 0;
    int n = nums.size();

    // Use two-pointer technique to find pairs
    for(int i = 0; i < n - 1; i++)
    {
        int lo = i + 1, hi = n - 1;
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (nums[i] + nums[mid] < target)
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        count += hi - i;
    }

    return count;
}

int main(){
    vector<int> arr = {-6,2,5,-2,-7,-1,3};
    int x;
    cout<<"Enter your target : ";
    cin>>x;

    cout<<countPairs(arr,x);
}