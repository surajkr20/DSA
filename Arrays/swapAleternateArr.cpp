#include<iostream>
using namespace std;

int display(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int AlternateSwap(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[6] = {1,2,3,4,5,6};
    int odd[5] = {2,4,3,5,6};

    AlternateSwap(even,6);
    display(even,6);

    // for odd

    AlternateSwap(odd,5);
    display(odd,5);
}