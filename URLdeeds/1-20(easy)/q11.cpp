#include<iostream>
#include<cmath>
using namespace std;

void findPerimeter(float length, float width){
    float perimeter = 2*(length+width);
    float area  = length *width;

    cout<<"The perimeter is "<<perimeter<<endl;
    cout<<"The area is "<<area<<endl;
}

int main(){
    float length, width;
    cout<<"Input the dimension of the length and width respectively"<<endl;
    cin>>length>>width;

    findPerimeter(length, width);
    return 0;
}