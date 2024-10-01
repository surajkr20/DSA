#include<iostream>
using namespace std;

class Gun{
private:
    int ammo;
    int damage;
    int scope;
public:
    // Setter methods
    void setAmmo(int ammo){
        this->ammo = ammo;
    }
    void setDamage(int damage){
        this->damage = damage;
    }
    void setScope(int scope){
        this->scope = scope;
    }

    // getter methods/fun
    int getAmmo(){
        return ammo;
    }
    int getDamage(){
        return damage;
    }
    int getScope(){
        return scope;
    }
};

class Player{
private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun; // creating new data type using class Gun
public:
    // we are creating setter fun
    void setHelth(int health){
        this->health = health;
    }
    void setAge(int age){
        this->age = age;
    }
    void setScore(int score){
        this->score = score;
    }
    void setAlive(bool alive){
        this->alive = alive;
    }
    void setGun(Gun g){ // "Gun g" - because my gun variable type is Gun class
        this->gun = gun; // 
    }

    // it's all are getter functions
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    int getAlive(){
        return alive;
    }
    Gun getGun(){ // retun type is Gun because my creating gun variable is Gun class
        return gun;
    }
};

// accessing classes in function.
int addScore(Player a, Player b){
    return a.getScore()+b.getScore();
}

// return class function
Player getMaxScore(Player a, Player b){
    if(a.getScore() > b.getScore()) return a;
    else return b;
}

int main(){

    Player Abhinav; // object creation, statically
    Player Suraj;
    
    Gun akm;
    akm.setAmmo(03);
    akm.setScope(10);
    akm.setDamage(20);

    Suraj.setGun(akm);
    cout<<Suraj.getGun();

    Suraj.setScore(70);
    Suraj.getScore();

    Abhinav.setScore(50);
    cout<<Abhinav.getScore()<<endl;

    // passing class object to functions
    cout<<addScore(Abhinav, Suraj)<<endl;

    // again passing class in fun for returning
    getMaxScore(Suraj, Abhinav);
    
    // for printing value store callling fun in new player
    Player Raushan = getMaxScore(Suraj, Abhinav);
    cout<<Raushan.getScore()<<endl;
    // giving gun raushan player
    

}