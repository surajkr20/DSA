
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int display(vector<int>& d){
    for(int i=0; i<d.size(); i++){
        cout<<d[i]<<" ";
    }
}

int reverse(vector<int>& a, int m, int n){
    int i,j;
    i = m;
    j = n;
    while(i<=j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}
 
int main(){
    vector<int> v;
    v.push_back(34);
    v.push_back(87);
    v.push_back(47);
    v.push_back(42);
    v.push_back(41);
    
    int m,n;
    cout<<"Enter indexes for print part of array : ";
    cin>>m>>n;

    reverse(v,m,n);
    display(v);
}