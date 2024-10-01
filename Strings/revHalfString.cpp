// Ques. input a string of even length and reverse the first half of the string.

// Ques. input a string of length greater than 5 and reverse the substring from position 2 to 5 using inbuilt functions.

// Ques. input a string of a even length and return the second half of that string using inbuild substr function.

// Return the total no of digits in a number without using any loop.
// hind- try using inbuilt to_string() function

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter your string(only even size of string) : ";
    getline(cin,str);

    // // 1. reverse first half
    // int len = str.length();
    // reverse(str.begin(),str.begin()+len/2);
    // cout<<str;

    // 2. reverse the substring from position 2 to 5.
    // ex = Abhinav = Anihbav
    // reverse(str.begin()+1,str.begin()+5);
    // cout<<str<<endl;

    // 3. print second half of any string
    // int n = str.length();
    // cout<<str.substr(n/2);

    // 4. return total no of digits
    // int x = 2345343;
    // string s = to_string(x);
    // cout<<s.length();
}