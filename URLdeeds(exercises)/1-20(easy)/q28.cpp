#include<iostream>
#include<algorithm>
using namespace std;

void toUpperCase(string strInput){
    cout<<strInput<<" in uppercase is ";
    transform(strInput.begin(), strInput.end(),strInput.begin(), ::toupper);

    cout<<strInput<<endl;
}

int main(){
    string strInput;
    cout<<"Input the string to convert to uppercase."<<endl;
    getline(cin,strInput);

    toUpperCase(strInput);
    return 0;
}