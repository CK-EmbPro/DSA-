#include<iostream>
using namespace std;

int evenSum(){
    int limit =100;
    int sum=0;

    for (int i =0; i< limit; i++){
        if(i%2==0){
            sum+=i;
        }
    } 

    return sum;
}

int main(){
    int sum;

    sum = ::evenSum();

    cout<<"The sum of the even numbers is "<<sum<<endl;

    return 0;
}