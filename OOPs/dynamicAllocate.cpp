
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
    Cricketer* player2 = new Cricketer("Rohit sharma",15000,45.5);

    // cout<<(*player2).name<<endl;
    cout<<player2->name<<endl;


    // int* ptr = new int(34);
    // cout<<*ptr<<endl;
}

