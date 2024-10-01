
// Address of main variables and function variables.

#include<iostream>
using namespace std;
int fun(int x,int y){ // Formal paramenters
    cout<<"the address of fun x and y is - "<<&x<<" "<<&y;
}
int main(){
    int x,y;
    cout<<"the address of main x and y is - "<<&x<<" "<<&y<<endl;
    fun(x,y); // Actual parameters
    return 0;
}

// Formal parameters and Actual Parameters.

// function call variables are Actual parameters and in function receivers are formal parameters.