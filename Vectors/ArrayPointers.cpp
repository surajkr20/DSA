
#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,4,5,6,5};
    // int* ptr = arr; // store address of first element of array.
    // int* p = &arr; - this is the wrong way of storing address of array, kyuki pointers me arr ka sirf first element ka address hi store hota h.
    int* ptr1 = &arr[0];
    *ptr1 = 8; // value update(arr[0]) using star operator(*p) 
    for(int i=0; i<=4; i++){
        cout<<ptr1[i]<<" ";
    }
    cout<<endl;
    cout<<ptr1<<endl;
    cout<<ptr1[0]; // pointer access all arrays elements.
}

// Note - int* p = &arr; - this is the wrong way of storing address of array, kyuki pointers me arr ke first element ka address hi store hota h.

