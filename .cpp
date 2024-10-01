// static member fun

// static members are those fun a particular class use to access or modifing the static members (function and variables) of the same class.
/*
    to make the member fun  its prototype should be prefix with the keyword static . the static member fun can default without using and existing object that means we can call using class name. 
    the static member fun can also be called using the class name.

    ex :-
*/

#include<iostream>
using namespace std;

class Simple{
private:
    static int x;
public:
    static void show(int a){
        x = a;
        cout<<"x = "<<x<<endl;
    }
};

// int Simple::x = 0;

// void main(){
//     Simple s;
//     Simple::show(s);
//     s.show(10);
// }

/*
    constant data member :- the data member whose value can not change through out the execution of program is known as constant data member.
    syntax :- 

    const int variable_name = value;

    void main(){
    const int x = 5;
    ++x; // error
    cout<<"x = "<<x<<endl;
}
*/

/*
    friend function :- we know that known member fun of class can not have access to the private data member of that class but some times gives such need, where in the private data members of a class should be accessed by known member functions.
    c++ allows the known member fun to be make as friend of that class. now the known member fun which is declared that as friend of a particular class can have access to the private data members of that class.
    
*/

