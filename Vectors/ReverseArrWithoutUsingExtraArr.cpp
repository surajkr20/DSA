// Reverse Array using without extra array/vector.

#include<iostream>
#include<vector>
using namespace std;
int display(vector<int>& d){
    for(int i=0; i<d.size(); i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v1;
    
    int n;
    n = v1.size();

    cout<<"Enter size of vector : ";
    cin>>n;
    
    cout<<"Enter element of vector : ";
    for(int i=0; i<=n-1; i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }

    display(v1);

    // reverse using while loop
    // int i =0;
    // int j= v1.size()-1;
    // while(i<=j){
    //     // swap v[i] and v[j]
    //     int temp = v1[i];
    //     v1[i] = v1[j];
    //     v1[j] = temp;
    //     i++;
    //     j--;
    // }

    // reverse using for loop
    int j;
    for(int i=0; j=v1.size()-1; i<=j, i++, j--){
        int temp = v1[i];
        v1[i] = v1[j];
        v1[j] = temp;
    }
    display(v1);
}