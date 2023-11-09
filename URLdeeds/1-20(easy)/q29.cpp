#include<iostream>
using namespace std;

void removeSpaces(string &strInput){
    int count=0;

    for(int i=0; i<strInput.length();i++){
        if(strInput[i]!= ' '){
            strInput[count++]=strInput[i];
        }
    
    }

    strInput[count] = '\0';

    cout<<"String without spaces: "<<strInput<<endl;
}

int main(){
    string strInput;
    cout<<"Input the string to remove spaces "<<endl;
    getline(cin, strInput);

    removeSpaces(strInput);
    return 0;
}