#include <iostream>
#include <string>
using namespace std;

const int MAX_ITEMS = 100;

class StationeryShop {
private:
    string items[MAX_ITEMS];
    double prices[MAX_ITEMS];
    int itemCount;

public:
    StationeryShop() : itemCount(0) {}

    void addItem(const string& item, double price) {
        if (itemCount < MAX_ITEMS) {
            items[itemCount] = item;
            prices[itemCount] = price;
            itemCount++;
        } else {
            cout << "Item list is full.\n";
        }
    }

    void retrieveItems() const {
        if (itemCount == 0) {
            cout << "No items in the list.\n";
            return;
        }
        cout << "Items available:\n";
        for (int i = 0; i < itemCount; ++i) {
            cout << i + 1 << ". " << items[i] << "\n";
        }
    }

    void modifyPrice(int index, double newPrice) {
        if (index >= 0 && index < itemCount) {
            prices[index] = newPrice;
        } else {
            cout << "Invalid item index.\n";
        }
    }

    void displayItems() const {
        if (itemCount == 0) {
            cout << "No items to display.\n";
            return;
        }
        cout << "Items and their prices:\n";
        for (int i = 0; i < itemCount; ++i) {
            cout << items[i] << ": $" << prices[i] << "\n";
        }
    }

    void generateReceipt() const {
        if (itemCount == 0) {
            cout << "Can not generate receipt due to no items.\n";
            return;
        }

        int itemNumber;
        double quantity;
        double total = 0;

        cout << "Enter items and quantities (0 to stop):\n";
        while (true) {
            retrieveItems();
            cout << "Item number: ";
            cin >> itemNumber;
            if (itemNumber == 0) break;
            cout << "Quantity: ";
            cin >> quantity;

            if (itemNumber > 0 && itemNumber <= itemCount && quantity > 0) {
                double cost = prices[itemNumber - 1] * quantity;
                total += cost;
                cout << items[itemNumber - 1] << ": " << quantity 
                      << " x Rs." << prices[itemNumber - 1] 
                      << " = Rs." << cost << "\n";
            } else {
                cout << "Invalid item number or quantity.\n";
            }
        }
        cout << "Total amount due: Rs." << total << "\n";
    }
};

int main() {
    StationeryShop shop;
    int choice;
    string itemName;
    double itemPrice;
    int index;

    do {
        cout << "Menu:\n";
        cout << "1. Add item\n";
        cout << "2. Retrieve items\n";
        cout << "3. Modify price\n";
        cout << "4. Display all items\n";
        cout << "5. Generate receipt\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter item name: ";
                cin.ignore();
                getline(cin, itemName);
                cout << "Enter item price: ";
                cin >> itemPrice;
                shop.addItem(itemName, itemPrice);
                break;

            case 2:
                shop.retrieveItems();
                break;

            case 3:
                shop.retrieveItems();
                cout << "Enter item number to modify: ";
                cin >> index;
                cout << "Enter new price: ";
                cin >> itemPrice;
                shop.modifyPrice(index - 1, itemPrice);
                break;

            case 4:
                shop.displayItems();
                break;

            case 5:
                shop.generateReceipt();
                break;

            case 6:
                cout << "Exiting the program.\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
                break;
        }
    } while (choice != 6);

    return 0;
}
