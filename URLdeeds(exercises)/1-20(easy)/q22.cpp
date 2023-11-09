#include<iostream>
#include<string>
using namespace std;

void hasSpaces(string word){
    // int wordLen= word.length();
    int index = word.find(' ');
    if(index!= string::npos){
    cout<<"Space characters exists in word "<< word <<endl;
    cout<<"And occur first at index "<< index <<endl;
    }else{
        cout<<"No space character found in word "<< word<< endl;
    }
}

int main(){
    string name;
    cout<<"Input the word for space-checking."<< endl;
    getline(cin, name);
    hasSpaces(name);
    return 0;
}