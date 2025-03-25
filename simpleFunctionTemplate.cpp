#include<iostream>
using namespace std;


template<typename  T>

T SUM(T value1, T value2){
    return value1+value2;
}


int main(){
    int integerResult;
    float floatResult;
    double doubleResult;
    
    integerResult=SUM(10,5);
    floatResult = SUM(10.15,5.25);
    doubleResult = SUM(10.111,15.1515);
    
    cout<<"Integer Result: "<<integerResult<<endl;
    cout<<"Float Result: "<<floatResult<<endl;
    cout<<"Double Result: "<<doubleResult<<endl;
    
    return 0;
    
}
