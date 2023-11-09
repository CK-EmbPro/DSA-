#include<iostream>
#include<limits.h>
using namespace std;


int* reversedArray(int a[], int size){
    int* reversedArr = new int[5];
    for(int i = size-1, j=0; i>=0; i--, j++){
        reversedArr[j]= a[i];
    }
    return reversedArr;
}




int main(){

    int a[5]={1,2,3,4,5};

    int* result = reversedArray(a,5);
    for(int i = 0; i < 5; i++){
        cout<<i+1<<" element is "<<result[i]<<endl;
    }


    return 0;
}