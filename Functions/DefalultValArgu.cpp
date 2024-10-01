
#include<iostream>
using namespace std;

int print(int x = 0,float y= 9.9){ // it's a default values
    cout<<x<<" "<<y;
}

int main(){
    int x,y;
    x = 99;
    y = 54;
    print(98,9.77);
}