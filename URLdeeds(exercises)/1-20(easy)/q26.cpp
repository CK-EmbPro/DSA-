#include<iostream>
using namespace std;

void strLength(string strInput){
    int i = 0;
    while (strInput[i]){
        ++i;
    };

    cout<<"The length of input string is "<<i<<endl;
}

int main(){
    string strInput;
    cout<<"Input the string to find its length.";
    getline(cin, strInput);

    strLength(strInput);
    return 0;
}