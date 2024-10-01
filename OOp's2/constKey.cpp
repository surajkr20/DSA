#include<iostream>
using namespace std;

// functions in const keyword.
int addNum( const int a, const int b){
    return a+b;
}

int main(){
    const int x = 40;
    const int y = 49;
    // x = 30; - value not changable
    
    const int* const m = &x;
    // const int* means the data pointed to by 'm' cannot be modified.
    // const ptr means the pointer 'm' itself cannot point to a different location.
    
    cout<<m<<endl;
    cout<<*m<<endl;

    cout<<addNum(x,y)<<endl;

    const int arr[5] = {1,2,3,4,5};
    // arr[3] = 89; it's not changable
}