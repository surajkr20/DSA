// push-back() = insert element in vectors
// pop-back() = delete elment in vectors
// size() = size of vector
// capacity() = total capacity of vectors

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(45);
    cout<<v.size()<<endl;   // size of vector - 1
    cout<<v.capacity()<<endl;
    v.push_back(34);
    cout<<v.size()<<endl;   // size of vector - 2
    cout<<v.capacity()<<endl;
    v.push_back(34);
    cout<<v.size()<<endl;   // size of vector - 3
    cout<<v.capacity()<<endl;
    v.push_back(34);
    cout<<v.size()<<endl;   // size of vector - 4
    cout<<v.capacity()<<endl;
}