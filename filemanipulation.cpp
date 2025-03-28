#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Open the file
    ofstream file("example.txt", ios::app);

   
    if (!file.is_open()) {
        cerr << "Error: Could not open the file!" << endl;
        return 1;
    }

    // Append text to the file
    file << "my cpp file" << endl;

    // Close the file
    file.close();

    cout << "Text appended successfully!" << endl;

    return 0;
}
