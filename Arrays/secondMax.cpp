// second max

#include<iostream>
#include<climits>
using namespace std;
int max(int arr[],int size){
    int mx = INT_MIN; // using int_min, header file #include<iostream>
    int smx = INT_MIN; // using int_min, header file #include<iostream>
    for(int i=0; i<=size-1; i++){
        if(mx<arr[i]){
            mx = arr[i];
        }
    }
    for(int i=0; i<=size-1; i++){
        if(smx<arr[i] && arr[i]!=mx){
            smx = arr[i];
        }
    }
    cout<<smx<<endl;
    return (mx);
}

int main(){
    int arr[5] = {23,43,45,56,67};
    int maxVal = max(arr,5);
    cout<<maxVal<<endl;
}