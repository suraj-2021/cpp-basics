#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Dog dog1;
    cout << "Dog Class:" << endl;
    dog1.eat();  // Inherited from Animal
    dog1.bark(); // Dog's own function

    Cat cat1;
    cout << "\nCat Class:" << endl;
    cat1.eat();  // Inherited from Animal
    cat1.meow(); // Cat's own function

    return 0;
}
