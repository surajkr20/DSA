
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your Nth term :- ";
    cin>>n;
    int a = 0; 
    int b = 1;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i=1; i<=n; i++){
        int nextNum = a+b;
        cout<<nextNum<<endl;
        a = b;
        b = nextNum;
    }
}

