#include <iostream>

using namespace std;

class cop {

private:
    int num;
    int fact;

public:
    cop(int temp) {
        num = temp;
    }

    double factorial() {
        fact = 1;
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        return fact;
    }
};

int main() {

    int n;
    cout << "Provide digit to find factorial" << endl;
    cin >> n;

    cop s1(n);
    cout << "Factorial of the given number is: " << s1.factorial() << endl;

    return 0;
}
