#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void displayForm() {
    cout << "\n================================\n";
    cout << "        USER REGISTRATION       \n";
    cout << "================================\n";
}

void clearScreen() {
    cout << "\033[2J\033[1;1H";
}

void displayMenu() {
    cout << "\n--- MENU ---\n";
    cout << "1. Register User\n";
    cout << "2. Display User Info\n";
    cout << "3. Exit\n";
    cout << "Choose an option (1-3): ";
}

int main() {
    string name, email, phone;
    int age, choice;
    bool hasData = false;

    while (true) {
        displayMenu();
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: {
                clearScreen();
                displayForm();
                cout << "\nEnter your details:\n";
                cout << "-------------------\n";
                cout << "Name: ";
                getline(cin, name);
                cout << "Age: ";
                cin >> age;
                cin.ignore();
                cout << "Email: ";
                getline(cin, email);
                cout << "Phone: ";
                getline(cin, phone);
                hasData = true;
                cout << "\n✓ Registration successful!\n";
                cout << "Press Enter to continue...";
                cin.get();
                break;
            }
            case 2: {
                clearScreen();
                if (!hasData) {
                    cout << "\nNo user data found! Please register first.\n";
                } else {
                    cout << "\n================================\n";
                    cout << "        USER INFORMATION        \n";
                    cout << "================================\n";
                    cout << left << setw(10) << "Name:" << name << endl;
                    cout << left << setw(10) << "Age:" << age << endl;
                    cout << left << setw(10) << "Email:" << email << endl;
                    cout << left << setw(10) << "Phone:" << phone << endl;
                    cout << "================================\n";
                }
                cout << "Press Enter to continue...";
                cin.get();
                break;
            }
            case 3: {
                cout << "\nThank you for using our form!\n";
                cout << "Goodbye!\n";
                return 0;
            }
            default: {
                cout << "\nInvalid choice! Please select 1-3.\n";
                cout << "Press Enter to continue...";
                cin.get();
                break;
            }
        }
    }
    return 0;
}
