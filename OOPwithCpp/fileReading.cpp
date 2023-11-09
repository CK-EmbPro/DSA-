#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string fileLine;
    ifstream MyReadFile("demoFile");

    while(getline(MyReadFile, fileLine)){
        cout<<fileLine<<endl;
    };

    MyReadFile.close();
    return 0;
}