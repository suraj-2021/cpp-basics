#include<iostream>
#include<conio.h>

using namespace std;

class Employee 
{
    int id;
    int age;
    char name[50];
    int salary;
    public:
    
    void create_info(void){
        cout<<"Provid Id: "<<endl;
        cin>>id;
        cout<<"Provide Age: "<<endl;
        cin>>age;
        cout<<"Provide Name: "<<endl;
        cin>>name;
        cout<<"Provide salary: "<<endl;
        cin>>salary;
        }
    
    void display_info(void){
        cout <<"\nID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main(){
    Employee e1,e2;
    cout<<"Provide Employeee 1st Detail: "<<endl;
    e1.create_info();
    cout<<"Provide Employeee 2nd Detail: "<<endl;
    e2.create_info();
    
    cout<<"1st Employee Details: "<<endl;
    e1.display_info();
    
    cout<<"2nd Employee Details: "<<endl;
    e2.display_info();
    
    return 0;
    
    
}




