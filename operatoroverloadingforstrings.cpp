#include <iostream>
#include <string>
using namespace std;

class MyString {
private:
    string str;

public:
    // Constructor to initialize string
    MyString(string s = "") : str(s) {}

    // Overloading the '+' operator
    MyString operator+(const MyString& other) {
        return MyString(str + other.str); // Concatenating strings
    }

    // Function to display the string
    void display() const {
        cout << str << endl;
    }
};

int main() {
    MyString s1("Hello");
    MyString s2(" World");

    // Using overloaded '+' operator
    MyString s3 = s1 + s2;

    // Displaying the result
    s3.display(); // Output: Hello World

    return 0;
}
