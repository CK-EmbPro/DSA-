#include<iostream>
#include<cmath>
using namespace std;

const float pi= 3.14;

int main(){
    float radius, volume;
    cout << "Enter the sphere radius: ";
    cin>>radius;

    volume = (4*pi*pow(radius,3))/3;

    cout<<"The volume of the sphere is: "<<volume<<endl;

    return 0;
}