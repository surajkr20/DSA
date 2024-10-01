// Remove elements in a array

#include<iostream>
#include<vector>
using namespace std;
int remove(vector<int>& v, int n, int x){
    vector<int> arr;
    for(int i=0; i<n; i++){
        if(v[i]==x){
            continue;
        }
        else{
            arr.push_back(v[i]);
        }
    }

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter a size of arr : ";
    cin>>n;

    vector<int> v;
    cout<<"Enter arrays element : "<<endl;
    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }

    int target;
    cout<<"enter your target : ";
    cin>>target;

    remove(v,n,target);
}


// for leetcode

// int n = nums.size();
//         int k = 0; // initialize a value for storing value who no equal to val

//         for(int i=0; i<nums.size(); i++){
//             if(nums[i]!=val){
//                 nums[k] = nums[i];
//                 k++;
//             }
//         }
//         return k;