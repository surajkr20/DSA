// maze path solution
// directions used only (right and down)

#include<iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightways = maze(sr,sc+1,er,ec);
    int downways = maze(sr+1,sc,er,ec);
    return rightways + downways;
}
void printPath(int sr, int sc, int er, int ec, string s){
    // for printing destination ways
    if(sr>er || sc>ec) return;
    if(sr==er && sc>ec){ // destination reached
        cout<<s<<endl;
        return;
    }
    printPath(sr,sc+1,er,ec,s+'R'); // right
    printPath(sr+1,sc,er,ec,s+'D'); // down
}
int maze2(int row, int col){
    // using only two parameters
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    int rightways = maze2(row,col-1);
    int downways = maze2(row-1,col);
    int totalways = rightways+downways;
    return totalways;
}
int main(){
    // cout<<maze(1,1,5,5);
    // printPath(1,1,3,3,"");
    cout<<maze2(3,3);
}