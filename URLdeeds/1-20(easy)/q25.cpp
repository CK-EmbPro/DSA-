#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

void reverseString(string strInput){

    int strLength = strInput.size();
    cout<<"The reverse of string "<<strInput<<" is ";
    for(int i = (strLength-1); i>=0; i--){
        cout<<strInput[i];
    }
} 

int main(){
    string strInput;
    cout<<"Input the string to be reversed ";
    getline(cin,strInput);

    reverseString(strInput);
    return 0;
}