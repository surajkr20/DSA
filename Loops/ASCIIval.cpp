// Qeus. write a program to print all the Ascii values and their equivalent characters of 26 alphabets using a while loop.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;

    int i = 0;
    while(i<=n){
        cout<<(char)('A'+i)<<" "<<(int)(i+'A')<<endl;
        i++;
    }
    
}