#include <iostream>
#include <cmath>

using namespace std;

// inheritance allows us a class (derived class/subclass) to inherit the properties and behaviors of another
// class (base case/superclass).
// it is a eay to create a hierarchy of classes, where the derived class can reuse the code and 
// functionality of the based class while adding its own specific features.
// public members of the base class become public members of the derived class, and protected and public
// members of the base class become private members of the derived class.

// polymorphism allows objects of different classes to be treated as objects of a common base class.
// this is achieved through inheritance and virtual functions

class Shape {   // base class
    public:
        Shape() {}  // constructor
        
        // base class virtual method to calculate area; 
        // virtual indicates that this function can be overridden (redefined) in the derived classes.
        virtual double calculateArea() const = 0;
};

// Derived class Circle inherits from Shape
class Circle : public Shape {
    private:
        double radius;

    public:
        // Circle constructor
        Circle(double radius) : radius(radius) {}

        // Method to calculate the area of the circle
        double calculateArea() const {
            return M_PI * radius * radius;
        }

        // public members of derived class; getter and setter methods
        void setRadius(double newR) {
            radius = newR;
        }

        double getRadius() {
            return radius;
        }
};

// Derived class Rectangle inherits from Shape
class Rectangle : public Shape {
    private:
        double length;
        double width;

    public:
        // Rectangle constructor
        Rectangle(double length, double width) : length(length), width(width) {}

        // Method to calculate the area of the rectangle
        double calculateArea() const {
            return length * width;
        }

        // public members of derived class; getter and setter methods
        double getWidth() {
            return width;
        }

        double getLength() {
            return length;
        }

        void setWidth(double newW) {
            width = newW;
        }

        void setLength(double newL) {
            length = newL;
        }
};

void shapeDemo() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    // Demonstrate inheritance and polymorphism
    Shape* shape1 = &circle;
    Shape* shape2 = &rectangle;

    cout << "Area of the circle: " << shape1->calculateArea() << endl;
    cout << "Area of the rectangle: " << shape2->calculateArea() << endl;
}

int main() {
    shapeDemo();

    return 0;
}