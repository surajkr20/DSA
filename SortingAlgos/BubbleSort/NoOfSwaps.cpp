// Ques. How much maximum swaps are needed to sort array of length 6?

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {4, 3, 2, 1, 6, 5};
    int n = arr.size();

    int count = 0;

    for(int i=0; i<n; i++){
        bool flag = true;
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                count++;
                flag = false;
            }
        }
        if(flag==true){
            break;
        }
    }

    cout<<"No of swapping needed : "<<" "<<count;
}