
#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int roll;
    float cgpa;
    // default constructor
    Student(){

    }
    
    // parameterized constructor
    Student(string n, float c){
        name = n;
        cgpa = c;
    }

    // multiple constructor
    Student(string n, int r, float c){
        name = n;
        roll = r;
        cgpa = c;
    }
};
// passing objeccts in function.
int print(Student c){
    cout<<c.name<<" "<<c.cgpa<<" "<<c.roll<<endl;
}
int main(){

    // working of default constructor
    // Student s;
    // s.name = "rahul";
    // s.roll = 40;
    // s.cgpa = 5.6;
    // print(s);
    
    // // parameterized
    // Student s1("suraj",8.7);
    // cout<<s1.name<<" "<<s1.cgpa<<endl;
    
    // multiple constructor
    Student s2("Abhinav",4,9.8);
    print(s2);

    // copy consturctor
    Student s3 = s; // deep copy
    s3.name = "Abhimanyu singh";
    print(s3); 

    Student s4(s2);
    s4.name = "Aditi";
    print(s4);
    
}