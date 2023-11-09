#include<iostream>
using namespace std;

void charWordsCounter(string wordsInput){
    int wordLen= wordsInput.length();
    int wordCount, charWithoutSpaces;
    int spaceCount=0;
    for(int i=0; i<wordLen; i++){
        if(wordsInput[i]==' '){
            ++spaceCount;
        }
    }

    wordCount=spaceCount+1;
    charWithoutSpaces=wordLen-spaceCount;

    cout<<"Number of characters without spaces "<< charWithoutSpaces<<endl;
    cout<<"Number of characters with spaces "<< wordLen<<endl;
    cout<<"Number of words "<< wordCount<<endl;
}

int main(){
    string wordsInput;
    cout<<"Input either a word or a sentence"<<endl;
    getline(cin, wordsInput);

    charWordsCounter(wordsInput);
    return 0;
}