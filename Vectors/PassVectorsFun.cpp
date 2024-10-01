
// Passing vectors in functions. (Difff to arrays)
// vectors are passed by vlaue, each time you pass, new vector is created.
// & - ampercant.

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int change(vector<int>& a){ // accessing vector elements
    a[0] = 100;
}

int main(){

    vector<int> v;
    v.push_back(45);
    v.push_back(48);
    v.push_back(90);
    v.push_back(91);
    v.push_back(67);

    for(int i=0; i<=v.size()-1; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    change(v); // send vector in function.

    for(int i=0; i<=v.size()-1; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}