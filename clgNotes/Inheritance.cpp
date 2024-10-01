
/*
    inheritance :- is one of the most important and powerful featrues of object oriented programming. the main advantage using inheritance is code reuseblity, which by achieved by creating new classes from existing classes.
    inheritance is the feature or process in which new classes are created form the existing classes, the new classes created is called derived class and existing class is known as parent class. the derived class now is set to be inheritance from the base class, 

    derived class inherit the base class it means, all the property is the base class. without changing the property is base class and we may add few features to its own. these new features in the derived class will not affect the base class.
*/

/*
syntax of derived class
class derived_class_name : Access_specifier
*/

#include<iostream>
using namespace std;
class A{
    protected:
        int x;

};

class B: public A{
private:
    int y;
}

int main(){

}