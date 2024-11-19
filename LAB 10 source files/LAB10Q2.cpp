#include <iostream>
using namespace std;

class Number {
public:
    int value;
    Number(int val) : value(val) {}

    Number& operator--() { // Prefix
        value *= 4;
        return *this;
    }

    Number operator--(int) { // Postfix
        Number temp = *this;
        value /= 4;
        return temp;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num(8);

    --num;
    num.display();

    num--;
    num.display();

    return 0;
}
