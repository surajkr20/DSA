// converts string to integar using (stoi and stoll) these built in functions.

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "12345";
    // converts str to integar using stoi fun
    int x = stoi(str);
    cout<<x<<endl;
    
    // string to long long(stoll)
    string str2 = "123567893849678";
    long long x2 = stoll(str2);
    cout<<x2<<endl;

    // converts integar to string
    int a = 2345;
    string str1 = to_string(a);
    cout<<str1;

}