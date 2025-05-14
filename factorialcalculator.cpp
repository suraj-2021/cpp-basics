#include <iostream>

class Factorial {
private:
    int number;

public:
    // Constructor
    Factorial(int num = 0) {
        number = num;
    }

    // Method to set number
    void setNumber(int num) {
        number = num;
    }

    // Method to calculate factorial
    long long calculate() {
        if (number < 0) {
            std::cout << "Factorial not defined for negative numbers" << std::endl;
            return -1;
        }
        
        if (number == 0 || number == 1) {
            return 1;
        }
        
        long long result = 1;
        for (int i = 2; i <= number; i++) {
            result *= i;
        }
        return result;
    }

    // Method to display factorial
    void displayFactorial() {
        long long result = calculate();
        if (result != -1) {
            std::cout << "Factorial of " << number << " is: " << result << std::endl;
        }
    }
};

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    
    // Create factorial object
    Factorial fact(num);
    
    // Display the factorial
    fact.displayFactorial();
    
    return 0;
}
