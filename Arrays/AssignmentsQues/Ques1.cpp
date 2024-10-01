// Ques. Calculate the product of all the elements in the given array.

#include<iostream>
#include<climits>
using namespace std;
int product(int arr[],int n){
    int prod = 1;
    int sum = 0;
    for(int i=0; i<=n-1; i++){
        prod = prod*arr[i];
        sum = sum+arr[i];
    }
    cout<<"total sum is : "<<" "<<sum<<endl;
    return prod;
}
int secondMax(int arr[],int n){
    int mx = INT_MIN;
    int mn = INT_MAX;
    int smax = INT_MIN;
    int smin = INT_MAX;
    for(int i=0; i<n; i++){
        if(mx<arr[i]){
            mx = arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(smax<arr[i] && mx!=arr[i]){
            smax = arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]<mn && mn!=arr[i]){
            smin = arr[i];
        }
    }
    cout<<"SecondMin is "<<" "<<smin<<endl;
    for(int i=0; i<n; i++){
        if(arr[i]<mn){
            mn = arr[i];
        }
    }
    cout<<"minimum value is "<<" "<<mn<<endl;
    cout<<"max value is "<<" "<<mx<<endl;
    return smax;
}
int duplicate(int arr[],int n){
    int j = 1;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                cout<<"duplicates available"<<endl;
                
            }
            else{
                cout<<"not available";
                
            }
            
        }
        break;
    }
    // cout<<j<<" "<<"times"<<endl;
}
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of Array : ";
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }

    int prodVal = product(arr,n);
    cout<<"Total product is "<<" "<<prodVal<<endl;

    int smaxVal = secondMax(arr,n);
    cout<<"Second max value is "<<" "<<smaxVal<<endl;

    duplicate(arr,n);

}