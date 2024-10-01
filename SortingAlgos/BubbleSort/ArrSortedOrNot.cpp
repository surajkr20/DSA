#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {1,2,3,4,5};
    int flag = true;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]>arr[i+1]){
            flag = false;
            break;
        }
    }
    if(flag==true) cout<<"sorted";
    else cout<<"not sorted";
}