// Declaration and initilization of array

#include<iostream>
using namespace std;
int main(){
    int arr[5];
    // cout<<"Enter the size of Array : ";
    
    // cout<<arr[2]<<" "<<arr[3];
    cout<<"Enter array's elements : ";
    for(int i=0; i<=4; i++){
        cin>>arr[i];
    }
    for(int i=0; i<=4; i++){
        cout<<arr[i]<<" "<<"of indexing"<<" "<<i<<endl;
    }
}

// #include<iostream>
// using namespace std;
// int main(){
//     int marks[10];
//     cout<<"Enter marks of students : ";
//     for(int i=0; i<=9; i++){
//         cin>>marks[i];
//     }
//     for(int i=0; i<=9; i++){
//         if(marks[i]<35){
//             cout<<"roll no : "<<" "<<i<<endl;
//         }
//     }
// }