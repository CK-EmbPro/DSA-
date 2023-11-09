#include<iostream>
using namespace std; 

int main(){
    int myArray[5] ={10,20,30,40,50};
    int size = sizeof(myArray)/sizeof(myArray[0]);
    int lastIndex = size-1;
    int position = size; 
    int element = 15;

    while(lastIndex>=position){
        myArray[lastIndex+1] = myArray[lastIndex];
        lastIndex--;
    }

    myArray[position] = element;

    for(int i = 0; i<size+1; i++){
        cout<<myArray[i]<<endl;
    }

}

// int main(){
//     // With// With using only newArray

//     int myArray[5] = {10,20,30,40,50};
//     int size = sizeof(myArray)/sizeof(myArray[0]);
//     int newSize = size+1;
//     int newArray[newSize];
//     int position = 2;
//     int element = 14;

//    for(int i = 0; i < position; i++){
//     newArray[i] = myArray[i];
//    };

//    newArray[position] = element;    



//   for(int i = position+1; i < newSize; i++){
//     newArray[i] = myArray[i-1];
//   }

//     size = newSize;

//     for( int i = 0; i < size; i++){
//         cout<<newArray[i]<<endl;
//     }
// }

 // // int  myArrray[5] = {10,20,30,40,50};
    // int myArray[5];
    // int size = sizeof(myArray)/sizeof(myArray[0]);
    // int n = end(myArray)- begin(myArray);
    // cout<<"Morning for today"<<myArray[9]<<endl;

    // for(int i=0; i<n; i++){
    //    cout<<"Enter the "<<i+1<<" element"<<endl;
    //    cin>>myArray[i];
    // }

    // cout<<"The read elements are "<<endl;
    // for(int j = 0; j<size; j++){
    //     cout<<myArray[j]<<endl;
    // }