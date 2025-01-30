#include<iostream>

using namespace std;

class Student
{
    char name[50];
    int rno;
    
    public:
    Student(string,int);
    
    
};

Student :: Student(string name, int r) {
    name = name;
    rno = r;
    cout<<"Name is :"<<name<<endl;
    cout<<"Roll no: "<<rno<<endl;
    
}

int main(){
    Student s1("Hari",21);
    
    return 0;
}
