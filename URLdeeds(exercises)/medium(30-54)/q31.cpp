#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> findFactors(int num){
    vector<int> numFactors;

    for(int i = 0; i <= num; i++){
        if(i ==0){
            continue;
        }
        if(num%i ==0){
            numFactors.push_back(i);
        }
    }

    return numFactors;    
}

void findMinDist(vector<int> factors){
     int minDist = INT_MAX;
    int factLen = factors.size();

    for(int i = 0; i<factLen; i++){
        int loopedMinDist;
        for(int j = i+1; j<factLen; j++){
            loopedMinDist = abs(factors[j]-factors[i]);
            if(loopedMinDist < minDist){
                minDist = loopedMinDist;
            };
        }
    }

    cout<<"The minimum distance between the factos is "<<minDist<<endl;
   
}

int main(){
    int num;
    cout<<"Input a number to find its factors"<<endl;
    cin>>num;
    vector<int> factors = findFactors(num);

    if(factors.empty()){
        cout<<"No factors were found!"<<endl;
    }else{
        int factLen = factors.size();
        cout<<"Factors found are: "<<endl;
        for(int i = 0; i < factLen; i++){
            cout<<factors[i]<<endl;
        }

         findMinDist(factors);
    }
    
    return 0;
}