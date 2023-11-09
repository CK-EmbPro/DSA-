#include<iostream>
using namespace std;

int primeProduct(){
    int limit = 5;
    int product = 1;

    for(int num = 2; num < limit; ++num){

        int ctr=1;

        for(int i=2; i<= (num/2); ++i){
            if(num%i==0){
                ctr=0;
                break;
            }
        }

        if(ctr==1){
            product *= num;
        }
    } 

    return product;
}

int main(){
    int product;

    product = ::primeProduct();

    cout<<"The product of prime numbers from 1 to 100 is "<<product<<endl;
    return 0;
}




// #include <iostream>
// #include <cmath>
// using namespace std;

// int primeProduct() {
//     int product = 1;
//     int limit = 100;

//     for (int number = 2; number <limit; ++number) {
//         int ctr = 1; // Initialize to 1 for non-prime

//         for (int j = 2; j <= (number/2); ++j) {
//             if (number % j == 0) {
//                 ctr = 0; // Set to 0 when a factor is found (non-prime)
//                 // break; // Exit the inner loop as soon as a factor is found
//             }
//         }

//         if (ctr == 1) {
//             product *= number; // Multiply prime numbers
//         }
//     }

//     return product;
// }

// int main() {
//     int product = primeProduct();

//     cout << "The product of prime numbers between 1 and 100 is: " << product << endl;

//     return 0;
// }
