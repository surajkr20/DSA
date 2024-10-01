// Creating fun with same name but diffrent parameters

#include<iostream>
using namespace std;
void add(int a, int b){
    cout<<a+b<<endl;
}
void add(int a){
    cout<<a<<endl;
}
int main(){
    add(24);
    add(23,34);
}