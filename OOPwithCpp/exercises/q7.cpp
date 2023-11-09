#include<iostream>
using namespace std;

class Employee{
    string name;
    int employeeId;
    int salary;

    public: 

    void setSalary(int salaryArg){
        salary = salaryArg;
    }

    int getSalary(){
        return salary;
    }
};

int main(){
    bool wellPerforming;
    int salary;
    Employee employ1;

    cout<<"Input the employee performance status"<<endl;
    cin>>wellPerforming;

    if(wellPerforming){
        cout<<"Input salary of the employee"<<endl;
        cin>>salary;

        employ1.setSalary(salary);
        
        cout<<"Salary of the employee is "<<employ1.getSalary()<<endl;
    }else{
        cout<<"The employee is not well-performing"<<endl;
    }



    return 0;
}