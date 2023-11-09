#include<iostream>
using namespace std;

struct Rectangle{
    private:

    int width;
    int length;

    public: 

    Rectangle(int w, int l): 
        width(w), 
        length(l){};

    int area(){
        return width*length;
    };

    int perimeter();

};

int Rectangle::perimeter(){
    return 2*(width+length);
};



int main(){
    Rectangle *rect = new Rectangle(30, 5); //for using new keyword we need to make the object considered as an pointer
    // or Rectangle rect{30,5};
    // again Rectangle rect = {30,5};
    // rect->setDims();
    cout<<"The area is "<<rect->area()<<endl;
    cout<<"The perimeter is "<<rect->perimeter()<<endl;

    return 0;
}