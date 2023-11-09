#include<iostream>
using namespace std;

template<typename groupc>

groupc addition(groupc a, groupc b){
    return a+b;
}

int main(){
    // int num1, num2;
    // cout <<"Enter num1, num2"<<endl;
    // cin>>num1>>num2;

    cout <<"The sum is "<< addition("Hello", "World")<<endl;
}


