#include<iostream>
using namespace std;

void isPosNegZero(double number){
    if(number ==0){
        cout<<number<<" is zero"<<endl;
    }else if(number<0){
        cout<<number<<" is negative"<<endl;
    }else{
        cout<<number<<" is positive"<<endl;
    }
}

int main(){
    double number;
    cout<<"Input the number to check "<<endl;
    cin>>number;
    isPosNegZero(number); 
    return 0;
}