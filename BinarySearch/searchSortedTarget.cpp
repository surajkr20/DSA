#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &nums, int target)
{
    int n = nums.size();
    int lo = 0, hi = n - 1;

    // Finding pivot (smallest element) in the rotated sorted array
    while (lo < hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] > nums[hi])
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }

    // lo or hi now points to the smallest element, which is the pivot
    int pivot = lo;
    lo = 0, hi = n - 1;

    // Determine in which part of the array to perform binary search
    if (target >= nums[pivot] && target <= nums[hi])
    {
        lo = pivot;
    }
    else
    {
        hi = pivot - 1;
    }

    // Standard binary search
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
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

int main()
{
    vector<int> arr = {3};
    int n;
    cout << "Enter your target: ";
    cin >> n;
    int result = search(arr, n);
    if (result != -1)
    {
        cout << "Target found at index: " << result << endl;
    }
    else
    {
        cout << "Target not found" << endl;
    }
    return 0;
}
