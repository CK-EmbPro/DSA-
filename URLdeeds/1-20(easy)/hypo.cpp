#include<iostream>
#include<cmath>
using namespace std;

void findPairs(){
    int count=0;
    for(int a = 0; a <100; a++){
        for(int b = 0; b < 100; b++){
            int c_squared = (a*a) + (b*b);
            int c = static_cast<int>(sqrt(c_squared));

            if(c*c == c_squared){
                cout<<"("<<a<<","<<b<<")"<<endl;
                ++count;
            }
        }
    }

    cout<<"Total of pairs is "<<count<<endl;
}

int main(){
    findPairs();
    return 0;
}