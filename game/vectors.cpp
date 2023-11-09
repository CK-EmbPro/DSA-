#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> g1;

    for(int i = 0; i <10; i++){
        g1.push_back(i);
    }

    

    for(vector<int>::reverse_iterator it = g1.rbegin();it!=g1.rend();++it){
        cout<<"The element is "<<*it<<endl;
    }
   
    // cout<<"The last element is "<<endl;
    
    return 0;
}