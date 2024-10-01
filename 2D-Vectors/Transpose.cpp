#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& martix){
    int m = martix.size();
    int n = martix[0].size();
    vector<vector<int>> t(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            t[i][j] = martix[j][i];
        }
    }
    return t; 
}
int main(){
    // // Define a 2D array
    // int arr[3][3] = {{1, 2, 3}, {7, 8, 1}, {2, 8, 11}};

    // // Convert 2D array to 2D vector
    // vector<vector<int>> matrix(3, vector<int>(3));
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         matrix[i][j] = arr[i][j];
    //     }
    // } 

    vector<vector<int>> vt = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    vector<vector<int>> transposedMatrix = transpose(vt);

    for (int i = 0; i < transposedMatrix.size(); i++) {
        for (int j = 0; j < transposedMatrix[i].size(); j++) {
            cout << transposedMatrix[i][j] << " ";
        }
        cout << endl;
    }
}