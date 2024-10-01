/*
    Nested Class :-
    A class embaded within another class is called nested class. the class which is nesting a class is known as imclosing class or outer class and the nested class is known as inner class. 

    nested class can be defined in the valued, public, protected section of the including class. the name of the nested class or inner class is inside the local scope of, adds imclosing of class.

    note - nested classes are varry rearly used.

syntax :-
    class enclosing_class.name{
    private:
        content...
    public:
        class nested_class.name{
            private:
                content..
            public:
                content...
        }
    }

*/

#include<iostream>
using namespace std;

class Outer{
private:
    int a,b;
public:
    void getdata();
    void showdata();

    class Inner{
        private:
            int c,d;
        public:
            void setdata(){
                c = 10;
                d = 20;
            }
            void display(){
                cout<<"c = "<<c<<"d = "<<d<<endl;
        }
    }
};

void Outer::getdata(){
    a = 50;
    b = 60;
}

void Outer::showdata(){
    cout<<"a = "<<a<<"b = "<<b<<endl;
}

int main(){
    Outer P;
    P.getdata();
    // p.showdata();

    Outer::Inner i;
    i.setdata();
    i.display();
}