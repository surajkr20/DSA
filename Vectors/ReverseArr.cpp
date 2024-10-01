
#include<iostream>
#include<vector>
using namespace std;
int display(vector<int>& a,int n){
    for(int i=0; i<=n-1; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter Size of Arr : ";
    cin>>n;
    // int arr[n];
    vector<int> v1;
    
    cout<<"Enter elements of Arr : ";
    for(int i=0; i<=n-1; i++){
        cin>>v1[i];
    }
    display(v1,n);

    // int arr1[n];
    n = v1.size();
    vector<int> v2(v1.size());
    // reverse array 

    for(int i=0; i<v1.size(); i++){
        int j=v1.size()-1-i;
        v2[i]=v1[j];
    }
    display(v2,n);
}