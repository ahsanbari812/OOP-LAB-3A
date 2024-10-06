#include <iostream>
#include <string>
using namespace std;

class WaterBottle {
private:
    string company;
    string color;
    double capacityLitres;
    int capacityMillilitres;

public:
    
    void setCompany(string c)
    { company = c;
    }
    void setColor(string col) 
    { color = col; 
    }
    void setCapacityLitres(double litres)
     {
        capacityLitres = litres;
        capacityMillilitres = litres * 1000; 
    }

    
    string getCompany()
    { return company;
     }
    string getColor()
    { return color;
     }
    double getCapacityLitres()
    { return capacityLitres;
    }
    int getCapacityMillilitres()
    { return capacityMillilitres;
    }

    void consumeWater(int consumedMillilitres) {
        if (consumedMillilitres <= capacityMillilitres) {
            capacityMillilitres -= consumedMillilitres;
            capacityLitres = capacityMillilitres / 1000.0; 
        } else {
            cout << "No more water in the bottle!" << endl;
        }
    }
};

int main() {
    WaterBottle bottle;

    bottle.setCompany("Pakola");
    bottle.setColor("Green");
    bottle.setCapacityLitres(2.5);

    cout << "Company: " << bottle.getCompany() << endl;
    cout << "Color: " << bottle.getColor() << endl;
    cout << "Capacity: " << bottle.getCapacityLitres() << " litres (" 
         << bottle.getCapacityMillilitres() << " ml)" << endl;

    int consumedWater;
    cout << "Enter amount of water consumed (in ml): ";
    cin >> consumedWater;
    bottle.consumeWater(consumedWater);

    cout << "Updated Capacity: " << bottle.getCapacityLitres() << " litres (" 
         << bottle.getCapacityMillilitres() << " ml)" << endl;

    return 0;
}
