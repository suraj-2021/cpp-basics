#include<iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"provide x and y values: "<<endl;
    cin>>x;
    cin>>y;
    
   int a = x-y;
   try {
       if(a!=0){
           cout<<"Result of x/a is: "<<x/a<<endl;
       }
       else{
           throw(a);
       }
   }
   catch(int i){
       cout<<"Error Occured a="<<i<<endl;
   }
   
   return 0;
}
