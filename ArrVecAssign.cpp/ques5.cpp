// Ques5. given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10;

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of Arrays : ";
    cin>>size;

    vector<int> v;
    for(int i=0; i<size; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }

    for(int i=0; i<size; i++){
        if(v[i]%2==0){
            v[i] = v[i] + 10;
        }
        else{
            v[i] = v[i]*2;
        }
    }

    for(int i=0; i<size; i++){
        cout<<v[i]<<" ";
    }

    return 0;
}