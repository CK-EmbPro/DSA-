#include<iostream>
#include<cmath>
using namespace std;

int sumOfSquares(int naturalNumLimit){
    int sum = 0;
    if(naturalNumLimit>0){
        for(int i =1; i <= naturalNumLimit; i++){
            sum += pow(i,2);
        }

    }

    return sum;
}

int squareOfSum(int naturalNumLimit){
    int sum = 0;
    if(naturalNumLimit>0){
        for(int i =1; i <= naturalNumLimit; i++){
            sum += i;
        }

    }
    
    return pow(sum, 2);
}

int main(){
    int naturalNumLimit; 
    cout<<"Input the limit of natural numbers"<<endl;
    cin>> naturalNumLimit;

    int sumSquares = sumOfSquares(naturalNumLimit);
    cout<<"This is sum of squares"<<sumSquares<<endl;
    int squareSum = squareOfSum(naturalNumLimit);
    cout<<"This is square of sums"<<squareSum<<endl;
    
    int difference = squareSum-sumSquares;

    cout<<"Difference btn square of sum and sum of squares"<<difference<<endl;
    return 0;
}