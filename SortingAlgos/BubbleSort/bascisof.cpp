#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {5,3,4,1,2};
    int n = arr.size()-1;
    for(int i=0; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // using bubble sort
    // for(int i=0; i<=n; i++){
    //     for(int j=0; j<=n-i; j++){
    //         if(arr[j]>arr[j+1]){
    //             int temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = temp;
    //         }
    //     }
    // }
    // optimized solution
    for(int i=0; i<=n; i++){
        bool flag = true;
        for(int j=0; j<=n-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
        if(flag == true) break;
    }
    // printing sorted arr
    for(int i=0; i<=n; i++){
        cout<<arr[i]<<" ";
    }
}