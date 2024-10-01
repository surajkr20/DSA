// move all negative numbers to beginning and positive to end with constant extra space.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort(vector<int>& v){
    int i=0;
    int j = v.size()-1;
    while(i<j){
        if(v[j]<0 && v[i]>0){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
        else if(v[i]<0) i++;
        else if(v[j]>0) j--;
    }
}
void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(-2);
    v.push_back(3);
    v.push_back(-4);
    v.push_back(-3);
    v.push_back(2);

    sort(v);
    display(v);
}