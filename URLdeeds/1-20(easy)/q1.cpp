#include<iostream>
#include<algorithm>
using namespace std;


namespace arithmetic{
    double addition(double num1, double num2){
        return num1 + num2;
    };

        double subtract(double num1, double num2){
        return num1 - num2;
    };

        double multiply(double num1, double num2){
        return num1 * num2;
    };

        double divide(double num1, double num2){
        return num1 / num2;
    };
};

int main(){
    int opNumber;
    double num1, num2;
    string isContinuing;

   

    
    do{
        cout << "MENU" << endl;
        cout << "\t1.Add" << endl << "\t2.Subtract" << endl << "\t3.Multiply" <<endl << "\t4.Divide" << endl;
        cout << "Enter your choice: ";
        cin >> opNumber;
        cout <<"Enter your two numbers: ";
        cin >> num1 >> num2;
        
        double result;
        switch(opNumber){
            case 1:
                result = arithmetic::addition(num1,num2);
                cout<<"Result: " << result << endl;
                break;
            case 2: 
                result = arithmetic::subtract(num1,num2);
                cout<<"Result: " << result << endl;
                break;
            case 3: 
                result = arithmetic::multiply(num1,num2);
                cout<<"Result: "<< result << endl;
                break;
            
            case 4: 
                result = arithmetic::divide(num1,num2);
                cout<<"Result: "<< result << endl;
                break;

            default:
                cout<<"Enter single number from 1 to 4 to determine arithmetic operation"<<endl;
        };

        cout<<"Do you wish to continue?"<<endl;
        cin>>isContinuing;

        transform(isContinuing.begin(),isContinuing.end(), isContinuing.begin(), ::tolower);

    }while(isContinuing=="y");

    return 0;
}


