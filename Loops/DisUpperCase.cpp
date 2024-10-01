
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int count = 0;
    int sum = 0;
    int product = 1;
    int reverse = 0;
    for(int i=1; n!=0; i++){
        int lastDigit = n%10;
        product = product*lastDigit;
        sum = sum+lastDigit;
        reverse = (reverse*10)+lastDigit;
        n = n/10;
        count++;
    }
    cout<<"total digit -"<<" "<<count<<endl;
    cout<<"total sum is -"<<" "<<sum<<endl;
    cout<<"total product -"<<product<<endl;
    cout<<"reverse -"<<reverse<<endl;
}