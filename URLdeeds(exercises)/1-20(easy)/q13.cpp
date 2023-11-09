#include<iostream>
#include<cmath>
using namespace std;

void quotRemainder(float divident, float divisor){
    float quotient = divident / divisor;
    float remainder = fmod(divident,divisor);

    cout << "The quotient of input numbers is " << quotient <<endl;
    cout << "The remainder of input numbers is " << remainder <<endl;
}

int main(){
    float dividend, divisor;
    cout<<"Input dividend and divisor respectively"<<endl;
    cin>>dividend>>divisor;
    quotRemainder(dividend, divisor);
    return 0;
}