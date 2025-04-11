#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

class Shape {
public:
    virtual double area() = 0;
    virtual void display() = 0;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() override { return 3.14159 * radius * radius; }
    void display() override { cout << "Circle with radius " << radius << endl; }
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() override { return width * height; }
    void display() override { cout << "Rectangle with width " << width << " and height " << height << endl; }
};

int main() {

    cout << "Compile-time Polymorphism (Templates):" << endl;
    int intSum = add(5, 7);
    double doubleSum = add(5.5, 7.7);
    cout << "Sum of integers: " << intSum << endl;
    cout << "Sum of doubles: " << doubleSum << endl;


    cout << "\nRuntime Polymorphism (Virtual functions):" << endl;
    Shape* circle = new Circle(5.0);
    Shape* rectangle = new Rectangle(4.0, 6.0);

    circle->display();
    cout << "Area: " << circle->area() << endl;

    rectangle->display();
    cout << "Area: " << rectangle->area() << endl;

    delete circle;
    delete rectangle;

    return 0;
}
