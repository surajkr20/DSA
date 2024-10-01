// Q. write a function to take the radius of a circle as an argument an return its area.

#include<iostream>
using namespace std;
int circleArea(float r){
    float pie = 3.1415;
    float area = pie*r*r;
    cout<<area;
}
int main(){
    float radius;
    cout<<"Enter the circle of radius : ";
    cin>>radius;
    cout<<circleArea(radius);
}