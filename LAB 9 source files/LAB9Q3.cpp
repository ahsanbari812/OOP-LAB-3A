#include <iostream>
using namespace std;

class Employee {
protected:
    int id;
    string name;
public:
    Employee(int i, string n) : id(i), name(n) {}
    virtual double calculatePay() const { return 0.0; }
    virtual void displayDetails() const {
        cout << "Employee ID: " << id << ", Name: " << name << endl;
    }
};

class FullTimeEmployee : public Employee {
    double monthlySalary;
public:
    FullTimeEmployee(int i, string n, double salary) : Employee(i, n), monthlySalary(salary) {}
    double calculatePay() const override { return monthlySalary; }
    void displayDetails() const override {
        Employee::displayDetails();
        cout << "Type: Full-time, Monthly Salary: " << monthlySalary << endl;
    }
};

class PartTimeEmployee : public Employee {
    double hourlyWage;
    int hoursWorked;
public:
    PartTimeEmployee(int i, string n, double wage, int hours) : Employee(i, n), hourlyWage(wage), hoursWorked(hours) {}
    double calculatePay() const override { return hourlyWage * hoursWorked; }
    void displayDetails() const override {
        Employee::displayDetails();
        cout << "Type: Part-time, Hourly Wage: " << hourlyWage << ", Hours Worked: " << hoursWorked << endl;
    }
};

int main() {
    FullTimeEmployee ft(101, "Ahsan", 5000);
    PartTimeEmployee pt(102, "Ahmed", 15, 40);

    ft.displayDetails();
    cout << "Pay: $" << ft.calculatePay() << endl;

    pt.displayDetails();
    cout << "Pay: $" << pt.calculatePay() << endl;

    Employee* empPtr = &ft;
    cout << "Using base class pointer for Full-time Employee Pay: $" << empPtr->calculatePay() << endl;

    return 0;
}
