#include <iostream>
using namespace std;

class BankAccount {
    string accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(string accountno, string accHolder, double bal) {
        accountNumber = accountno;
        accountHolderName = accHolder;
        balance = bal;
    }

    void deposit(double amount) {
        balance=balance + amount; 
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance=balance - amount; 
        } else {
            cout << "Insufficient balance" << endl;
        }
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    

    BankAccount accounts[3] = {
        BankAccount("5400-121-433", "Ahsan Bari", 1255.76),
        BankAccount("5422-234-487", "Ramaize Shahab", 1000.650),
        BankAccount("5422-100-043", "Basil Khan", 32470.9)
    };

    cout << "Account details before transactions:" << endl;
    for (int i = 0; i < 3; i++) {
        accounts[i].display();
        cout << "------------------------------------------" << endl;
    }

    for (int i = 0; i < 3; i++) {
        accounts[i].deposit(500.0);
        cout << "After depositing 500.0:" << endl;
        accounts[i].display();

        accounts[i].withdraw(200.0);
        cout << "After withdrawing 200.0:" << endl;
        accounts[i].display();

        cout << "------------------------------------------" << endl;
    }
}