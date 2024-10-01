// '\0' is a special character, ascii value = 0;

#include<iostream>
#include<string>
using namespace std;

int main(){
    // char ch = '\0';
    // cout<<ch;
    // cout<<(int)ch;

    // char str[] = {'a','b','c','d','e'};
    // for(int i=0; str[i]!=0; i++){
    //     // Ascii value of all arrays characters
    //     cout<<(int)str[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0; str[i]!=0; i++){
    //     // printing all arrays characters
    //     cout<<str[i]<<" ";
    // }
    // cout<<endl;
    // cout<<str;

    // Strings are immutable, it means i can change string indexing values, my according 

    string s = "Abhinav";
    s[2] = 'o';
    s[1] = 'r';
    cout<<s; // output - Aroinav
}