#include<iostream>
#include<cstring>
using namespace std;

class Person{
    char* name;

    public:
    
    Person(char* n){
        name = n;
    }

    void getDetails(){
        cout<<"Name is "<<name<<endl;
    }
};

int main(){

    
    Person ck("debrice");
    ck.getDetails();

    return 0;
}