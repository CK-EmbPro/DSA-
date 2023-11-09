#include<iostream>
using namespace std;

void difference(int num){
    int sumOfEvens =0 ;
    int sumOfOdds = 0;
    for( int i = 0; i <= num; i++){
        if(i%2==0){
            sumOfEvens += i;
        }else{
            sumOfOdds += i;
        }
    }

    cout << "Odds sum up to "<<sumOfOdds <<endl;
    cout << "Evens sum up to "<<sumOfEvens <<endl;

    cout<< "Difference odds - evens "<< sumOfOdds-sumOfEvens<<endl;
}

int main(){
    int num;
    cout<<"Input the limit number"<<endl;
    cin>>num;

    difference(num);
    return 0;
}