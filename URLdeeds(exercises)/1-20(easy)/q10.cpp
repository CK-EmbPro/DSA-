#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float a,b,c,x1, x2, discriminant, realPart, imaginaryPart;
    
    cout<<"Enter the coefficients of the quadratic equation "<<endl;
    cin>>a>>b>>c;
    
    discriminant = pow(b,2)-(4*a*c);

    if(discriminant>0){
        cout<<"The roots are real and different "<<endl;
        x1 = (-b+(sqrt(discriminant)))/(2*a);
        x2 = (-b-(sqrt(discriminant)))/(2*a);

        cout<<"Root x1= "<<x1<<endl;
        cout<<"Root x2= "<<x2<<endl;

    }
     else if(discriminant==0){
        cout<<"The roots are real and same ";
        x1 = (-b)/(2*a);
        

        cout<<"Root x1=x2 "<<x1<<endl;
       
    }

    else{
        cout<<"The roots are complex and imaginary "<<endl;
        imaginaryPart = sqrt(-discriminant)/(2*a);
        realPart = (-b)/(2*a);

        cout<<"x1="<<realPart<<"+"<<imaginaryPart<<"i"<<endl;
        cout<<"x2="<<realPart<<"-"<<imaginaryPart<<"i"<<endl;


    }



    return 0;
}