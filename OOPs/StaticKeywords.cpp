// Static members - once a static variable is declared its memory can't be changed.

#include<iostream>
using namespace std;

int print(){
    // int b = 10;
    static int b = 10;
    cout<<b<<endl;
    b++;
}

class MyClass {
public:
    static int sharedValue; // Declaration of static member variable
    MyClass() {
        sharedValue++;
    }
};

int MyClass::sharedValue = 0; // Definition and initialization

int main() {
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    cout << "Shared Value: " << MyClass::sharedValue << endl; // Shared Value: 3

    // calling print function
    print();
    print();
    print();

    return 0;
}
