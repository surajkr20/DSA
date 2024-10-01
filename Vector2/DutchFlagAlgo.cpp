
// sort the array of 0's, 1's and 2's or sort colors or Dutch flag algorithms.

// one pass solution(Dutch flag algorithm)

#include<iostream>
#include<vector>
using namespace std;

void sort01(vector<int>& v){
    int n = v.size();
    int lo = 0;
    int mid = 0;
    int hi = n-1;

    while(mid<=hi){
        if(v[mid]==2){
            swap(v[mid],v[hi]);
            hi--;
        }
        if(v[mid]==0){
            swap(v[mid],v[lo]);
            lo++;
            mid++;
        }
        if(v[mid]==1){
            mid++;
        }
    }
}
void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);

    // using one pass solution (Dutch flag algorithm)

    sort01(v);

    display(v);

}