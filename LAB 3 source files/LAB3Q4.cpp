#include <iostream>
#include <string>

using namespace std;

class Smartphone {
private:
    string brand;
    string model;
    string display;
    string resolution;
    int ram;
    int storage;

public:
    void setBrand(string b) { brand = b; }
    void setModel(string m) { model = m; }
    void setDisplay(string d) { display = d; }
    void setResolution(string r) { resolution = r; }
    void setRAM(int r) { ram = r; }
    void setStorage(int s) { storage = s; }

    string getBrand() const { return brand; }
    string getModel() const { return model; }
    string getDisplay() const { return display; }
    string getResolution() const { return resolution; }
    int getRAM() const { return ram; }
    int getStorage() const { return storage; }

    void makeCall(string number) const {
        cout << "Calling " << number << "..." << endl;
    }

    void sendMessage(string number, string message) const {
        cout << "Sending message to " << number << ": " << message << endl;
    }

    void connectToWiFi(string network) const {
        cout << "Connecting to Wi-Fi network: " << network << endl;
    }

    void browseInternet(string website) const {
        cout << "Surfing website: " << website << endl;
    }
};

int main() {
    Smartphone phone1, phone2;

    phone1.setBrand("Apple");
    phone1.setModel("iPhone 15 Pro Max");
    phone1.setDisplay("6.3-inch");
    phone1.setResolution("2532x1170");
    phone1.setRAM(6);
    phone1.setStorage(256);

    phone2.setBrand("Samsung");
    phone2.setModel("Galaxy S24");
    phone2.setDisplay("6.2-inch");
    phone2.setResolution("2400x1080");
    phone2.setRAM(8);
    phone2.setStorage(256);

    cout << "Phone 1 details:" << endl;
    cout << "Brand: " << phone1.getBrand() << endl;
    cout << "Model: " << phone1.getModel() << endl;
    cout << "Display: " << phone1.getDisplay() << endl;
    cout << "Resolution: " << phone1.getResolution() << endl;
    cout << "RAM: " << phone1.getRAM() << " GB" << endl;
    cout << "Storage: " << phone1.getStorage() << " GB" << endl;

    cout << "\nPhone 2 details:" << endl;
    cout << "Brand: " << phone2.getBrand() << endl;
    cout << "Model: " << phone2.getModel() << endl;
    cout << "Display: " << phone2.getDisplay() << endl;
    cout << "Resolution: " << phone2.getResolution() << endl;
    cout << "RAM: " << phone2.getRAM() << " GB" << endl;
    cout << "Storage: " << phone2.getStorage() << " GB" << endl;

    phone1.makeCall("0306-1926665");
    phone1.sendMessage("0341-5569243", "Salam Sir!");
    phone2.connectToWiFi("HomeWifi");
    phone2.browseInternet("www.youtube.com");

    return 0;
}
