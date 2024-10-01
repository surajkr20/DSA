#include<iostream>
#include<string>
#include<sstream> // header file for stringstream
using namespace std;
int main(){
    string str = "i am a software engineer";
    stringstream ss(str);

    string temp;

    while(ss>>temp){ // str values are cin and then stored in temp string.
        cout<<temp<<endl;
    }
}