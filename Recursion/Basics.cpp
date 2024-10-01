
// Recursion -->> function calling itself

// #include<iostream>
// using namespace std;
// void fun(int n){ // n is formal parameter
//     if(n==0) return;
//     cout<<"Abhinav-suraj"<<endl;
//     fun(n-1);
// }
// int main(){
//     fun(3); //function calling (3 is a actual parameter)
// }

// Ques. print "good morning", 'n' no of times where n is user input (using recursion)

#include<iostream>
using namespace std;
void morning(int n){
    if(n==0) return;
    cout<<"good morning"<<endl;
    morning(n-1);
}
int main(){
    int n;
    cout<<"Enter No - ";
    cin>>n;

    morning(n);
}