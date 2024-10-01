// Ques. Given a sorted array of non-negative distinct integers, find the smallest missing non-negative element in it.

#include<iostream>
using namespace std;
int missingNO(int arr[], int n){
    for(int i=0; i<=8; i++){
        if(i!=arr[i]) {
            return i;
            break;
        }
    }
}
int missNO(int arr[], int n){

}
int main(){
    int arr[] = {1,2,3,4,6,7};
    int n = 6;

    // using linear search (o(n) complexity)
    cout<<missingNO(arr,8)<<endl;

    // using binary search (o(log n) complexity)
    missNO(arr,n);
}


