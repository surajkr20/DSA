// Ques. input a string of size n and update all the even positions in the string to character 'a'. Consider 0-based indexing

#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    cout<<"enter your String : ";
    getline(cin,name);
    
    for(int i=0; i<name.size(); i++){
        if(i%2==0) name[i] = 'o';
    }

    cout<<name;
}