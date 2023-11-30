#include<iostream>
#include<bitset>
using namespace std;

// string decimalToBinary(int n){
//     return
// }
int main(){

    int value = 65;
    char letter = 'B';
    string name = "Debrice";

    name.push_back('2');
    cout<<name<<endl;

    cout<<"The following is display of the formatted output \v"<<endl;
    cout<<"Decimal: "<<dec<<value<<endl;
    cout<<"Octal: "<<oct<<value<<endl;
    cout<<"Hexadecimal: "<<hex<<value<<endl;
   cout<<"The binary of 4 "<<bitset<2* sizeof(4)>(4).to_string()<<endl;

    return 0;
}