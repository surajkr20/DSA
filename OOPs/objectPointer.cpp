
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

};

int main(){
    Cricketer player1("virat kohli",25000, 53.5);
    Cricketer player2("Rohit sharma",15000,45.5);

    Cricketer* p = &player1;
    cout<<(*p).name<<endl;
    (*p).avg = 60.5;
    // cout<<(*p).avg<<endl;
    cout<<p->avg<<endl; // (*P) = ->(means this keyword is a pointer)

}
