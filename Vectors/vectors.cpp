// using vector before add #include<vector>
// note - you need not mention the size
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; // initilization of vectors

    v.push_back(14);
    v.push_back(65);    // these are elements of vectors
    v.push_back(34);
    v.push_back(51);
    
    // if you want to update and access

    v[0] = 56; // value update
    v[3] = 58;

    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;

    return 0;
}