#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

int main(){
    char name[80];
    cin>>name;
    
    int length = strlen(name);
    
    fstream file;
    file.open("example.txt",ios::in|ios::out);
    
    if(file.is_open()){
        for(int i=0;i<length;i++){
            file.put(name[i]);
        }
    }
    file.seekg(0);
    char ch;
    
    while(file){
        file.get(ch);
        cout<<ch;
    }
    
    return 0;
}

