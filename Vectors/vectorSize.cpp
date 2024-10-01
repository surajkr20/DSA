#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector declaration with initilization.
    vector<int> v(7); // each element 0
    cout<<v[4]<<endl; 
    cout<<v[3]<<endl; 
    cout<<v[2]<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    // initial size 5, each element 59
    vector<int> vt(5,59); // each element 59
    cout<<vt[4]<<endl;
    cout<<vt[3]<<endl;
    cout<<vt[2]<<endl;
    cout<<vt.size()<<endl;
    cout<<vt.capacity()<<endl;
}