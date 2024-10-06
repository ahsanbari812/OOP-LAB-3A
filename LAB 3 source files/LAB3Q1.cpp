#include <iostream>
#include <string>
using namespace std;

class BoardMarker{
private:
string brand;
string shade;
bool refillable;
bool inkStatus;
public:
 string getBrand()
  { return brand;
  }
    void setBrand(string b) 
    { brand = b; }
    string getShade()
     { return shade; 
     }
    void setShade(string s) 
    { shade = s; 
    }
    bool isRefillable() 
    { return refillable;
     }
    void setRefillable(bool r)
     { refillable = r;
      }

    bool isInkDepleted()
     { return !inkStatus;
      }
    void setInkStatus(bool status) 
    { inkStatus = status; 
    }

    void write() {
        if (inkStatus) {
            cout << "Writing with the " << shade << " marker from " << brand << "." << endl;
        } else {
            cout << "The marker has run out of ink." << endl;
        }
    }

    void refill() {
        if (refillable) {
            inkStatus = true;
            cout << "The marker has been refilled." << endl;
        } else {
            cout << "This marker is not refillable." << endl;
        }
    }

};
 
int main() {
    BoardMarker marker;

    marker.setBrand("Dollar");
    marker.setShade("Red");
    marker.setRefillable(true);
    marker.setInkStatus(false);

    marker.write();
    marker.refill();
    marker.write();

    return 0;
}