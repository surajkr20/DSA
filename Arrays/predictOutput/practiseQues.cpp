// 1.

// #include<iostream>
// using namespace std;
// int main(){
//     int num[26],temp;
//     num[0]=100;
//     num[25]=200;
//     temp=num[25];
//     num[25]=num[0];
//     num[0]=temp;
//     cout<<endl<<num[0]<<" "<<num[25];
//     return 0;
// }

// 2. point out the errors(if any) in the following code;

// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cin>>size;
//     int arr[size];
//     for(int i=1; i<=size; i++){
//         cin>>arr[i];
//         cout<<arr[i];
//     }
//     return 0;
// }

// Q. find sum of total array's element.

#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[size];
    int sum = 0;
    cout<<"Enter array's elements : ";
    for(int i=0; i<=4; i++){
        cin>>arr[i];
    }
    for(int i=0; i<=4; i++){
        sum = sum+arr[i];
    }
    cout<<"sum of total elements of array : "<<sum;
}

