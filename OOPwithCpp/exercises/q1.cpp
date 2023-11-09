#include<iostream>
#include<cmath>
using namespace std;

class Circle{
    double radius;
    const float pi = 3.14;

    public:

    void setRadius(double r){
        radius = r;
    };

    void cicleArea(){
        double area = pow(radius, 2)*pi;
        cout<<"Area of circle with r of "<< radius<<" is "<< area<<endl;
    }
};

int main(){
    double radius;
    cout<<"Input circle radius "<<endl;
    cin>>radius;

    Circle circle1;
    circle1.setRadius(radius);
    circle1.cicleArea();


    return 0;
}