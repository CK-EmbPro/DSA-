#include<iostream>
using namespace std;

namespace userDefined {
    int insideNamespace =10;
    int cout() {
        return userDefined::insideNamespace;
    }
}

int myGlobal = 20;
int cout(){
    return ::myGlobal*::myGlobal;
}

int main(){
    int cout = 30;
    std::cout<<"The local variable cout in main is"<<cout<<std::endl;
    std::cout<<"The variable in userDefined namespace is"<<userDefined::insideNamespace<<std::endl;
    std::cout<<"THe output of cout() in userDefined is "<<userDefined::cout<<std::endl;
    std::cout<<"The variable in userDefined namespace is"<<userDefined::insideNamespace<<std::endl;
    std::cout<<"TThe value in global func is "<<cout()<<std::endl;
    
    

    return 0;
}



// There is a problem in the functions both in the namespace and the global ones