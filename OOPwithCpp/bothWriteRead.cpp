#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string demoStringLine;
    ifstream MyDemoFile("demoFile");
    ofstream ReadContent("readContent");

    while(getline(MyDemoFile, demoStringLine)){
        ReadContent<< demoStringLine<<endl;
    }
    return 0;
}