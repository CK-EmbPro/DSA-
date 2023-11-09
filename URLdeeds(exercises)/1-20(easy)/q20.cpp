#include<iostream>
using namespace std;

void isPalindrome(string word){
    int strLength = word.length();
    int count =1;
    for(int i=0; i<(strLength/2); i++){
        if(word[i] != word[strLength-1-i]){
            count =0;
        }
    }

    if(count ==1){
        cout<<"The word "<<word<<" is a palindrome"<<endl;
    }else{
        cout<<"The word "<<word<<" is not a palindrome"<<endl;
    }
}

int main(){
    string word;
    cout<<"Input the word to check paliProperty"<<endl;
    cin>>word;

    isPalindrome(word);
    return 0;
}