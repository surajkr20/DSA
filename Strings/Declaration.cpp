// Strings Declaration and initialization.

#include<iostream>
using namespace std;
int main(){
    // declaration
    // string st = "suraj kumar";

    // // printing all string characters
    // for(int i=0; i<st.size(); i++){
    //     cout<<st[i]<<" ";
    // }

    // input string
    string name;
    // using cin only if the given string has no spaces
    // cin>>name;
    getline(cin,name);
    for(int i=0; i<name.size(); i++){
        cout<<name[i]<<" ";
    }

    // printing by index
    cout<<name[3];
    cout<<name[2];
    // string ExName = "Abhinav";
    // cout<<ExName;
}