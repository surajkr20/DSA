// Ques.4 Find the difference between the sum of elements at even indices to the sum of elements at odd indices.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of Arr : ";
    cin>>size;

    int evenSum = 0;
    int oddSum = 0;

    vector<int> v;

    cout<<"Enter arrays elements : "<<endl;
    for(int i=0; i<size; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }

    for(int i=0; i<size; i++){
        if(v[i]%2==0){
            evenSum = evenSum+v[i];
        }
        else{
            oddSum = oddSum+v[i];
        }
    }

    int diff = evenSum - oddSum;

    cout<<diff<<endl;
}