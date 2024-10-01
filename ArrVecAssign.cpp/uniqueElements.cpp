// Ques.6 Find the unique number in a given Array where all the elements are being repeated twice with one value being unique

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of Arr : ";
    cin>>size;

    vector<int> v;
    for(int i=0; i<size; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }

    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(v[i]==v[j]) continue;
            else cout<<v[i]<<endl;
        }
    }
    return 0;
}