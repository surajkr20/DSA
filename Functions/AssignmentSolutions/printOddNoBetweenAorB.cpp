#include<iostream>
using namespace std;
int oddNo(int a,int b){
    int num = 0;
    for(int i=a; i>=b; i++){
        if(i%2!=0){
            num = i;
        }
        cout<<num<<endl;
    }
}
int main(){
    int a,b;
    cout<<"Enter a value of a and b : ";
    cin>>a>>b;
    oddNo(a,b);
}