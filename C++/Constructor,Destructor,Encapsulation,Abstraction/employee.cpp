// Write a C++ program to implement a class called Employee that has
// private member variables for name, employee ID, and salary. Include
// member functions to calculate and set salary based on employee
// performance. Using of constructor
#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee(const string& empName, int empID, double initialSalary) : name(empName), employeeID(empID), salary(initialSalary) {}

        void setName(const string& empName) {
        name = empName;
    }
    void setEmployeeID(int empID) {
        employeeID = empID;
    }

    void setSalary(double performanceFactor) {
        salary *= performanceFactor;
    }

    string getName() const {
        return name;
    }
    int getEmployeeID() const {
        return employeeID;
    }
    double getSalary() const {
        return salary;
    }
};

int main() {
    Employee emp("mukesh", 786178,60150.0);
                                     // Display employee details
    cout << "Employee Details:\n";
    cout << "Name: " << emp.getName() <<endl;
    cout << "Employee ID: " << emp.getEmployeeID() <<endl;
    cout << "Salary: $" << emp.getSalary() <<endl;

    emp.setSalary(1.1);
    cout << "\nAfter performance increase:\n";
    cout << "Salary: $" << emp.getSalary() <<endl;

    return 0;
}
