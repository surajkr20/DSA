// skip a character.
// Ques. Remove all occurrences of 'a' from a string

#include <iostream>
#include <string>
using namespace std;

int skip(string name){
    string s = "";
    for (int i = 0; i < name.length(); i++){
        if(name[i]!='a') s.push_back(name[i]);
    }
    cout<<s<<endl;
}
void recursiveSkip(string ans, string original){
    if(original.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = original[0];
    if(ch=='a') recursiveSkip(ans, original.substr(1));
    else recursiveSkip(ans+ch, original.substr(1));
}
void recursiveSkip(string ans, string original,int idx){
    // optimized code
    if(idx==original.length()){
        cout<<ans<<endl;
        return;
    }
    char ch = original[idx];
    if(ch=='a') recursiveSkip(ans, original, idx+1);
    else recursiveSkip(ans+ch, original, idx+1);
}
int main(){
    string name = "abhinav bhardwaj";

    // method-1
    skip(name);
    
    // method-2
    recursiveSkip("",name);

    // method-3
    recursiveSkip("",name,0);
}