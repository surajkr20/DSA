// Ques. print subsets of a string with unique characters. (leetcode 78).

#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printSubset(string ans, string original){
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    char ch = original[0];
    printSubset(ans+ch,original.substr(1));
    printSubset(ans,original.substr(1));
}

void storeSubset(string ans, string original, vector<string>& v){
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    storeSubset(ans,original.substr(1),v);
    storeSubset(ans+ch,original.substr(1),v);
}

int main(){
    string name = "abc";
    vector<string> v;
    
    // method-1
    printSubset("",name);

    // method-2
    storeSubset("",name,v);
    for(string ele : v){
        cout<<ele<<endl;
    }
    
}