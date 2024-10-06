#include <iostream>
#include <string>

using namespace std;
struct Register {
    string courseId;
    string courseName;
};

struct Student : public Register {
    int studentId;
    string firstName;
    string lastName;
    string cellNo;
    string email;
};

int main() {
    
    Student students[5];
    for (int i = 0; i < 5; i++) {
        cout << "Enter details for Student " << i + 1 << endl;

        cout << "Course ID: ";
        cin >> students[i].courseId;

        cout << "Course Name: ";
        cin >> students[i].courseName;

        cout << "Student ID: ";
        cin >> students[i].studentId;

        cout << "First Name: ";
        cin >> students[i].firstName;

        cout << "Last Name: ";
        cin >> students[i].lastName;

        cout << "Cell No: ";
        cin >> students[i].cellNo;

        cout << "Email: ";
        cin >> students[i].email;
    }

    cout << "\nStudent Information:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Student ID: " << students[i].studentId << endl;
        cout << "Name: " << students[i].firstName << " " << students[i].lastName << endl;
        cout << "Course: " << students[i].courseId << " - " << students[i].courseName << endl;
        cout << "Cell No: " << students[i].cellNo << endl;
        cout << "Email: " << students[i].email << endl;
        cout << endl;
    }

    return 0;
}