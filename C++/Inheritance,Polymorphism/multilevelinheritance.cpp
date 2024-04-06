 //Assume that the test results of a batch of students are stored in three different
//classes. Class Students are storing the roll number. Class Test stores the
//marks obtained in two subjects and class result contains the total marks
//obtained in the test. The class result can inherit the details of the marks
//obtained in the test and roll number of students. (Multilevel Inheritance)

#include <iostream>
using namespace std;
class Students {
protected:
    int rollNumber;

public:
    void setRollNumber(int roll) {
        rollNumber = roll;
    }
};

class Test : public Students {
protected:
    int marksSubject1;
    int marksSubject2;

public:
    void setMarks(int m1, int m2) {
        marksSubject1 = m1;
        marksSubject2 = m2;
    }
};
class Result : public Test {
public:
    int totalMarks() {
        return marksSubject1 + marksSubject2;
    }

    void displayResult() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks in Subject 1: " << marksSubject1 << endl;
        cout << "Marks in Subject 2: " << marksSubject2 << endl;
        cout << "Total Marks: " << totalMarks() << endl;
    }
};

int main() {
    Result studentResult;
    studentResult.setRollNumber(786);
    studentResult.setMarks(66, 69);
    studentResult.displayResult();
    return 0;
}
