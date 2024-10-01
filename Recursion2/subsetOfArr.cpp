#include<iostream>
#include<string>
#include<vector>
using namespace std;

void ArrSubset(int arr[],int n, int idx, vector<int> ans){
    if(idx==n){
       for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
       }
       cout<<endl;
       return;
    }
    ArrSubset(arr,n,idx+1,ans);
    ans.push_back(arr[idx]);
    ArrSubset(arr,n,idx+1,ans);
}
int main(){
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    
    ArrSubset(arr,n,0,v);
    
}