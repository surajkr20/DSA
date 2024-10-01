// Ques. Given a sorted array of n elements and a target 'x'. Find the first occurence of 'x' in the array. if "x" does not exist return-1.

#include<iostream>
#include<vector>
using namespace std;
int firstOccurrence(vector<int>& v){
    int x = 22;

    int lo = 0;
    int hi = v.size()-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(v[mid]==x){
            if(v[mid-1]!=x){
                flag = true;
                cout<<mid<<endl;
                break;
            }
            else{   // v[mid-1] = x
                hi = mid -1;
            }
        }
        else if(v[mid]<x) lo = mid+1;
        else hi = mid-1;
    }

    if(flag==false) cout<<-1;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(5);
    v.push_back(10);
    v.push_back(10);
    v.push_back(20);
    v.push_back(20);
    v.push_back(20);
    v.push_back(22);
    v.push_back(30);

    firstOccurrence(v);
}