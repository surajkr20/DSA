#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter row and collumns of 1'st matrix : ";
    cin>>m>>n;

    int p,q;
    cout<<"Enter row and collumns of 2'nd matrix : ";
    cin>>p>>q;

    if(n==p){
        int a[m][n];
        cout<<"Enter elements of 1st matrix : "<<endl;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
            }
        }
        
        int b[p][q];
        cout<<"Enter elemetns of 2nd matrix : "<<endl;
        for(int i=0; i<p; i++){
            for(int j=0; j<q; j++){
                cin>>b[i][j];
            }
        }

        // resultant matrix
        int res[m][q];
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                // multipy
                res[i][j] = 0;
                // res[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][1]
                for(int k=0; k<p; k++){
                    res[i][j] += a[i][k]*b[k][j];
                }
            }
        }

        // print
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Sorry,The matrices cannot be multiplied";
    }
}