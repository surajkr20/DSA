// size!=capacity 

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;

    v.push_back(45);
    v.push_back(56);
    v.push_back(34);
    v.push_back(23);
    v.push_back(78);
    v.push_back(45);
    v.push_back(56);
    v.push_back(34);
    v.push_back(23);
    v.push_back(78);

    for(int i=0; i<=v.size()-1; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"total size : "<<" "<<v.size()<<endl;
    cout<<"total capacity : "<<" "<<v.capacity()<<endl; 
    
    v.pop_back();
    v.pop_back();
    v.pop_back();
    for(int i=0; i<=v.size()-1; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"total size : "<<" "<<v.size()<<endl;
    cout<<"total capacity : "<<" "<<v.capacity()<<endl; 
}

// after using pop-back() method, then vector capicity is not change but size is changed.