#include<iostream>
#include<algorithm>

using namespace std;



void ascFunc(int &num1, int &num2, int &num3){
    int lowest, middle, highest;
    if(num2<num1){
        int temp= num1;
        num1=num2;
        num2 = temp;
        
    }else if(num3<num1){
       int temp = num1;
       num1=num3;
       num3 = temp;
    }else if(num3<num2){
        int temp = num2;
        num2=num3;
        num3 = temp;
        
    }
    cout<<"The lowest is "<<num1<<endl<<"The middle is "<<num2<<endl<<"The highest is "<<num3<<endl;


}

int main(){
    int num1, num2, num3;
    cout<<"Input the values of the num2 to be sorted"<<endl;
    cin>>num1>>num2>>num3;

    ascFunc(num1, num2, num3);
    return 0;
}

// Other alteratives 


///////////////////////When using sort functionality
// #include<iostream>
// #include<algorithm>
// using namespace std;

// void arrSort(int &num1, int &num2, int &num3){
//     int arr[]= {num1,num2,num3};
//     sort(arr, arr+3);

//     num1 = arr[0];
//     num2 = arr[1];
//     num3 = arr[2];

//     cout <<"The lowest is " << num1<<endl
//          <<"The middle is " << num2<<endl
//          <<"The highest is " << num3<<endl;

// }

// int main(){
//     int num1, num2, num3;
//     cout<<"Input the nums to be sorted"<<endl;
//     cin>>num1>>num2>>num3;

//     arrSort(num1, num2, num3);

//     return 0;
// }


//////////////// When using swap functionality

// #include<iostream>
// #include<algorithm>
// using namespace std;

// void arrSort(int num1, int num2, int num3){
//     if(num2<num1){
//         swap(num1, num2);
//     }else if(num3 <num1){
//         swap(num1, num3);
//     }else if(num3<num2){
//         swap(num2, num3);
//     }

//     cout<<"The lowest is "<<num1<<endl
//         <<"The middle is "<<num2<<endl
//         <<"The highest is "<<num3<<endl;
// }

// int main(){
//     int num1, num2, num3;
//     cout<<"Input the nums to sort"<<endl;
//     cin>>num1>>num2>>num3;
//     arrSort(num1, num2, num3);

//     cout<<"the value of num1"<<num1;
//     return 0;
// }