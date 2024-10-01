#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int run;
    float avg;
    Cricketer(string name, int run, float avg){
        this->name = name;
        this->run = run;
        this->avg = avg;
    }
    int print(){
        // cout<<name<<" "<<run<<" "<<avg<<endl;
        cout<<this->name<<" "<<this->run<<" "<<this->avg<<endl;
    }
    int matches(){
        return run/avg;
    }

};

int main(){
    Cricketer player1("virat kohli",25000, 53.5);
    Cricketer player2("Rohit sharma",15000,45.5);

    player1.print();
    cout<<player1.matches()<<endl;
}