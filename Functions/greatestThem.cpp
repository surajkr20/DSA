
// greatest of three no.

#include<iostream>
using namespace std;
int greatestNO(int a,int b,int c){
    int max;
    if(a>b && a>c){
        max = a;
    }
    else if(b>a && b>c){
        max = b;
    }
    else if(c>a && c>b){
        max = c;
    }
    else{
        cout<<"both are equals";
    }
    return max;
}
int main(){
    int a,b,c;
    cout<<"Enter the value of a,b and c : ";
    cin>>a>>b>>c;
    cout<<greatestNO(a,b,c);
}