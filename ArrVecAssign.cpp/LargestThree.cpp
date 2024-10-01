// wap to find the largest three elements in the array

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int threeLargest(vector<int> v, int size){
    int max1,max2,max3;

    max1 = INT_MIN;
    max2 = INT_MIN;
    max3 = INT_MIN;

    // for fist max value
    for(int i=0; i<size; i++){
        if(max1 < v[i]) max1 = v[i];
    }

    // for second max value
    for(int i=0; i<size; i++){
        if(max2 < v[i] && max1!=v[i]) max2 = v[i];
    }

    // for third largest value
    for(int i=0; i<size; i++){
        if(max3 < v[i] && max1!=v[i] && max2!=v[i]) max3 = v[i];
    }
    cout<<max1<<endl;
    cout<<max2<<endl;
    cout<<max3<<endl;
}

int main(){
    int size;
    cout<<"Enter the size of vector : ";
    cin>>size;

    vector<int> v;
    for(int i=0; i<size; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }

    threeLargest(v,size);

}