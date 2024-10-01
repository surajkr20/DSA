// Given an array of size n+1 consisting of integers form 1 to n. one of the elements is duplicate in the arr. find that duplicate element..

#include<iostream>
#include<vector>
using namespace std;
void method_1(int arr[],int size){
    // solving this question by method-1 using brute force method.
    bool flag = false;
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]==arr[j]){
                cout<<arr[j]<<endl;
                flag = true;
                break;
            }
        }
        if(flag==true) break; 
    }
}
void method_2(int arr[],int size){
    // it's optimised method- time efficient , space efficient and total no of operations is 7+1.
    int sum = 0;
    int n = 7;
    for(int i=0; i<=n; i++){
        sum += arr[i];
    }
    int s = n*(n+1)/2;
    cout<<sum-s<<endl;
}
int main(){
    int arr[8] = {6,3,2,4,3,7,1,5};
    method_1(arr,8);
    method_2(arr,8);
}