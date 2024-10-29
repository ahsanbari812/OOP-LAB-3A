#include <iostream>
using namespace std;

class Character {
protected:
    int health, damage;

public:
    Character(int h, int d) : health(h), damage(d) {}

    void display() {
        cout << "Health: " << health << ", Damage: " << damage << endl;
    }
};

class Enemy : public Character {
public:
    Enemy(int h, int d) : Character(h, d) {}

    void display() {
        cout << "Enemy - ";
        Character::display();
    }
};

class Player : public Character {
public:
    Player(int h, int d) : Character(h, d) {}

    void display() {
        cout << "Player - ";
        Character::display();
    }
};

class Wizard : public Player {
    int magicPower;
    string spells;

public:
    Wizard(int h, int d, int mp, string s)
        : Player(h, d), magicPower(mp), spells(s) {}

    void display() {
        Player::display();
        cout << "Magic Power: " << magicPower << ", Spells: " << spells << endl;
    }
};

int main() {
    Wizard wizard(100, 30, 80, "Fireball");
    wizard.display();
    return 0;
}
