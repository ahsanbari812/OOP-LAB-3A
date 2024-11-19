#include <iostream>
using namespace std;

class Logo {
private:
    string logo;
public:
    Logo() : logo("Blue Bird") {}
    friend class Platform;
    void display() {
        cout << "Logo: " << logo << endl;
    }
};

class Platform {
public:
    void changeLogo(Logo &logoObj) {
        logoObj.logo = "Doge Coin";
    }
};

int main() {
    Logo logo;
    Platform platform;

    cout << "Original ";
    logo.display();

    platform.changeLogo(logo);

    cout << "Modified ";
    logo.display();

    return 0;
}
