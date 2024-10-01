// Ques. wap to print the sum of all the even digits of a given number.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter any digit : ";
    cin>>n;

    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
        cout<<fact<<endl;
    }
}