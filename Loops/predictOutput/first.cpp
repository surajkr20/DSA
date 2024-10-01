// #include<iostream>
// using namespace std;
// int main(){
//     int t = 10;
//     while((t /= 5)){ // t /= 5 means (t = t/5)
//         cout<<"hello"<<endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     for(int x=1; x*x <= 10; x++){
//         cout<<"in for loop"<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int x = 10, y = 0;
    while(x >= y){
        x--;
        y++;
    }

    cout<<x<<" "<<y;
}