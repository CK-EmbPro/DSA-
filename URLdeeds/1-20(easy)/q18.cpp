#include <iostream>
#include <cmath>
using namespace std;

void cubeVolume(double side){
    double volume = pow(side,3);
    cout <<"Volume of a cube with side of " << side <<" is " << volume << endl;
}

int main(){
    double side;
    cout<<"Input the side of the cube"<<endl;
    cin>>side;

    cubeVolume(side);
    return 0;
}