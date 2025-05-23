#include <iostream>
#include <vector>
#include <memory>

class Shape {
protected:
    std::string name;
    
public:
    Shape(const std::string& shapeName) : name(shapeName) {}
    virtual double calculateArea() = 0;
    virtual void display() {
        std::cout << "Shape: " << name << std::endl;
    }
    virtual ~Shape() = default;
    std::string getName() const {
        return name;
    }
};

class Rectangle : public Shape {
private:
    double width, height;
    
public:
    Rectangle(double w, double h) : Shape("Rectangle"), width(w), height(h) {}
    double calculateArea() override {
        return width * height;
    }
    void display() override {
        Shape::display();
        std::cout << "Dimensions: " << width << " x " << height << std::endl;
        std::cout << "Area: " << calculateArea() << std::endl;
    }
};

class Circle : public Shape {
private:
    double radius;
    static constexpr double PI = 3.14159;
    
public:
    Circle(double r) : Shape("Circle"), radius(r) {}
    double calculateArea() override {
        return PI * radius * radius;
    }
    void display() override {
        Shape::display();
        std::cout << "Radius: " << radius << std::endl;
        std::cout << "Area: " << calculateArea() << std::endl;
    }
};

class Triangle : public Shape {
private:
    double base, height;
    
public:
    Triangle(double b, double h) : Shape("Triangle"), base(b), height(h) {}
    double calculateArea() override {
        return 0.5 * base * height;
    }
    void display() override {
        Shape::display();
        std::cout << "Base: " << base << ", Height: " << height << std::endl;
        std::cout << "Area: " << calculateArea() << std::endl;
    }
};

void printShapeInfo(Shape* shape) {
    shape->display();
    std::cout << "Calculated area: " << shape->calculateArea() << std::endl;
    std::cout << "------------------------" << std::endl;
}

int main() {
    Rectangle rect(5.0, 3.0);
    Circle circle(4.0);
    Triangle triangle(6.0, 4.0);
    
    std::cout << "=== Individual Shape Display ===" << std::endl;
    rect.display();
    std::cout << std::endl;
    
    circle.display();
    std::cout << std::endl;
    
    triangle.display();
    std::cout << std::endl;
    
    std::cout << "=== Polymorphic Behavior ===" << std::endl;
    std::vector<std::unique_ptr<Shape>> shapes;
    shapes.push_back(std::make_unique<Rectangle>(10.0, 2.0));
    shapes.push_back(std::make_unique<Circle>(3.0));
    shapes.push_back(std::make_unique<Triangle>(8.0, 5.0));
    
    double totalArea = 0.0;
    for (const auto& shape : shapes) {
        printShapeInfo(shape.get());
        totalArea += shape->calculateArea();
    }
    
    std::cout << "Total area of all shapes: " << totalArea << std::endl;
    
    return 0;
}
