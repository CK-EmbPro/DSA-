#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    int i,j , smallElemIndex;

    for(i = 0; i< n-1; i++){
        smallElemIndex = i; //This is because always the smallest element is the first ele in the unsorted array

        for(j = i+1; j<n; j++){
            if(arr[j]<arr[smallElemIndex]){
                smallElemIndex = j;
            }
        }

        swap(arr[i], arr[smallElemIndex]);
    }
}

int main(){

    int arr[5] ={64,25,12,22,11};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"The array before sorting: "<<endl;
    for(int i =0; i<size; i++){
        cout<<arr[i]<<endl;
    }

    selectionSort(arr,size);

     cout<<"The array after sorting: "<<endl;
    for(int i =0; i<size; i++){
        cout<<arr[i]<<endl;
    }
    

    return 0;
}