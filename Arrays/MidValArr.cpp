// Find the mid value of array, odd and even both.

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int size;
    cout<<"enter size of arr : ";
    cin>>size;

    int arr[size];

    cout<<"Enter arrays elements : "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    // all arrays element sort
   
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int mid;
    if(6%2==0){
        mid = (n-1)/2;  //for even size
    }
    else{
        mid = n/2;      // for odd size
    }

    for(int i=0; i<size; i++){
        cout<<arr[mid];
        break;
    }
}