#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void DisplayMax(vector<int>& arr,int max, int idx){
    if(idx==arr.size()){
        cout<<max;
        cout<<endl;
        return;
    }
    if(max<<arr[idx]) max = arr[idx];
    DisplayMax(arr,max, idx+1);
}
int Another(vector<int>& arr, int idx){
    if(idx==arr.size()) return INT_MIN;
    return max(arr[idx],Another(arr,idx+1));
}
int main(){
    vector<int> arr = {3,8,9,10,24,64};
    int n = sizeof(arr)/sizeof(arr[0]);

    DisplayMax(arr,INT_MIN,0);

    cout<<Another(arr, 0);
}