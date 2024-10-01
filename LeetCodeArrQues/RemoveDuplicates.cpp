#include<iostream>
#include<vector>
using namespace std;
void RemoveDuplicates(vector<int>& v){
    vector<int> res;
    bool flag = false;
    int n = v.size();
    for(int i=0; i<n-1; i++){
        if(v[i]==v[i+1]){
            continue;
        }
        if(v[i]==v[i+1] && v[i]==v[i-1]){
            continue;
        }
    }
}
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(8);
    v.push_back(8);
    v.push_back(3);
    v.push_back(5);
    v.push_back(4);

    RemoveDuplicates(v);
}