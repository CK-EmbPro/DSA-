#include<iostream>
using namespace std;

void yearsConverter(int seconds){
    int yearSeconds = 31536000;
    int yearCount = seconds/yearSeconds;
    cout<<"years in "<<seconds<<" are "<<yearCount<<endl;
}

int main(){
    int seconds = 1000000000;
    yearsConverter(seconds);
    return 0;
}