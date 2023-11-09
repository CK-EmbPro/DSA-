#include<iostream>
using namespace std;

class Triangle{
    int side1, side2, side3;
    
    public:

    Triangle(int s1, int s2, int s3): side1(s1), side2(s2), side3(s3){};

    bool isItIso = side1 ==side2 || side2 ==side3 || side1 ==side3;
    bool isItEqui = side1==side2 && side2==side3;
    bool isItScalene = side1!=side2 && side2!=side3 && side1!=side3;

    void isScalene(){
        cout<<"The triangle is scalene."<<endl;    
    }

     void isEquilateral(){
        cout<<"The triangle is equilateral."<<endl;
                
    }

    void isIsosceles(){            
        cout<<"The triangle is isosceles."<<endl;
    }

    void determiner(){
        if(isItEqui){
           isEquilateral();
        }
    
        if(isItIso && !isItEqui){
            isIsosceles();
        };
    
    
        if(isItScalene){
            isScalene();
        }

    }
};

int main(){
    int side1, side2, side3;
    cout<<"Input the sides of the triangle."<<endl;
    cin>>side1>>side2>>side3;

    Triangle tria1(side1, side2, side3);

    tria1.determiner();

    return 0;
}