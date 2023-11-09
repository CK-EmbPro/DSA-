#include <iostream>
using namespace std;

void celsiusToFahr(float celsius){
    int fahrenheit = (celsius*9/5)+32;
    cout<<celsius<<" degrees celsius in fahrenheit is "<<fahrenheit<<endl;
}

int main(){
    float celsius;
    cout<<"Input the temperature in celsius"<<endl;
    cin>>celsius;

    celsiusToFahr(celsius);
    return 0;
}