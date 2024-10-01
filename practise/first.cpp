
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int max_val(vector<int>& v){
    int mx = v[0];
    for(int i=0; i<v.size(); i++){
        if(mx < v[i]){
            mx = v[i];
        }
    }
    
    int smx = v[0];
    for(int i=0; i<v.size(); i++){
        if(smx<v[i] && v[i]!=mx){
            smx = v[i];
        }
    }
    return smx;
}

int sorted(vector<int>& v){
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
}

int goodPairs(vector<int>& v){
    int count = 0;
    for(int i=0; i<v.size(); i++){
        for(int j=i+1; j<v.size(); j++){
            if(v[i]==v[j]){
                cout<<"("<<i<<","<<j<<")"<<endl;
                count++;
            }
        }
    }
    return count;
}

int display(vector<int>& v, int k){
    
}

int main(){
    vector<int> v = {1,2,3,4,5,6,7};
    
    int k;
    cout<<"Enter value : ";
    cin>>k;

    display(v, k);
}