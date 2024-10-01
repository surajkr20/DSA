#include<iostream>
using namespace std;

inline int great(int a, int b){
    return (a>b) ? a : b;
}

int main(){
    cout<<great(10,20);
}

