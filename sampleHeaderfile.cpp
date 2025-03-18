#ifndef CLIENTDATA_H 
#define CLIENTDATA_H  
#include <string> 
using namespace std; 

class ClientData 
{ 
public: 
    ClientData(int = 0, string = " ", string = " ", double = 0.0); 

    void setAccountNumber(int); 
    int getAccountNumber() const;  
    void setLastName(string); 
    string getLastName() const; 
    void setFirstName(string); 
    string getFirstName() const; 
    void setBalance(double); 
    double getBalance() const; 

private: 
    int accountNumber; 
    string lastName; 
    string firstName; 
    double balance; 
}; 

#endif
