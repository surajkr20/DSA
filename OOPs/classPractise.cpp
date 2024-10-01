
#include<iostream>
using namespace std;

class Book{
public:
    string name;
    int price, nop;

    int countBooks(int p){
        if(price<p){
            return 1;
        }
        else return 0;
    }

    bool isBookPresent(string book){
        if(name == book) return true;
        else return false;
    }
}; 

int main(){
    Book BhagwatGeetaa;

    BhagwatGeetaa.name = "BG";
    BhagwatGeetaa.price = 500;
    BhagwatGeetaa.nop = 1000;

    cout<<BhagwatGeetaa.countBooks(2000)<<endl;
    cout<<BhagwatGeetaa.isBookPresent("BG")<<endl;

}