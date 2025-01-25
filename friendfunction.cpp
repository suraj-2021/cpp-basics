#include<stdio.h>
#include<iostream>

using namespace std;

class Two;
class One 
{
    int a;
    public:
    void get_a(void);
    friend int min(One,Two);
};

class Two{
    int b;
    public:
    void get_b(void);
    friend int min(One,Two);
    
};

void One::get_a(){
    cout<<"Provide value for a: "<<endl;
    cin>>a;
}

void Two::get_b(){
    cout<<"Provid value for b: "<<endl;
    cin>>b;
}

int min(One o, Two t){
    o.get_a();
    t.get_b();
    int min;
    if(o.a<t.b){
        min = o.a;
        cout<<"Min is : "<<min<<endl;
        return 0;
        
    } else if(o.a == t.b){
      cout<<"Both are equal";
      return 0;
    }
    else {
        min = t.b;
        cout<<"Min is : "<<min<<endl;
    }
   
   return 0;
}

int main(){
    One o;
    Two t;
    
    min(o,t);
    
    return 0;
}
