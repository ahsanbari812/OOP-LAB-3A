#include <iostream>
using namespace std;

class Shape {
public:
    double area;

    Shape(double a) : area(a) {}

    Shape operator+(const Shape &s) {
        return Shape(area + s.area);
    }

    void display() {
        cout << "Total Area: " << area << endl;
    }
};

int main() {
    Shape shape1(17.5);
    Shape shape2(30);

    Shape totalArea = shape1 + shape2;
    totalArea.display();

    return 0;
}
