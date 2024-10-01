
#include<iostream>
using namespace std;

// class A{
//     int x,y;
// public:
//     int sum(int, int=4);
// };

// int A::sum(int a, int b){
//     return (a+b);
// }

// int main(){
//     A a;
//     int p,q;
//     cout<<"Enter the value of p and q : ";
//     cin>>p>>q;
    
//     cout<<a.sum(p,q)<<endl;
//     cout<<a.sum(p)<<endl;
// }

/*

 constant member fun are those functions which denied permission to change to values of the data member there class
 to make the member fun constant the qualifier const is appended to the fun prototype and also to the fun definition
 the syntax as follows :-
 i. fun declaration or fun prototype with in a class.
 ii. definition of the fun with in the class.
 iii. defining the fun outside the class .

/*
    returntype fun_name() const;{
        statements.....
    }
*/

class B{
    int x;
public:
    void gedata(int a){
        x = a;
    }
    int show() const{
        // ++x;     // error, this is not valid
        // return x;

    }
};

int B::show() const{
    // ++x; //error
    return x;
}

void main(){
    B obj;
    
}