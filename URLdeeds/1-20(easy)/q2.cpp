#include<iostream>
using namespace std;

double addition(double num1, double num2){
    return num1 + num2;
}

int main(){
    double num1, num2, result;
    cout<<"Enter two numbers to be added together "<<endl;
    cin>>num1>>num2;

    result = ::addition(num1, num2);

    cout<<"The sum is: "<<result<<endl;

    return 0;
}