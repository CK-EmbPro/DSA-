#include<iostream>
using namespace std;

class Rectangle{
    float length;
    float width;

    public: 

    Rectangle(float w, float l): length(l), width(w){};
    // void setLenWidth(float w, float l){
    //     width = w;
    //     length = l;
    // }   this can be done while using setters for the members of the class

    float perimeter(){
        return 2*(width+length);
    }

    float area(){
        return (length*width);
    }
};

int main(){
    float length, width;
    cout<<"Input length and width respectively"<<endl;
    cin>>length>>width;

    Rectangle rect(width, length);
    // rect.setLenWidth(width, length);

    cout<<"THe perimeter is "<<rect.perimeter()<<endl;
    cout<<"THe area is "<<rect.area()<<endl;

    return 0;
}