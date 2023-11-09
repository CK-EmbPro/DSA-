#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

void isPalindrome(string strInput){
    string reversedStr = strInput;
    reverse(reversedStr.begin(), reversedStr.end());

    if(reversedStr == strInput){
        cout<<strInput<<" is a palindrome"<<endl;
    }else{
        cout<<strInput<<" is not a palindrome"<<endl;
    }

}

int main(){
    string strInput;
    cout<<"Input string to check paliProperty ";
    getline(cin, strInput);

    isPalindrome(strInput);
    return 0;
}