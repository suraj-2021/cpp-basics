#include<iostream>
#include<conio.h>

using namespace std;

class stu
{
    private:
    char name[30], address[30];
    int roll=0,zip=0;
    
    public:
    stu();//constructor
    ~stu();//destructor
    
    void get_data();
    void print_data();
};


stu::stu(){
    cout<<"This is Constructor from the STU class"<<endl;
}

void stu::get_data(){
     cout<<"Provide Name: "<<endl;
     cin>>name;
     cout<<"Provide Address: "<<endl;
     cin>>address;
     cout<<"Provide Roll: "<<endl;
     cin>>roll;
     cout<<"Provide ZIP: "<<endl;
     cin>>zip;
     cout<<"Thanks for providing details!!"<<endl;
     
}

void stu::print_data(){
    cout<<"NAME: "<<name<<endl;
    cout<<"ADDRESS: "<<address<<endl;
    cout<<"ROLL: "<<roll<<endl;
    cout<<"ZIP: "<<zip<<endl;
    
}

 stu :: ~stu( ) 
 { 
  cout<<"Student Detail is Closed"<<endl; 
 }

int main(){
    stu s;
    s.get_data();
    s.print_data();
    
    
    
    return 0;
    
}
