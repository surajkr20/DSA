#include<iostream>
using namespace std;

int main(){

    int arr[10] = {2,5,5,7,2,6,6};

    int ans = 0;

    for(int i=0; i<10; i++){
        ans = ans ^ arr[i];
    }
    cout<<ans;
}