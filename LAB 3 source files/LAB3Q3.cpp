#include <iostream>
#include <string>
using namespace std;

class Calendar {
private:
    string months[12][31];
    int year;
    int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    bool isValidDate(int day, int month) {
        if (month == 2 && isLeapYear()) {
            return day > 0 && day <= 29;
        }
        return month > 0 && month <= 12 && day > 0 && day <= daysInMonth[month - 1];
    }

    bool isLeapYear() {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

public:
    Calendar(int y) {
        year = y;
        for (int i = 0; i < 12; i++)
            for (int j = 0; j < 31; j++)
                months[i][j] = "";
    }

    void addTask(int day, int month, const string& task) {
        if (isValidDate(day, month)) {
            months[month - 1][day - 1] = task;
        } else {
            cout << "Invalid date!" << endl;
        }
    }

    void removeTask(int day, int month) {
        if (isValidDate(day, month)) {
            months[month - 1][day - 1] = "";
        } else {
            cout << "Invalid date!" << endl;
        }
    }

    void displayTasks() {
        for (int month = 0; month < 12; month++) {
            for (int day = 0; day < daysInMonth[month]; day++) {
                if (!months[month][day].empty()) {
                    cout << "Month: " << month + 1 << ", Day: " << day + 1 
                         << " - Task: " << months[month][day] << endl;
                }
            }
        }
    }
};

int main() {
    int year, day, month;
    string task;
    char choice;
    cout << "Enter the year for the calendar: ";
    cin >> year;

    Calendar myCalendar(year);

    do {
        cout << "Choose an option (a: Add task, r: Remove task, d: Display tasks, q: Quit): ";
        cin >> choice;

        if (choice == 'a') {
            cout << "Enter month, day, and task description: ";
            cin >> month >> day;
            cin.ignore();
            getline(cin, task);
            myCalendar.addTask(day, month, task);
        } else if (choice == 'r') {
            cout << "Enter month and day to remove task: ";
            cin >> month >> day;
            myCalendar.removeTask(day, month);
        } else if (choice == 'd') {
            myCalendar.displayTasks();
        }
    } while (choice != 'q');

    return 0;
}
