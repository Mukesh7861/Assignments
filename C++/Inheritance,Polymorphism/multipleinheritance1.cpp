#include <iostream>
using namespace std;
class Student {
protected:
    string name;
    int rollNumber;

public:
    void getStudentDetails() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNumber;

    }
};

class Marks {
protected:
    int mark1, mark2;

public:
    void getMarks() {
        cout << "Enter marks for 2 subjects: ";
        cin >> mark1 >> mark2;
    }
};
class MarkSheet : public Student, public Marks {
public:
    void displayMarkSheet() {
        cout << "\n*** Mark Sheet ***" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks in Subject 1: " << mark1 << endl;
        cout << "Marks in Subject 2: " << mark2 << endl;
        cout << "Total Marks: " << (mark1 + mark2) << endl;
        cout << "Average Marks: " << ((mark1 + mark2) / 2.0) << endl;
    }
};

int main() {
    MarkSheet student;
    student.getStudentDetails();
    student.getMarks();
    student.displayMarkSheet();

    return 0;
}
