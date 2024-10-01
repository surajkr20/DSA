// Lower bound (means suppose target is not exist in given arr, so that situation find the target less value).

// Ques. Given a sorted integer array and an integer 'x', find the lower bound of x.

#include<iostream>
#include<vector>
using namespace std;
int LowerBound(vector<int>& v, int x){
    int lo = 0;
    int hi = v.size()-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(v[mid]==x) {
            flag = true;
            // for lower bound(v[mid-1] print krna h) and for upper bound (v[mid+1] print krna h)
            cout<<v[mid-1]<<endl;
            break;
        }
        else if(v[mid]<x) lo = mid+1;
        else hi = mid - 1;   // v[mid]>x
    }
    // when x is not exist in given arr
    if(flag==false){
        // for lower bound(print v[hi] and upper bound v[lo])
        cout<<v[lo]<<endl;
    }
}
int search(vector<int>& v, int n){
    int size = v.size();

    for(int i=0; i<size; i++){
        if(v[i]>n){
            cout<<v[i-1];
            break;
        }
    }
}
int main(){
    int n = 12;

    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(8);
    v.push_back(12);
    v.push_back(15);
    v.push_back(20);
    v.push_back(25);

    // using linear search
    // search(v,n);

    // binary search
    LowerBound(v,n);

}
