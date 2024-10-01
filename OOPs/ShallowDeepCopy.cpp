#include<iostream>
using namespace std;
class Player{
private:
    int health;
public:
    int level;
    Player(){
        cout<<"Non-parameterized constructor is calling"<<endl;
    }
    Player(int health, char level){
        this->health = health;
        this->level = level;
    }
    int getHealth(){
        return health;
    }
};
int main(){
    // Shallow copy
    // Player Suraj(30,'a');
    // Player Abhinav;
    // Abhinav = Suraj;
    // cout<<Abhinav.getHealth()<<endl;
    // cout<<Suraj.getHealth()<<endl;
    // cout<<Abhinav.level<<endl;
    // cout<<Suraj.level<<endl;

    // Deep copy / copy constructor - copy construstor is always calling pass by reference.
    Player Suraj(40, 'A');
    Player Abhinav(Suraj);
    cout<<Abhinav.getHealth()<<endl;
    cout<<Suraj.getHealth()<<endl;
    
}