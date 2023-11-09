#include<iostream>
using namespace std;

void alphaChecker(char inputChar){
    if(inputChar >=48 && inputChar <=57){
        cout<<inputChar<<" you input is digit"<<endl;
    }else if((inputChar >=65 && inputChar <=90) || (inputChar >=97 && inputChar <=122)){
        cout<<inputChar<<"you input is alphabet"<<endl;
    }else{
        cout<<inputChar<<"you input is special-character"<<endl;
    }
}

int main(){
    char inputChar;
    cout<<"Input a character to check."<<endl;
    cin>>inputChar;

    alphaChecker(inputChar);
    return 0;
}