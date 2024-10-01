
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int display(vector<int>& d){
    for(int i=0; i<d.size(); i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
}

int reverse(vector<int>& a, int m, int n){
    int i,j;
    i = m;
    j = n;
    while(i<=j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}

void reverse_mt2(vector<int>& nums,int k){
    vector<int> temp(nums.size());
    for(int i=0; i<nums.size(); i++){
        temp[(i+k)%nums.size()] = nums[i];
    }
    nums = temp;
    return;
}

int main(){
    vector<int> v = {1,2,3,4,5,6};
    
    int n = v.size();

    int k;
    cout<<"Enter your steps for reverse a array : ";
    cin>>k;

    if(k>n) k = k%n;

    // Approach 1--
    // reverse(v,0,n-k-1);
    // reverse(v,n-k,n-1);
    // reverse(v,0,n-1);

    // display(v);

    // Approach 2--
    reverse_mt2(v,k);
    display(v);
}