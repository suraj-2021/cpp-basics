

#include<iostream>
using namespace std;

class Complex{
    private:
    double real;
    double imag;
    
    public:
    //default constructor
    Complex(){
        real = 0;
        imag = 0;
    }
    
    Complex(double a, double b){
        real =a;
        imag =b;
    }
    
    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    
    Complex operator +(const Complex &obj){
        Complex temp;
        
        temp.real = this->real + obj.real;
        
        temp .imag = this->imag +obj.imag;
        
        return temp;
        
    }
};

int main(){
    Complex c1(3.33,4.44);
    Complex c2(5.55,6.66);
    
    Complex c3 = c1+c2;
    
    cout<<"The result of addition is: ";
    c3.display();
    cout<<endl;
    
    return 0;
}
