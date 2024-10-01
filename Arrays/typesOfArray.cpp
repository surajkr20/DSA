// types of array 
// 1. one-dimensional Array and two-dimensional arrays


// size and size of operator (how can we use it to find the length of array?)

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {23,4,5,6,34,45,32,22,6,78,99,80};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     cout<<size;
//     return 0;
// }

// Memory Allocation in Arrays

#include<iostream>
using namespace std;
int main(){
    int arr[] = {23,4,5,6,34,45,32,22,6,78,99,80};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    // address of array elements
    // arr ka address arr ke first element ke address ke equals hota h.ex(&arr==&arr[0])
    cout<<&arr<<endl;
    cout<<arr<<endl; // print address of first array's first element
    cout<<&arr[0]<<endl;
    cout<<&arr[4]<<endl;
    cout<<&arr[5]<<endl;
    cout<<&arr[6]<<endl;
    cout<<&arr[8]<<endl;

    return 0;
}
