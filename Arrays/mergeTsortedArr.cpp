#include<iostream>
#include<vector>
using namespace std;
vector<int> mergeArr(vector<int>& v1, vector<int>& v2){
    int m = v1.size();
    int n = v2.size();
    vector<int> res(m+n);

    int i =0;
    int j = 0;
    int k = 0;

    while(i<=m-1 && j<=n-1){
        if(v1[i]<=v2[j]){
            res[k] = v1[i];
            i++;
            k++;
        }
        else{
            res[k] = v2[j];
            j++;
            k++;
        }
    }
    // remaining elements 
        if(i==m){
            while(j<=n-1){
                res[k] = v2[j];
                k++;
                j++;
            }
        }
        if(j==n){
            while(i<=m-1){
                res[k] = v1[i];
                k++;
                i++;
            }
        }
        return res;
}
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);

    vector<int> v2;
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(8);
    v2.push_back(9);
    v2.push_back(10);

    vector<int> val = mergeArr(v1,v2);
    
    for(int i=0; i<val.size(); i++){
        cout<<val[i]<<" ";
    }
}