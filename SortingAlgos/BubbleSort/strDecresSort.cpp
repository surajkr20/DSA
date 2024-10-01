
// Ques. Sort a string in decreasing order of values associated after removal of values smaller than x

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "AZCDXXYZZM";
    string str;

    for(int i=0; i<s.size(); i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    
    for(int i=0; i<str.size(); i++){
        bool flag = true;
        for(int j=0; j<str.size()-i-1; j++){
            if(str[j]<str[j+1]){
                swap(str[j],str[j+1]);
                flag = false;
            }
        }
        if(flag) break;
    }

    for(int i=0; i<str.size(); i++){
        cout<<str[i]<<" ";
    }
}