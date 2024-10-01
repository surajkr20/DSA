// Ques. Input a string of length n and count all the vowels in the given string.

#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter length of string : ";
    cin>>n;
    char st[n];
    // cout<<"Enter your string value : ";
    // getline(cin,st);

    cout<<"Enter your string according to your entered string size : ";

    for(int i=0; i<n; i++){
        cin>>st[i];
    }

    int count = 0;
    int i = 0;
    while(i<n){
        if(
            st[i] == 'a' ||
            st[i] == 'e' ||
            st[i] == 'i' ||
            st[i] == 'o' ||
            st[i] == 'u' ||
            st[i] == 'A' ||
            st[i] == 'E' ||
            st[i] == 'I' ||
            st[i] == 'O' ||
            st[i] == 'U'
        ){
            count++;
        }

        i++;
    }
    cout<<"NO of vowels this string : "<<" "<<count;
}