#include<iostream>
#include<algorithm>
using namespace std;

class BankAccount{
    int accountBal;
    int accountNum;

    public:
    void depositMoney( int accountNumber,int amount){
        accountBal = amount;
        accountNum = accountNumber;
    }

    void withdrawMoney(int withdAmount){
        accountBal -= withdAmount;

         cout<<"You have withdrown "<<withdAmount<<" now accountBalance="<<accountBal<<endl;
    }


};

int main(){
    int amountToDeposit;
    int accountNumber;
    int withdAmount;
    string wishToWithd;

    cout<<"Input the accountNumber and amount to deposit respectively"<<endl;
    cin>>accountNumber>>amountToDeposit;

    BankAccount myAccount;
    myAccount.depositMoney(accountNumber, amountToDeposit);

    cout<<"Do you wish to withdraw? y or n"<<endl;
    cin>>wishToWithd;
    transform(wishToWithd.begin(), wishToWithd.end(), wishToWithd.begin(), ::tolower);

    if(wishToWithd=="y"){

        cout<<"Input amount to withdraw"<<endl;
        cin>>withdAmount;
        myAccount.withdrawMoney(withdAmount);
    }

    return 0;
}