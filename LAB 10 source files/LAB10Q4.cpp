#include <iostream>
using namespace std;

class Perimeter {
private:
    double length, breadth;
public:
    Perimeter(double l, double b) : length(l), breadth(b) {}

    friend class PrintClass;
};

class PrintClass {
public:
    void displayPerimeter(Perimeter &p) {
        double perimeter = 2 * (p.length + p.breadth);
        cout << "Perimeter: " << perimeter << endl;
    }
};

int main() {
    Perimeter p(6.3, 4.3);
    PrintClass print;

    print.displayPerimeter(p);

    return 0;
}
