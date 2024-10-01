// print factorial of numbers 1-n;

#include<iostream> // print without function.
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
        cout<<fact<<endl;
    }
    // cout<<fact;
    return 0;
}

// #include<iostream> // with function.
// using namespace std;

// int fact(int n){
//     int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact *= i;
//     }
//     return fact;
// }

// int main(){
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int j=1; j<=n; j++){
//         cout<<fact(j)<<endl;
//     }
// }