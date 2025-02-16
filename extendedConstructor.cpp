#include<iostream>

using namespace std;


class A 
{
    private:
    int a;
    
    protected:
    int b;
    
    public:
    A(int i,int j){
        a=i;
        b=j;
        cout<<"A is successfully Initialized"<<endl;
    }
    
    void display_ab(){
        cout<<"The value of A is : "<<a<<endl;
        cout<<"The value of B is : "<<b<<endl;
    }
    
    int get_a(){
        return a;
    }
};

class B 
{
    private:
    int c;
    protected:
    int d;
    
    public:
    B(int i,int j){
        c=i;
        d=j;
    }
    
    void display_cd(){
        cout<<"The value of C is : "<<c<<endl;
        cout<<"The value of d is : "<<d<<endl;
        
    }
    
    int get_c(){
        return c;
    }
 
};



class C : public A,public B 
{
    int e,f,total;
    
    public:
    C (int m,int n,int o,int p,int q,int r) : A(m,n), B(o,p){
        e=o;
        f=r;
    }
    
    void display_ef(){
        cout<<"The of of E is : "<<e<<endl;
        cout<<"The value of F is : "<<f<<endl;
    }
    
    int sum(){
        total = get_a()+b+get_c()+d+e+f;
        
        return total;
    }
    
    void display_sum(){
        cout<<"The total sum of the value (a,b,c,d,e,f) is : "<<sum()<<endl;
    }
    
};


int main(){
    C objc(5,5,5,5,5,5);
    objc.display_ab();
    objc.display_cd();
    objc.display_ef();
    objc.sum();
    objc.display_sum();
    
    return 0;
}
