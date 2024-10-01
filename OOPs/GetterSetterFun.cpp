#include<iostream>
using namespace std;

class Player {
private: // Make members public
    int score;
    int health;
public:
    // Setter functions
    void setScore(int s){
        score = s;
    }
    void setHealth(int h){
        health = h;
    }
    // Getter function
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
};

int main(){
    Player Abhinav; // object

    // new keyword is allocated address of object in heap memory for player. store object address

    Player *suraj = new Player; // pointer to object - run time, dynamic allocation.

    // first method for for pointer to object
    // Player surajObj = *suraj;
    // surajObj.setScore(50);
    // cout<<surajObj.getScore()<<endl;

    // second method
    suraj->setScore(100);
    cout<<suraj->getScore()<<endl;

    // set player variable values
    Abhinav.setHealth(100);
    Abhinav.setScore(70);

    // getting values using getter fun.
    cout<<Abhinav.getHealth()<<endl;
    cout<<Abhinav.getScore()<<endl;
}