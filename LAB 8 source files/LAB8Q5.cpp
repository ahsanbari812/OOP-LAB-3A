#include <iostream>
using namespace std;

class Vehicle {
protected:
    string make, model;
    int year;

public:
    Vehicle(string mk, string mdl, int yr) : make(mk), model(mdl), year(yr) {}

    void display() {
        cout << "Make: " << make << ", Model: " << model << ", Year: " << year << endl;
    }
};

class Car : public Vehicle {
protected:
    int doors;
    float fuelEfficiency;

public:
    Car(string mk, string mdl, int yr, int d, float fe)
        : Vehicle(mk, mdl, yr), doors(d), fuelEfficiency(fe) {}

    void display() {
        Vehicle::display();
        cout << "Doors: " << doors << ", Fuel Efficiency: " << fuelEfficiency << " MPG" << endl;
    }
};

class ElectricCar : public Car {
    int batteryLife;

public:
    ElectricCar(string mk, string mdl, int yr, int d, float fe, int bl)
        : Car(mk, mdl, yr, d, fe), batteryLife(bl) {}

    void display() {
        Car::display();
        cout << "Battery Life: " << batteryLife << " hours" << endl;
    }
};

int main() {
    ElectricCar eCar("Tesla", "Model S", 2022, 4, 120.5, 500);
    eCar.display();
    return 0;
}
