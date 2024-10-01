// Null Pointers = will be of great importance


#include<iostream>
using namespace std;
int main(){
    int* ptr1 = NULL; // reserved address
    int* ptr2 = 0;
    int* ptr3 = '\0';
    cout<<ptr1<<" "<<ptr2<<" "<<ptr3<<endl; // 0x0
    // \0 -> null character - 0
    char ch = '\0'; // 
    cout<<(int)ch; // ASCII value of null character
}