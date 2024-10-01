// Basics of 2d vectors

#include<iostream>
#include<vector>
using namespace std;
int main(){
    // Declaration of empty 2D vector
    // vector<vector<int>> vec;

    // initialization of 2D vector for fixed size;
    int rows = 3;
    int cols = 4;
    // vector<vector<int>> vec(rows,vector<int>(cols));

    // initializing a 2D Vector with Specific Values
    vector<vector<int>> vec = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    // initializing a 2D Vector with Diffrent collumn sizes
    vector<vector<int>> vt;
    vt.push_back({1,2,3});
    vt.push_back({4,5});
    vt.push_back({6,7,8,9});
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<vec[i][j]<<" ";
        }
    }
}