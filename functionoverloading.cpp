#include <iostream>
#include <string>

void print(int num) {
    std::cout << "print(int): " << num << std::endl;
}

void print(double num) {
    std::cout << "print(double): " << num << std::endl;
}

void print(const std::string& str) {
    std::cout << "print(string): " << str << std::endl;
}

void display(int a) {
    std::cout << "display(int): " << a << std::endl;
}

void display(int a, int b) {
    std::cout << "display(int, int): " << a << ", " << b << std::endl;
}

int main() {
    print(10);
    print(10.5);
    print("Hello");
    
    display(100);
    display(100, 200);
    
    print('A');
    
    return 0;
}
