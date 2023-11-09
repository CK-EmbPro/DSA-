#include<iostream>
using namespace std;

int product(){
    int product=1;
    for(int i =1; i<20; i++){

        if(i%2!=0){
        product*=i;
        };
    };

    return product;
}


int main(){
    int product;
    product= ::product();

    cout<<"The product of odd from 1 to 20 is "<<product<<endl;
    return 0;
}