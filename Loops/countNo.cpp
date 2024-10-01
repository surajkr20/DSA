// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter your no :- ";
//     cin>>n;
//     int count = 0;
//     int sum = 0;
//     for(int i=1; n!=0; i++){
        
//         count++;
//     }
//     cout<<count;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter your Number : ";
//     cin>>n;
//     int sum = 0;
//     for(int i=1; n!=0; i++){
//         int lastDigit = n%10;
//         sum = sum+lastDigit;
//         n = n/10;
//     }
//     cout<<sum;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your Number : ";
    cin>>n;
    int count = 0;;
    for(int i=1; n!=0; i++){
        n = n/10;
        count++;
    }
    cout<<count;
    return 0;
}