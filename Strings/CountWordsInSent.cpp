// Given a sentence 'str', return the word that is occuring most numbers of times in that sentence.

#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;

int main(){
    string sent = "i am a student of computer science. and now am learning data structure and algorithm. ";

    stringstream ss(sent);
    string temp;

    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    int maxcount = 0;
    int count = 0;
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++){
        if(v[i]==v[i-1]) count++;
        else count = 1;
        maxcount = max(maxcount,count);
    }

    count = 1;
    for(int i=1; i<v.size(); i++){
        if(v[i]==v[i-1]) count++;
        else count = 1;
        if(count==maxcount){
            cout<<v[i]<<" "<<maxcount<<endl;
        }
    }
}