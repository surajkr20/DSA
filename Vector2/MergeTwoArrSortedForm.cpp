#include<iostream>
#include<vector>
using namespace std;
vector<int> mergeSort(vector<int>& v1, vector<int>& v2){
    int n = v1.size();
    int m = v2.size();
    vector<int> res(m+n);
    int i=0; // v1
    int j=0; // v2
    int k=0; // res

    while(i<=n && j<=m){
        if(v1[i]<v2[j]){
            res[k] = v1[i];
            i++;
            // k++; 
        }
        else{
            res[k] = v2[j];
            j++;
            // k++; redundency
        }
        k++;
    }
    // for remaining elements
    if(i==n){   // v1 ke saare elements utha chucka hoon
        while(j<=m-1){
            res[k] = v2[j];
            k++;
            j++;
        }
    }
    if(j==m){
        while(i<=n-1){
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
    v1.push_back(4);
    v1.push_back(3);
    v1.push_back(2);

    vector<int> v2;
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(0);
    v1.push_back(10);
    v1.push_back(12);
    v1.push_back(11);

    vector<int> res = mergeSort(v1,v2);

    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
}