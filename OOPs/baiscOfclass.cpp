#include<iostream>
using namespace std;

class Player {
private: // Make members public
    int score = 90;
    int health = 100;
public:
    void showScore(){   // member function
        cout<<"Total score is : "<<score<<endl;
    }

    void showHealth(){
        cout<<"The palyer health is : "<<health<<endl;
    }
};

class calculator{
public:
    int a,b;
    void add(){
        cout<<a+b<<endl;
    }
    void sub(){
        cout<<a-b<<endl;
    }
    void prod(){
        cout<<a*b<<endl;
    }
};

int main() {
    Player Abhinav;     // player name

    // accesing privte data throgh class member functions
    Abhinav.showScore();
    Abhinav.showHealth();

    // // accessing member functions
    // Abhinav.showScore();
    // Abhinav.showHealth();
    
    // Accessing second class n
    calculator calci;
    calci.a = 10;
    calci.b = 20;
    calci.add();
    calci.sub();
    calci.prod();
}
