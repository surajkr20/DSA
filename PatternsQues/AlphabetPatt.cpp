// Square Alphabets pattern

// #include<iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout<<"Enter your no : ";
//     cin>>ch;
//     for(int i=65; i<=ch; i++){
//         for(int j=65; j<=ch; j++){
//             cout<<(char) j<<" ";
//         }
//         cout<<endl;
//     }
// }

// Second Rule.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter your no : ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             cout<<(char)(j+64)<<" ";
//         }
//         cout<<endl;
//     }
// }

// All characters printing using loops 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter your No : ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         cout<<(char) i<<" ";
//     }
// }

// Alphabets left half triangle

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your no : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
}