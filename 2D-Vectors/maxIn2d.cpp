#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[3][3] = {{1,2,3},{7,8,1},{2,8,11}};
    
    int sum = 0;

    int  max = INT_MIN;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(max<arr[i][j]) max = arr[i][j];
            sum = sum+arr[i][j];
        }
        
    }

    cout<<max<<endl;
    cout<<sum<<endl;
}