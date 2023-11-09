#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int maxSize = 100;
    int useArr[maxSize];
    int size, sum, min , max;
    float average ;

    cout<<"Enter the size"<<endl;
    cin>>size;

    for(int i =0; i<size; i++){
        cout<<"Enter the "<<i+1<<"element "<<endl;
        cin>>useArr[i];
    }

    sum = 0;

    for(int i =0; i<size; i++){
        sum += useArr[i];
    }

    cout<< "the sum of arr elements is "<<sum<<endl;

    average= sum/size;

    cout<<"The average is "<<average<<endl;
    
    min= INT_MAX;
    max= INT_MIN;

    for(int i =0; i<size; i++){
        for(int j=i; j<size; j++){
            if(useArr[j]<min){
                min=useArr[j];
            };
            if(useArr[j]>max){
                max= useArr[j];
            };
        }
    };

    cout<<"The smallest is "<<min<<endl;
    cout<<"The largest is "<<max<<endl;
    return 0;
}