#include <iostream>
using namespace std;

class Position {
protected:
    int x, y, z;

public:
    Position(int xPos, int yPos, int zPos) : x(xPos), y(yPos), z(zPos) {}

    void displayPosition() {
        cout << "Position - X: " << x << ", Y: " << y << ", Z: " << z << endl;
    }
};

class Health {
protected:
    int health;

public:
    Health(int h) : health(h) {}

    void displayHealth() {
        cout << "Health: " << health << endl;
    }
};

class Character : public Position, public Health {
public:
    Character(int x, int y, int z, int h) : Position(x, y, z), Health(h) {}

    void display() {
        displayPosition();
        displayHealth();
    }
};

int main() {
    Character character(10, 20, 30, 100);
    character.display();
    return 0;
}
