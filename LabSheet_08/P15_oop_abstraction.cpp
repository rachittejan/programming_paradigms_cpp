#include <iostream>
#include <cmath>
using namespace std;

// Abstract Base Class: Shape
// Contains at least one pure virtual function (= 0)
class Shape {
public:
    // Pure virtual function: Makes Shape an abstract class. 
    // Derived classes MUST implement this function.
    virtual double area() const = 0; // 

    // Virtual destructor is good practice for base classes
    virtual ~Shape() {}
};

// Derived Class 1: Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    
    // Implementation of the pure virtual function
    double area() const override {
        return M_PI * radius * radius;
    }
};

// Derived Class 2: Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    // Implementation of the pure virtual function
    double area() const override {
        return length * width;
    }
};

int main() {
    // Shape* s = new Shape(); // This would fail because Shape is abstract

    // Create objects of concrete (non-abstract) derived classes
    Circle circle(5.0);
    Rectangle rect(4.0, 6.0);
    
    cout << "Area of Circle (Radius 5.0): " << circle.area() << endl;
    cout << "Area of Rectangle (4.0 x 6.0): " << rect.area() << endl;

    // Abstraction achieved: We focus on WHAT the object does (area()), not HOW it does it.
    
    return 0;
}