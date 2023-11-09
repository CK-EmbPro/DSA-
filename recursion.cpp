#include<iostream>
using namespace std;

int factorial(int num){
    if(num==0 || num==1){
        
        return 1;
    }
    else{
        
        return num*factorial(num-1);
    };
}

int main(){
    int n;
    cout <<"Enter a factorable number\t";
    cin>>n;

    cout<<"The factorial of entered number is "<<factorial(n)<<endl;

}