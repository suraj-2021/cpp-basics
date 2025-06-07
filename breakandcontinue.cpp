#include<iostream>
using namespace std;


int main(){
    
    //demonstrating the break statement
    for(int i=0;i<10;i++){
        if(i==5){
            break;
        }
        cout<<"Result after implementin the Break:"<<i<<endl;
    }
    
    //demonstrating the continue statement
    for(int i=0;i<10;i++){
        if(i==5){
            continue;
        }
        cout<<"Output after continue statement: "<<i<<endl;
    }
    
    return 0;
    
    
}
