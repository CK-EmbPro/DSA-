#include<iostream>
using namespace std;

int main(){
    int arr[5]= {50, 40, 10, 30, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp;

    cout<<"The array before sorting "<<endl;
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    for(int i =0; i<n-1; i++){
        for(int j = 0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                // temp = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1] = temp;
                

                swap(arr[j],arr[j+1]);
            }

        }
    }
    
    cout<<endl<<"\v The array after sorting"<<endl;
    for(int i = 0; i<n ; i++){
        cout<<" "<<arr[i];
    }

    return 0;
}