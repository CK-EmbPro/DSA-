#include<iostream>
using namespace std;

void difference(int a[], int size){
    int sumOfOdds = 0;
    int sumOfEvens = 0;

    for(int i = 0; i <size ; i++){
        if(a[i]%2!=0){
            sumOfOdds += a[i];
        }else{
            sumOfEvens += a[i];
        }
    }

    cout<< "Odds are "<<sumOfOdds<<endl;
    cout<< "Evens are "<<sumOfEvens<<endl;

    cout<< "Difference odds - evens "<< sumOfOdds-sumOfEvens<<endl;
};


int main(){
     
    int arr[] = {1,3,2,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    difference(arr, size); 
    return 0;
}