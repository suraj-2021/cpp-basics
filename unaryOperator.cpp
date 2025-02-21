#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;


class Classic
{
    int real,imaginary;
    public:
    Classic(int a,int b){
        real = a;
        imaginary =b;
    }
    
    void operator -();
    
    void display(){
        cout<<"Real: "<<real<<endl;
        cout<<"Imaginary: "<<imaginary<<endl;
    }
    
   
       
};

void Classic :: operator -(){
     real = -real;
     imaginary = -imaginary;
    
}

int main(){

    
    Classic c1(10,15);
    
    c1.display();
    
    -c1;
    
    c1.display();

    getch();
    return 0;
}


