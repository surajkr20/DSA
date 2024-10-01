// Ques.3 Check if the given array is sorted or not.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isSorted(const vector<int>& v){
    for(size_t i=0; i<v.size()-1; i++){
        if(v[i]>v[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;

    vector<int> v;
    for(int i=0; i<size; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    
    if(isSorted(v)){
        cout<<"the arrays is sorted"<<endl;
    }
    else{
        cout<<"the array is not sorted"<<endl;
    }
}
