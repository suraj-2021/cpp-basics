#include<iostream>
#include<conio.h>
#include <cstring>

using namespace std;

class Student {
      int rno;
      char name[30];
      
      public:
      Student(){
          rno = 10;
          strcpy(name,"x");
      }
      Student(Student &O){
          rno = O.rno;
          strcpy(name,O.name);
      }
      
      void take_inputs(){
          cout<<"Prove Name: "<<endl;
          cin>>name;
          cout<<"Roll Number: "<<endl;
          cin>>rno;
      }
      
      void print_details(){
          cout<<"Name is : "<<name<<endl;
          cout<<"Roll Number : "<<rno<<endl;
      }
      
};


int main(){
    
    Student B;
    B.take_inputs();
    
    Student A(B);
    A.print_details();
    
    return 0;
}


