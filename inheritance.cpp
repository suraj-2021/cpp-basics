#include<iostream>
#include <string.h>
using namespace std;


class Student{
    private:
    int roll;
    string name;
    string address;
    
    public:
    Student(string n,int r,string add){
        roll = r;
        name =n;
        address = add;
        
    }
    
    void displaydetails(){
        cout<<"Name of the student: "<<name<<endl;
        cout<<"Roll number of the student: "<<roll<<endl;
        cout<<"Address of the student: "<<address<<endl;
    }
};


class PGStudent:public Student{
      private:
      string subject;
      
      public:
      PGStudent(string n,int r,string add,string sub):Student(n,r,add){
          subject = sub;
      }
      
      void PGStudentdisplay(){
          displaydetails();
          cout<<"Name of the subject is: "<<subject<<endl;
      }
      
};


int main(){
    PGStudent s1("Nav",25,"123 Address","New Subject");
    
    s1.PGStudentdisplay();
    
    return 0;
    
}
