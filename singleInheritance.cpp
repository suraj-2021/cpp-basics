#include<iostream>

using namespace std;

class A {
    int a;
    public:
    int b;
    void input_ab(void);
    void output_a(void);
    int get_a(void);
};

class B : public A 
{
    int c,d;
    public:
    void input_c(void);
    void display(void);
    void sum(void);
}; 

void A::input_ab(){
    cout<<"\n Enter the value of a and b: "<<endl;
    cin>>a>>b;
};

void A:: output_a()
{
    cout<<"\n The Value of a is : "<<a<<endl;
}

int A::get_a()
{
    return a;
}

void B:: input_c()
{
    cout<<"\n Enter the value of c: "<<endl;
    cin>>c;
}

void B ::sum()
{
    d= get_a() +b+c;
}

void B::display()
{
    cout<<"\n The value of b is :"<<b<<endl;
    cout<<"\n The value of c is : "<<c<<endl;
    cout<<"\n The value of d(Sum of a,b and c) is:  "<<d<<endl;
}


int main()
{
    B objb;
    
    objb.input_ab();
    objb.input_c();
    objb.output_a();
    objb.sum();
    objb.display();
    objb.b=0;
    objb.sum();
    objb.display();
    
    return 0;
}



