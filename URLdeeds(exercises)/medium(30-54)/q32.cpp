#include<iostream>
using namespace std;

void countDigit(int number, int digit){
    int count = 0;
    int rem;
    while(number>0 && digit>=0){
        rem = number%10;
        if(rem ==digit){
            count++;
        }
        number /= 10;
    }
    
    if(count){

    cout<<"digit "<<digit<<" occured "<<count<<" times."<<endl;
    }
}

int main(){
    int number, digit;
    cout<<"Input number and digit"<<endl;
    cin>> number >> digit;
    countDigit(number, digit);
    return 0;
}