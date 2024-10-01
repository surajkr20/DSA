// odd left Triangle pattern.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter value of n : ";
//     cin>>n;
//     for(int i=1; i<=n*2; i+=2){
//         for(int j=1; j<=i; j+=2){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

// even left triangle pattern.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}