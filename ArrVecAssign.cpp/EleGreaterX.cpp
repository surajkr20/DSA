// Ques.1 Count the number of elements strictly greater than x.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of Arr : ";
    cin>>size;

    vector<int> v;
    for(int i=0; i<size; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }

    int x;
    cout<<"Enter the value of x : ";
    cin>>x;

    int count = 0;

    for(int i=0; i<size; i++){
        if(v[i]>x){
            count++;
            cout<<v[i]<<endl;
        }
    }

    // cout<<"are"<<" "<<count<<" "<<"values greater than x"<<endl;
}