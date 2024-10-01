#include<iostream>
using namespace std;

class A{
private:
    int x, y;
public:
    // Function to get data
    void getData(){
        cout << "Enter the values: " << endl;
        cin >> x >> y;
    }

    // Function to display data
    void show(){
        cout << "x: " << x << " y: " << y << endl;
    }

    // Declare sum function as a friend function
    A sum(A t);
};

// Define sum function
A A::sum(A t){
    A p;
    p.x = x + t.x;
    p.y = y + t.y;
    return p;
}

int main(){
    A obj1, obj2, obj3;
    
    obj1.getData();
    obj2.getData();
    
    // Call sum function
    obj3 = obj1.sum(obj2);
    
    // Display result
    obj3.show();
    
    return 0;
}
