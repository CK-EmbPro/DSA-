#include<iostream>
using namespace std;

void swapper(double &num1, double &num2){
    double temp;
    temp =num1;
    num1= num2;
    num2 = temp;

}

int main(){
    double num1,num2;
    cout << "Input 1st number";
    cin >> num1;
    cout <<"Input 2st number";
    cin>>num2;

    swapper(num1,num2);

    cout<<"After swapping the 1st number is: "<<num1<<endl; 
    cout<<"After swapping the 2st number is: "<<num2<<endl; 

    
}