
#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int roll;
    float cgpa;
};
// passing objeccts in function.
int print(Student c){
    cout<<c.name<<" "<<c.cgpa<<endl;
}
int change(Student c){
    c.name = "Abhinav-Bhardwaj";
    c.cgpa = 7.9;
}
int main(){
    Student s1;
    Student s2;
    s2.name = "Raushan";
    s2.cgpa = 7.4;
    s1.name = "suraj";
    
    s1.cgpa = 9.2;
    s1.roll = 04;
    
    // print(s1);
    // print(s2);

    print(s1);
    change(s1); //pass by vlaue is not consider
    print(s1);
}