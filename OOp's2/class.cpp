#include<iostream>
#include<cstring>
using namespace std;

class Hero{
private:
    // properties of class
    int health;
public:
    char *name;
    char level;
    void setHealth(int h){
        health = h;
    }
    void setLevel(char l){
        level = l;
    }
    void setName(char name[]){
        strcpy(this->name,name);
    }
    int getHealth(){
        return health;
    }
    int getLevel(){
        return level;
    }
    // default and without parameter constructor
    Hero(){
        cout<<"constructor is calling....."<<endl;
        name = new char[100];
    }
    void print(){
        cout<<this->name<<endl;
        cout<<this->health<<endl;
        cout<<this->level<<endl;
    }
    // parameterised constructor
    // this keyword is store address of object
    Hero(int health, char level){
        cout<<"Address of this keyword"<<" "<<this<<endl;
        this-> level = level;
       this-> health = health;
    }
    // copy constructor
    Hero(Hero& temp){ // pass by reference
        this->health = temp.health;
        this->level = temp.level;
    }
};

int main(){ 

    Hero hero1;
    char name[] = "Suraj";
    hero1.setName(name);
    hero1.setHealth(50);
    hero1.setLevel('D');
    hero1.print();

    // using default copy constructor
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'A';
    hero1.print();
    hero2.print();

    // Hero Raushan(70, 'c');
    
    // // copy constructor is calling...
    // Hero Rahul(Raushan);
    // Rahul.print();              //output values are same
    // Raushan.print();    //output values are sam

    /* default and parameterized constructor
    // when we create object, then constructor calling by default.
    // with the help of constructor we can set all class propeties values in object decalaration time.

    Hero Ramesh(50, 'A');
    cout<<"Address of ramesh object"<<" "<<&Ramesh<<endl;
    
    cout<<Ramesh.getHealth()<<endl;

    Ramesh.print();

    Hero Temp(60, 'B');
    Temp.print();
    cout<<Temp.getHealth()<<endl;
    */

    // agr data public h to only constructor ki help se humlog sb kuchh access kr skte h means, no need getter and setter fun.

    /*
    // statically
    Hero Suraj;
    Suraj.setHealth(40);
    cout<<Suraj.getHealth()<<endl;

    // dynamically
    Hero *Abhinav = new Hero;
    Abhinav->setHealth(55);
    cout<<(*Abhinav).getHealth()<<endl;
    Abhinav->setLevel('A');
    cout<<Abhinav->level<<endl; // level is public
    */
}