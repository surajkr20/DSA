#include<iostream>
using namespace std;


/*
    >> Now we can discuss types of friend function...
    
    friend known fun - when an outside funciton which does not belongs to any of the other class. 
    in other words which not a member of any other class, as made as friend of a particular class it known as friend known member fun.

    syntax - 
    class className{
        public:
            friend returntype function_name (class_name);
    }

    returnType function_name (class_name and object_name){
    
    }

*/

class Abc{
    int x;
public:
    friend void show(Abc){

    };
    void show(Abc & a){
        a.x = 5;
        cout<<"x "<<x<<endl;
    }

};

void main(){
    Abc f;
    show(f);
}

/*
    if a member fun of a class A to once to access the private data members of the class (B) then the  member fun of class B as to decalare as the friend of the class B within the class B declaration this type of friend fun are known as friend member fun.

*/

class B; // formal declaration

class A{
public:
    void show(B &, int);
};

class B{
private:
    int y;
public:
    friend A::show(B &, int);
};
