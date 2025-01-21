#include<iostream>

using namespace std;

class Myclass
{   
    public:
    int n;
    int numbers[100];
    int max;
    
    void input(void);
    void find_max(void);
    void display(void);
    
};

void Myclass::input(){
    
    cout<<"how many numbers are there: "<<endl;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cout<<"Provide index number: "<<i+1<<endl;
        cin>>numbers[i];
    }
}

void Myclass :: find_max(){
     max = numbers[0];
     
     for(int i=1;i<n;i++){
         if(max<numbers[i]){
             max=numbers[i];
         }
     }
     
}

void Myclass:: display(){
    cout<<"The Max number is : "<<max<<endl;
}


int main(){
    Myclass e1;
    
    e1.input();
    e1.find_max();
    e1.display();
    
    return 0;
}
