
#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector input using array method
    // vector<int> v(5);
    // for(int i=0; i<=v.size()-1; i++){
    //     cin>>v[i];
    // }
    // for(int i=0; i<=v.size()-1; i++){
    //     cout<<v[i]<<" "<<endl;
    // }

    // Another method

    vector<int> vt;
    int size = 4;
    for(int i=0; i<=size; i++){
        int x;
        cin>>x;
        vt.push_back(x);
    }

    for(int i=0; i<=4; i++){
        cout<<vt[i]<<" ";
    }

}