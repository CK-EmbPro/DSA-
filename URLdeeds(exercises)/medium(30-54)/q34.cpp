#include<iostream>
using namespace std;

void iscenteredArr(int intArray[], int intArrLen){
    if(intArrLen % 2 == 0){
        cout<<"The array passed can't be centered with even n of elements";
    }else{
        int middleIndex = intArrLen/2;
        int middleElement = intArray[middleIndex];
        int isCenteredProp = 1;

        for(int i =0; i<intArrLen; i++){
            if(intArray[i]<=middleElement){
                if(i == middleIndex){
                    continue;
                }else{
                    isCenteredProp=0;
                }
            }
        }

        if(isCenteredProp==1){
            cout<<"The array passed is centered"<<endl;
        }else{
            cout<<"The array passed is not centered"<<endl;
        }

    }
}

int main(){
    int intArray[] = {1, 2, 3, 4};
    int intArraySize = sizeof(intArray)/sizeof(intArray[0]);
    iscenteredArr(intArray, intArraySize);

    // cout<<middleIndex<<endl;
    return 0;
}