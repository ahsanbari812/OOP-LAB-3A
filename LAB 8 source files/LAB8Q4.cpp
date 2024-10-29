#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : virtual public Person {
protected:
    int studentID, gradeLevel;

public:
    Student(string n, int a, int id, int grade) : Person(n, a), studentID(id), gradeLevel(grade) {}

    void display() {
        Person::display();
        cout << "Student ID: " << studentID << ", Grade Level: " << gradeLevel << endl;
    }
};

class Teacher : virtual public Person {
protected:
    string subject;
    int roomNumber;

public:
    Teacher(string n, int a, string sub, int room) : Person(n, a), subject(sub), roomNumber(room) {}

    void display() {
        Person::display();
        cout << "Subject: " << subject << ", Room Number: " << roomNumber << endl;
    }
};

class GraduateStudent : public Student, public Teacher {
public:
    GraduateStudent(string n, int a, int id, int grade, string sub, int room)
        : Person(n, a), Student(n, a, id, grade), Teacher(n, a, sub, room) {}

    void display() {
        Student::display();
        Teacher::display();
    }
};

int main() {
    GraduateStudent gradStudent("Ahsan", 25, 101, 4, "Math", 205);
    gradStudent.display();
    return 0;
}
