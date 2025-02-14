#include<iostream>
using namespace std;

class A 
{
   int a;
   public:
   void input_a(void);
   void display_a(void);
   int get_a(void);
};


class B : public A
{
  int b;
  public:
  void input_b(void);
  void display_b(void);
  int get_b(void);
};


 class C : public B
 {
     int c,d;
     public:
     void input_c(void);
     void display_c(void);
     void display_sum(void);
     int sum();
 };
 
 
 void A::input_a()
 {
    cout<<"Provide the Value of A: "<<endl;
    cin>>a;
 }
 
 void A :: display_a(){
     cout<<"The value of A that you provided is : "<<a<<endl;
 }
 
 int A ::  get_a()
 {
     return a;
 } 
 
 
 void B::input_b(){
     cout<<"Provide the value of B"<<endl;
     cin>>b;
 }
 
 void B:: display_b()
 {
     cout<<"The value of B that you provide is : "<<b<<endl;
 }
 
 int B :: get_b(){
     return b;
 }
 

void C::input_c(){
    cout<<"Provide the value of C"<<endl;
    cin>>c;
}

void C:: display_c()
{
    cout<<"The value of C that you provided is : "<<c<<endl;
}
 
int C::sum()
{
   return  d = get_a()+get_b()+c;
}
 
 
void C:: display_sum(){
    
    cout<<"The sum of the given numbers(a,b,c) is : "<< sum() <<endl;
    
}


int main()
{
   C objc;
   
   objc.input_a();
   objc.display_a();
   
   objc.input_b();
   objc.display_b();
   
   objc.input_c();
   objc.display_c();
   
   objc.sum();
   objc.display_sum();
   
   return 0;
}
