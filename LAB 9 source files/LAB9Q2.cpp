#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double area() const { return 0.0; }
    virtual double perimeter() const { return 0.0; }
    virtual void displayProperties() const {}
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override { return 3.14159 * radius * radius; }
    double perimeter() const override { return 2 * 3.14159 * radius; }
    void displayProperties() const override {
        cout << "Circle - Area: " << area() << ", Perimeter: " << perimeter() << endl;
    }
};

class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() const override { return length * width; }
    double perimeter() const override { return 2 * (length + width); }
    void displayProperties() const override {
        cout << "Rectangle - Area: " << area() << ", Perimeter: " << perimeter() << endl;
    }
};

class Triangle : public Shape {
    double side1, side2, side3;
public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}
    double area() const override {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
    double perimeter() const override { return side1 + side2 + side3; }
    void displayProperties() const override {
        cout << "Triangle - Area: " << area() << ", Perimeter: " << perimeter() << endl;
    }
};

int main() {
    Shape* shape;
    int choice;
    cout << "Select a shape (1: Circle, 2: Rectangle, 3: Triangle): ";
    cin >> choice;

    if (choice == 1) {
        double radius;
        cout << "Enter radius: ";
        cin >> radius;
        shape = new Circle(radius);
    } else if (choice == 2) {
        double length, width;
        cout << "Enter length and width: ";
        cin >> length >> width;
        shape = new Rectangle(length, width);
    } else if (choice == 3) {
        double s1, s2, s3;
        cout << "Enter three sides: ";
        cin >> s1 >> s2 >> s3;
        shape = new Triangle(s1, s2, s3);
    } else {
        cout << "Invalid choice!" << endl;
        return 1;
    }

    shape->displayProperties();
    delete shape;

    return 0;
}
