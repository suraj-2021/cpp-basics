#include <iostream>
#include <memory>
#include <string>
#include <unordered_map>
#include <functional>

class Shape {
public:
    virtual ~Shape() = default;
    virtual void draw() const = 0;
    virtual std::unique_ptr<Shape> clone() const = 0;
};

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a Circle" << std::endl;
    }
    
    std::unique_ptr<Shape> clone() const override {
        return std::make_unique<Circle>(*this);
    }
};

class Rectangle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a Rectangle" << std::endl;
    }
    
    std::unique_ptr<Shape> clone() const override {
        return std::make_unique<Rectangle>(*this);
    }
};

// Shape Factory
class ShapeFactory {
private:
    using CreateFn = std::function<std::unique_ptr<Shape>()>;
    static std::unordered_map<std::string, CreateFn> factoryMap;
    
public:
    // Register shape types with the factory
    static void registerShape(const std::string& type, CreateFn creator) {
        factoryMap[type] = creator;
    }
    
    // Create shape by type - virtual constructor
    static std::unique_ptr<Shape> createShape(const std::string& type) {
        auto it = factoryMap.find(type);
        if (it != factoryMap.end()) {
            return it->second();
        }
        return nullptr;
    }
};

// Initialize the factory map
std::unordered_map<std::string, ShapeFactory::CreateFn> ShapeFactory::factoryMap;

// Registration helper
template <typename T>
class ShapeRegistrar {
public:
    ShapeRegistrar(const std::string& type) {
        ShapeFactory::registerShape(type, []() { return std::make_unique<T>(); });
    }
};

int main() {
    // Register shape types with the factory
    ShapeRegistrar<Circle> circleReg("circle");
    ShapeRegistrar<Rectangle> rectReg("rectangle");
    
    // Use the factory to create objects without knowing concrete types
    auto circle = ShapeFactory::createShape("circle");
    auto rectangle = ShapeFactory::createShape("rectangle");
    
    if (circle) circle->draw();
    if (rectangle) rectangle->draw();
    
    // Create a copy of an object using clone (another form of virtual constructor)
    auto circleCopy = circle->clone();
    circleCopy->draw();
    
    return 0;
}
