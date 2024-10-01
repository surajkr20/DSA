
// Destructor - destroy object creation
#include<iostream>
using namespace std;
class Player{
private:
    int health;
public:
    int level;
    // int setHealth(int health){
    //     this->health = health;
    // }
    // void setLevel(char level){
    //     this->level = level;
    // }
    // int getHealth(){
    //     return health;
    // }
    Player(int health, char level){
        this->health = health;
        this->level = level;
    }
    int getHealth(){
        return health;
    }
    ~Player(){ // Destructor - when object is goes out of scope, then constructor is calling.
        Player Abhinav(30, 'c');
        cout<<Abhinav.level<<endl;
        cout<<"Destructor is calling"<<endl;
    }
};
int main(){
    // Static Allocation
    // Player Abhinav(40, 'a');
    // cout<<Abhinav.level<<endl;
    // cout<<Abhinav.getHealth()<<endl;

    // Dynamic Allocation
    Player *suraj = new Player(56,'c');
    cout<<suraj->getHealth()<<endl;
    cout<<suraj->level<<endl;
    delete suraj;
}