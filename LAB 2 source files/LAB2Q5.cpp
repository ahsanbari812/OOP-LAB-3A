#include <iostream>
#include <string>

using namespace std;

struct Product {
    int id;
    string name;
    double price;
    int quantity;
};

Product products[100]; 
int numProducts = 0;
void addProduct(int id, string name, double price, int quantity) {
    if (numProducts < 100) {
        products[numProducts].id = id;
        products[numProducts].name = name;
        products[numProducts].price = price;
        products[numProducts].quantity = quantity;
        numProducts++;
        cout << "Product added successfully!" << endl;
    } else {
        cout << "Maximum number of products reached." << endl;
    }
}

void displayProduct(int id) {
    for (int i = 0; i < numProducts; i++) {
        if (products[i].id == id) {
            cout << "Product ID: " << products[i].id << endl;
            cout << "Product Name: " << products[i].name << endl;
            cout << "Price: $" << products[i].price << endl;
            cout << "Quantity: " << products[i].quantity << endl;
            return;
        }
    }
    cout << "Product not found." << endl;
}

void updateProduct(int id, string name, double price, int quantity) {
    for (int i = 0; i < numProducts; i++) {
        if (products[i].id == id) {
            products[i].name = name;
            products[i].price = price;
            products[i].quantity = quantity;
            cout << "Product updated successfully!" << endl;
            return;
        }
    }
    cout << "Product not found." << endl;
}

int main() {
    int choice, id, quantity;
    string name;
    double price;

    while (true) {
        cout << "1. Add Product\n";
        cout << "2. Display Product\n";
        cout << "3. Update Product\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter product ID: ";
                cin >> id;
                cout << "Enter product name: ";
                cin >> name;
                cout << "Enter product price: ";
                cin >> price;
                cout << "Enter product quantity: ";
                cin >> quantity;
                addProduct(id, name, price, quantity);
                break;
            case 2:
                cout << "Enter product ID: ";
                cin >> id;
                displayProduct(id);
                break;
            case 3:
                cout << "Enter product ID: ";
                cin >> id;
                cout << "Enter new product name: ";
                cin >> name;
                cout << "Enter new product price: ";
                cin >> price;
                cout << "Enter new product quantity: ";
                cin >> quantity;
                updateProduct(id, name, price, quantity);
                break;
            case 4:
                exit(0);
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}