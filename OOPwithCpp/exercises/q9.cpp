#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    float marks;

public:
    Student(const string& n, const string& cls, int roll, float m) {
        name = n;
        studentClass = cls;
        rollNumber = roll;
        marks = m;
    }

    // Member function to calculate the grade based on marks
    char calculateGrade() {
        if (marks >= 90) {
            return 'A';
        } else if (marks >= 80) {
            return 'B';
        } else if (marks >= 70) {
            return 'C';
        } else if (marks >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }

    // Member function to display student's information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        char grade = calculateGrade();
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    // Create a Student object
    Student student1("John Doe", "12th Grade", 101, 85.5);

    // Display the student's information
    student1.displayInfo();

    return 0;
}
