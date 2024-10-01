// nth stair path problems
// only jumped 1 or 2 stairs

// formula - stair(n-1) + stair(n+2)

#include<iostream>
using namespace std;

int stair(int x){
    // 1 & 2 jumps valid and their combinations
    // if(n==2) return 2;
    // if(n==1) return 1;
    // return stair(n-1) + stair(n-2); 

    // 1 2 and 3 jumps valid and their combinations
    if(x==1) return 1;
    if(x==2) return 2;
    if(x==3) return 3;
    return stair(x-1)+stair(x-2)+stair(x-3);
}

int main(){
    int n;
    cout<<"Enter no of nth stairs : ";
    cin>>n;
    cout<<stair(n);
}