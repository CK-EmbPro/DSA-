#include<iostream>
#include<cmath>
using namespace std;

const float PI = 3.14;

void circumference(double radius){
    double circumference = ::PI * 2 * radius;
    cout<<"The circumference of a circle with radius of "<<radius<<" is " << circumference << endl;
}

void circleArea(double radius){
    double area = ::PI * pow(radius,2);
    cout<<"The area of a circle with radius of "<<radius<<" is " << area << endl;
}

int main(){
    double radius;
    cout<<"Input the size of the circle radius"<<endl;
    cin>>radius;

    circumference(radius);
    circleArea(radius);
    return 0;
}