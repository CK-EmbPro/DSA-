#include<iostream>
#include<iomanip>
using namespace std;
namespace groupc{
    string thirdName = "Peter";

    int cout(int a, int b){
        return a*b+b;
    }
}

string john =  "John doe";
int main(){
    string fname = "Mary";
    cout << "Good afternoon"<<setw(10)<<fname << endl;
    cout << "Good morning "<<::john << endl;
    cout << "Good evening"<< groupc::thirdName<< endl;
    cout << "this is func in namespace region"<< groupc::cout(10,20)<<endl;

    double num= 12345.565443;
    cout << setprecision(3)<<fixed<<num <<endl;
    cout << setprecision(3)<<scientific<<num <<endl;

    return 0;
}