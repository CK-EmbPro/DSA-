#include<iostream>
using namespace std;

void isPrime(int primeArg, int &primeProp){

    primeProp = 1;

    if(primeArg<=1){
        primeProp = 0;
        return;
    }

    for(int i = 2; i*i<= primeArg; i++){
        if(primeArg%i == 0){
            primeProp = 0;
            return;
        }
    }
}


void printPrimes(int num){
    int primeProp = 1;
    int countOfPrimes = 0;
    int primeArg = 2;

    while(countOfPrimes<num){
        isPrime(primeArg, primeProp);
        if(primeProp == 1 ){
            cout<<primeArg<<"is a prime num"<<endl;
            countOfPrimes++;
        }
        
        primeArg++;
    }

}



int main(){
    int num;
    cout<<"Enter the number of prime numbers";
    cin>>num;
    
    printPrimes(num);
    
    return 0;
}



