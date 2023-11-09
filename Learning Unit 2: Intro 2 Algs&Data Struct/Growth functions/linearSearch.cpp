#include<iostream>
using namespace std;

void findElements(int arr[], int key, int n){
    // int size = sizeof(arr)/sizeof(arr[0]);
    // int c = 1;

    for(int i = 0;i < n;i++){
        if(arr[0] == key){
            cout <<"The index is "<<i<<endl;
            break;
        };

        cout <<"The index is not found "<<i<<endl;
    }
};

int main(){
    int arr[5]= {10,20,30,40,40};
    int size = sizeof(arr);
    int n =sizeof(arr) /sizeof(int);

    cout <<"The size of arr is "<<size<<endl;
    cout<<"The number of elements is = "<<n<<endl;

    findElements(arr, 10, size);
    return 0;
}