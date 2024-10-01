#include<iostream>
#include<vector>
#include <algorithm> // Include this header for sort function
using namespace std;
int main(){
    vector<int> v;

    // at() - use for vector element update and print both .

    v.push_back(45);
    v.push_back(34);
    v.push_back(67);

    cout<<v[1]<<endl; 

    v.at(1) = 98; // value update using at()
    cout<<v[1]<<endl;

    cout<<v.at(2)<<endl; //using at() - 67
    cout<<v[2]<<endl; // using at() -67

    // sort
    cout<<"before sorting value : ";
    for(int i=0; i<=v.size()-1; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    sort(v.begin(),v.end());
    cout<<"After sorting value is : ";
    for(int i=0; i<=v.size()-1; i++){
        cout<<v[i]<<" ";
    } 

}