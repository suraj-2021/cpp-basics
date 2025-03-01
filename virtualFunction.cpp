#include<iostream>

using namespace std; 

class Faculty {
    int FacultyID;
    char FacultyName[20];
    char Salary;
    
    public:
    virtual void CalculateSalary(){
        cout <<"Base Class Salary!"<<endl;
    }
};


class FacultyOne : public Faculty{
    
    public:
    virtual void CalculateSalary() override {
        cout<<"Faculty One Salary!"<<endl;
    }
};

class FacultyTwo : public Faculty{
    public:
    virtual void CalculateSalary() override{
        cout<<"Faculty Two Salary!"<<endl;
    }
};

int main(){
    Faculty * fptr;
    FacultyOne fone;
    FacultyTwo ftwo;
    
    fptr = &fone;
    fptr ->CalculateSalary();
    
    fptr = &ftwo;
    fptr ->CalculateSalary();
return 0;
    
}
