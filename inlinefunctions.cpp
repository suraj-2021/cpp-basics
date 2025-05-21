#include<iostream>
#include<string>

using namespace std;

//non inline function
int add(int a, int b){
    return  a+b;
}

//inline function
inline int multiply(int a, int b){
    return a*b;
}

//class calculater for both inline and non-inline mehtods

class Calculator{
    public:
    //inline method
    int substract(int a, int b){
        return a-b;
    }
    
    //non-inline function,declared inside but defined outside
    int divide(int a,int b);
};

int Calculator::divide(int a, int b){
    if(b!=0){
        return a/b;
    }
    else{
        cout<<"ZeroDivisionError!"<<endl;
        return 0;
    }
}


int main(){
    int x=10;
    int y=5;
    //calling the regualr funtion
    cout<<"Addition Result: "<<add(x,y)<<endl;
    
    //calling non inline function
    cout<<"Multiplication Result: "<<multiply(x,y)<<endl;
    
    //accessing class methods - one inline and another non-inline
    
    Calculator c;
   cout<<"Subtraction Result: "<<c.substract(x,y)<<endl;
   cout<<"Division Result: "<<c.divide(x,y)<<endl;
   
   return 0;
}
