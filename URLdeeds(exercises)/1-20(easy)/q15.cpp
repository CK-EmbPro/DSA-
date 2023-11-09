#include<iostream>
#include<ctime>
using namespace std;

void currentTimeDate(){
    time_t currentTime;// argument for time() function 
    struct tm* ti;//member for storing the return of localtime()
    time(&currentTime);//for time string modification

    ti = localtime(&currentTime);//After t-string modification is passed to localtime() function

    // asctime(ti)  this is for human-readable time string

    cout<<"The current day, date and time of today are: "<<asctime(ti)<<endl; 
      
}

int main(){

    currentTimeDate();
    return 0;
}