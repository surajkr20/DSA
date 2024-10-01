// Built-Functions in c++

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    // stringName.size() or stringName.length()
    string str = "Abhinav";
    // cout<<str.length()<<endl;

    // push_back - push for only single character
    // str.push_back('B');
    // str.push_back('h');
    // cout<<str<<endl;

    // pop_back - delete for only single character
    // str.pop_back();
    // str.pop_back();
    // cout<<str<<endl;

    // + operator = use for adding or modify more strings;
    // string str1 = "Bhardwaj";
    // cout<<str+"Suraj"<<endl;
    // string sum = str+str1+"suraj";
    // cout<<sum;

    // reverse = reverse string according to you.(use header file-#include<algorithm>)
    // reverse(str.begin(),str.end());
    // cout<<str<<endl;
    // reverse(str.begin()+2,str.end()-1);
    // cout<<str<<endl;
    // reverse(str.begin()+2,str.end());
    // cout<<str<<endl;

    // substr(idx)
    // cout<<str.substr(3)<<endl;
    // cout<<str.substr(0,3)<<endl;

    // to_string() - its convert any integer no into string.
    int x = 12345;
    string s = to_string(x);
    cout<<s;
}