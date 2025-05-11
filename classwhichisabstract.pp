class Shape {
public:
    virtual double area() = 0; // Pure virtual function
};

class Rectangle : public Shape {
public:
    double area() override { return width * height; }
private:
    double width, height;
};
