#include<iostream>
using namespace std;
class Student{
public:
    int rollNumber;
    int age;
    Student(int r, int a): rollNumber(r), age(a){
        // it's shorter of parameterized constructor.
    }
};
int main(){
    Student Suraj(04, 20);
    cout<<Suraj.age<<endl;
    cout<<Suraj.rollNumber<<endl;

    Student Abhinav(1, 20);
    cout<<Abhinav.rollNumber<<endl;
}