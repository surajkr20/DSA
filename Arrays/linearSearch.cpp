
// Ques. Find the element x in the array. Take array and x as input.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elemnets of array : ";
//     for(int i=0; i<=n-1; i++){
//         cin>>arr[i];
//     }
//     int x;
//     int check = 0;
//     cout<<"Enter the value of your finding element : ";
//     cin>>x;
//     for(int i=0; i<=n-1; i++){
//         if(arr[i]==x){
//             check = 1;
//             break;
//         }
//     }
//     if(check==1){
//         cout<<"the value of x is exist in given array";
//     }
//     else{
//         cout<<"not exist";
//     }
// }

#include<iostream>
using namespace std;
int search(int arr[],int size){
    int x,check = 0;
    cout<<"Enter the vlaue of your seraching element in given array : ";
    cin>>x;
    for(int i=0; i<=size; i++){
        if(arr[i]==x){
            check = 1;
            break;
        }
    }
    if(check==1){
        // cout<<"is exist in given array";
        return 1;
    }
    else{
        // cout<<"is not exist in given array";
        return 0;
    }

}
int main(){
    int arr[5] = {23,43,54,56,76};
    int result = search(arr,5);
    cout<<result;
}