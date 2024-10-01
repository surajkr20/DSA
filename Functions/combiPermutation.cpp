// First method solve without function

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     int r;
//     cout<<"Enter r : ";
//     cin>>r;
//     int nfact = 1; //n!
//     for(int i=1; i<=n; i++){
//         nfact = nfact*i;
//     }
//     int rfact = 1; // r!
//     for(int i=1; i<=r; i++){
//         rfact = rfact*i;
//     }
//     int nrfact = 1; // (n-r)!
//     for(int i=1; i<=n-r; i++){
//         nrfact = nrfact*i;
//     }
//     int ncr = nfact/(rfact*nrfact);
//     cout<<ncr;
// }

// Second method using functions

// #include<iostream>
// using namespace std;
// int fact(int x){
//     int factorial = 1;
//     for(int i=1; i<=x; i++){
//         factorial = factorial*i;
//     }
//     return factorial;
// }
// int main(){
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     int r;
//     cout<<"Enter r : ";
//     cin>>r;

//     int nfact = fact(n);
//     int rfact = fact(r);
//     int nrfact = fact(n-r);
//     int ncr = nfact/(rfact*nrfact);
//     cout<<ncr;
// }

// third method using extra functions

#include<iostream>
using namespace std;
int fact(int x){
    int factorial = 1;
    for(int i=1; i<=x; i++){
        factorial = factorial*i;
    }
    return factorial;
}
int combination(int n,int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int permutation(int n, int r){
    int npr = fact(n)/fact(n-r);
    return npr;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int r;
    cout<<"Enter r : ";
    cin>>r;
    int ncr = combination(n,r);
    int npr = permutation(n,r);
    cout<<ncr<<endl<<npr;
}