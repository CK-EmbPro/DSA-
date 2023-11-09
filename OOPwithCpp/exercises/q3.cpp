#include<iostream>
using namespace std;

class Person{
    string name;
    int age;
    string country;

    public: 
    void setNameCountryAge(string nameArg, string countryArg, int ageArg){
        name = nameArg;
        country = countryArg;
        age = ageArg;
    }

    string getName(){
        return name;
    }

    string getCountry(){
        return country;
    }

    int getAge(){
        return age;
    }
};

int main(){
    string name, country;
    int age;  

    cout<<"Input your name , country and age respectively"<<endl;
    cin>>name>>country>>age;

    Person person1;
    person1.setNameCountryAge(name, country, age);

    cout<<"Person1's name is "<<person1.getName()<<endl;
    cout<<"Person1's country is "<<person1.getCountry()<<endl;
    cout<<"Person1's age is "<<person1.getAge()<<endl;
    return 0;
}