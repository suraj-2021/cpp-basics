#include<iostream>

using namespace std;


class Classic
{
    int real,imaginary;
    public:
    Classic(int a, int b){
        real = a;
        imaginary = b;
    }
    
    friend void operator-(Classic &c1);
    
    void display(){
        cout<<"The real is :"<<real<<endl;
        cout<<"Imaginary is "<<imaginary<<endl;
    }
    
};

void operator -(Classic &c1){
    c1.real= -c1.real;
    c1.imaginary =  -c1.imaginary;
}


int main(){
    Classic c1(100,200);
    
    c1.display();
    
    -c1;
    c1.display();
    
    
    return 0;
    
}
