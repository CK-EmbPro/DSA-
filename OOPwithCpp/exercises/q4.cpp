#include<iostream>
using namespace std;

class Car{
    string company;
    string model;
    int year;

    public:

    void setCompModYear(string compArg, string modelArg, int yearArg){
        company = compArg;
        model = modelArg;
        year = yearArg;
    }

    string getCompany(){
        return company;
    }

    string getModel(){
        return model;
    }

    int getYear(){
        return year;
    }

};

int main(){

    string company, model;
    int year;
    cout<<"Input car's company, model and year of production respectively"<< endl;
    cin>>company>>model>>year;

    Car car1;
    car1.setCompModYear(company, model, year);

    cout<<"The car's company is "<< car1.getCompany()<<endl;
    cout<<"The car's model is "<< car1.getModel()<<endl;
    cout<<"The car's year is "<< car1.getYear()<<endl;

    return 0;
}