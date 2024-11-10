#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

class Shape {
public:
    double area(double radius) {
        return PI * radius * radius;
    }

    double area(double length, double width) {
        return length * width;
    }

    double area(double base, double height, bool isTriangle) {
        return 0.5 * base * height;
    }

    double perimeter(double radius) {
        return 2 * PI * radius;
    }

    double perimeter(double length, double width) {
        return 2 * (length + width);
    }

    double perimeter(double side1, double side2, double side3) {
        return side1 + side2 + side3;
    }
};

int main() {
    Shape shape;
    cout << "Circle Area: " << shape.area(5.0) << endl;
    cout << "Rectangle Area: " << shape.area(4.0, 6.0) << endl;
    cout << "Triangle Area: " << shape.area(3.0, 4.0, true) << endl;

    cout << "Circle Perimeter: " << shape.perimeter(5.0) << endl;
    cout << "Rectangle Perimeter: " << shape.perimeter(4.0, 6.0) << endl;
    cout << "Triangle Perimeter: " << shape.perimeter(3.0, 4.0, 5.0) << endl;

    return 0;
}
