#include <iostream>
using namespace std;

void myFunction(int myNumbers[], int size);

int main(){
    int myNumbers[5]= {1,2,3,4,5};
    int size = sizeof(myNumbers)/sizeof(int);
    myFunction(myNumbers, size);

    return 0;
}

void myFunction(int myNumbers[5], int size){
    
     for(int i = 0; i <size; i++){
        cout <<"With numbers"<<endl;
        cout << myNumbers[i] <<endl;
    };
}

// the extension for auto align of codes appart from doing it manually