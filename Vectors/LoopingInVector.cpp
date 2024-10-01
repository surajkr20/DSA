// Looping in vector.
// Ques. Find the last accurrence of x in the array.

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(45);
    v.push_back(44);
    v.push_back(40);
    v.push_back(88);
    v.push_back(67);

    int x = 88;
    int idx = -1;

    for(int i=0; i<=v.size()-1; i++){
        if(v[i]==x){
            idx = i;
            break;
        }
    }
    cout<<idx<<endl;
}