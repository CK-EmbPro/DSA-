#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int targetIndex = i;

        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[targetIndex]){
                targetIndex = j;
            }
        }

        swap(arr[i], arr[targetIndex]);
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" elements "<<endl;

    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    cout<<"The entered numbers without sorting are: "<<endl;
    for(int i =0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    selectionSort(a,n);

    cout<<"The entered numbers after sorting are: "<<endl;

    
    for(int i =0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}