
/*

    constructor :- 
    to constructors when the object for that class arguments for that class is created. the constructors which can take arguments during object creation are called parameterized constructor.

*/

#include<iostream>
using namespace std;
class Data{
private:
    int x,y;
public:
    Data(int, int);
    void show(){
        cout<<"x = "<<x<<endl<<"y = "<<y;
    }
};
Data::Data(int a,int b){
    x = a;
    y = b;
}
int main(){
    Data t(20,30);
    t.show();
}