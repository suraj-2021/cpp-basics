#include <iostream>
#include <string>

using namespace std;

// Base class Account
class Account {
protected:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    // Constructor
    Account(int accNum, string holder, double bal) {
        accountNumber = accNum;
        accountHolder = holder;
        balance = bal;
    }

    // Method to display account details
    void displayDetails() {
        cout << "Account Details:" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
    }
};

// Derived SavingAccount class
class SavingAccount : public Account {
private:
    double interestRate;

public:
    // Constructor that calls the base class constructor
    SavingAccount(int accNum, string holder, double bal, double rate)
        : Account(accNum, holder, bal) {
        interestRate = rate;
    }

    // Method to display saving account details
    void displayDetails() {
        cout << "Saving Account Details:" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

int main() {
    // Create an Account object
    Account regularAccount(1001, "John Doe", 5000.0);
    
    // Create a SavingAccount object
    SavingAccount savingAccount(2001, "Jane Smith", 10000.0, 3.5);
    
    // Display details of both accounts
    cout << "Regular ";
    regularAccount.displayDetails();
    
    cout << "\nSaving ";
    savingAccount.displayDetails();
    
    return 0;
}
