#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int num = 40;
    cout<<setw(50)<<"Before any setw"<<num<<endl;

    cout<<"Setting the width"<<" Using setw to 20:"<<setw(20)<<num<<endl;

    return 0;
}