#include<iostream>
using namespace std;

void divide(int x,int y,int z){
    
    
    
    if((x-y)!=0){
        int r = z/(x-y);
        cout<<"Inside the function!"<<endl;
        cout<<"result is: "<<r<<endl;
    }
    
    else{
        throw(x-y);
    }
    
}

int main(){
    try{
    cout<<"Main Function"<<endl;
    divide(10,10,20);
    divide(20,10,40);
    }
    
    catch (int i) {
        cout<<"Exception caucht, thrown value is : "<<i<<endl;
    }
    
    return 0;
}
