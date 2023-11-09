#include<iostream>
using namespace std;

class Rectangle{
    int width, length;
    public:

    Rectangle(){}
    Rectangle rectc();
    void set_values(int w, int l){
        width = w;
        length= l;
    }

    int area(void) {return (width*length);}
};

Rectangle Rectangle::rectc(){
    Rectangle r;
    r.set_values(10,5);
    return r;

}

int main(){

    Rectangle rectb;
    // Rectangle rectc();
    Rectangle a = reactb.reactc();
    // rectc.set_values(10,5);
    rectb.set_values(5,9);

    cout<<"rectb area: "<<rectb.area()<< endl;
    cout<<"rectc area: "<<a.reactc()<< endl;


    return 0;
}