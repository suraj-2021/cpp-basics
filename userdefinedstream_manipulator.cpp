#include<iostream>
#include<iomanip>

using namespace std;

//user defined stream manipulator

ostream& curr(ostream& os){
    os<<setw(10);
    os<<fixed<<setprecision(2);
    os<<"MyCurrency. ";
    
    return os;
}

int main(){
    double number = 1920.56788;
    cout<<curr<<number<<endl;
    
    return 0;
}
