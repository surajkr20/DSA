// inheritance example and practise

#include<iostream>
using namespace std;

// types of inheritance

// 1. signle inheritance - a class inherits from one other class
// class Animal{
//     public:
//     void eat(){
//         cout<<"animals are eating........."<<endl;
//     }
// };

// class Dog: public Animal{ // inherit in public way
//     public:
//     void bark(){
//         cout<<"Dogs are barking ........"<<endl;
//     }
// };

// int main(){
//     Dog myDog;
//     myDog.bark();
//     myDog.eat();
// }

// 2. multiple inheritance.

// class Car{
//     public:
//     void drive(){
//         cout<<"driving.."<<endl;
//     }
// };
// class Airplane{
//     public:
//     void fly(){
//         cout<<"flying.."<<endl;
//     }
// };

// class flyingCar: public Car, public Airplane{

// };

// int main(){
//     flyingCar Motion;
//     Motion.fly();
//     Motion.drive();
// }

// multilevel inheritance

class Animal{
    public:
    void eat(){
        cout<<"eating.."<<endl;
    }
};

class Dog: public Animal{
    public:
    void bark(){
        cout<<"barking..."<<endl;
    }
};

class Puppy: public Dog{
    public:
    void cute(){
        cout<<"puppy is so cute."<<endl;
    }
};

int main(){
    Dog myDog;
    myDog.bark();
    myDog.eat();
}



// class Human{
//     int weight;
// public:
//     int height;
//     int age;
// public:
//     void setAge(int a){
//         age = a;
//     }
//     int getAge(){
//         return this->age;
//     }
//     void setWeight(int w){
//         this->weight = w;
//     }
//     int getWeight(){
//         return this->weight;
//     }
// };

// class Male: public Human{
//     public:
//     string color;
//     void sleep(){
//         cout<<"male sleeping"<<endl;
//     }
// };

// int main(){
//     Male suraj;
//     suraj.setWeight(55);
//     cout<<suraj.getWeight()<<endl;
// }