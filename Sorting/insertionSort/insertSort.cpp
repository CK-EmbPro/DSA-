#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    int i,key,j;
    for(i=1; i<n; i++){
        key = arr[i];
        j = i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j=j-1;
        
        }

        arr[j+1] = key;
    }
}

void printArray(int arr[], int n){
    int i;
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";;
        cout<<endl;
    }
}

int main(){
    int array[5] = {6,2,9,4,7};
    int n = sizeof(array)/sizeof(array[0]);

    insertionSort(array,n);
    printArray(array,n);
    return 0;
}