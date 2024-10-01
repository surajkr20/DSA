// Ques. Given the strings s and t, return true value if it is an anagram of s, and false otherwise.

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s = "Abhinav-suraj";
    string t = "suraj-Abhinav";

    // sorting s and t
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    
    cout<<s<<endl;
    cout<<t<<endl;
    
    if(s==t) cout<<true;
    else cout<<false;
}