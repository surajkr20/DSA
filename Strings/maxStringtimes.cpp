// Ques. Given a string consisting of lowercase English Alphabets. print the character that is occuring most number of times.

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter your string : ";
    getline(cin,s);
    
    // first method

    int max = 0;
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        int count = 0;
        for(int j=0; j<s.length(); j++){
            if(s[j]==s[i]) count++;
        }
        if(max<count) max = count;
    }

    // printing values
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        int count = 0;
        for(int j=0; j<s.length(); j++){
            if(s[j]==s[i]) count++;
        }
        if(max==count) {
            cout<<ch<<" "<<max<<endl;
        }
    }
}