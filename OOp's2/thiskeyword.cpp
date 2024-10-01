
#include<iostream>
using namespace std;

class Abc {
    int x, y;
public:
    void getdata();  // Declaration only
    void show();     // Declaration only
};

// Definition outside the class
void Abc::getdata() {
    cout << "Enter value of x and y : ";
    cin >> this->x >> this->y;
}

void Abc::show() {
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "The address of this object = " << (unsigned)this << endl;
}

int main() {
    Abc a;
    a.getdata();
    a.show();
    return 0;
}
