// Q. Find the double in the array whose sum is equal to the given value x.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter your target : ";
    cin>>x;

    vector<int> v;

    int n;
    cout<<"Enter vector size : ";
    cin>>n;

    // inputs in vector
    cout<<"Enter vector elements : ";

    for(int i=0; i<=n-1; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }

    // printing dublets values

    for(int i=0; i<v.size()-1; i++){
        for(int j=i+1; j<v.size(); j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}