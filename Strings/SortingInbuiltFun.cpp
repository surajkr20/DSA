// Sorting string using inbuilt function
// use sort in-built function
// sorting dependent on ASCII values

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter your string : ";
    getline(cin,s);

    // sorting dependent on ASCII values
    sort(s.begin(),s.end());
    cout<<s<<endl;

    char ch = ' ';
    cout<<(int)ch;
}