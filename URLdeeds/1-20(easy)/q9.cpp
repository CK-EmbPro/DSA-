#include<iostream>
using namespace std;

bool check(int H, int S){
    return H*H>=4*S;
}

int findPairs(int H[], int hSize, int S[], int sSize){
    int count=0;

    for(int i=0; i<hSize; i++){
        for(int j=0; j<sSize; j++){
            if(check(H[i], S[j])) count++;
        }
    }

    return count;
}

int main(){

    int H[] = { 1, 6, 4 };
    int hSize = sizeof(H) / sizeof(H[0]);
    int S[] = { 23, 3, 42, 14 };
    int sSize = sizeof(S) / sizeof(S[0]);

    cout<<"The array size is H array "<<hSize<<endl;
    cout<<"The array size is S array "<<sSize<<endl;

    int nOfPairs = findPairs(H, hSize, S, sSize);

    cout<<"The number of pairs is "<<nOfPairs;
    return 0;
}