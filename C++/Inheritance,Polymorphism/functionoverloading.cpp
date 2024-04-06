// Write a program to Mathematic operation like Addition, Subtraction,
// Multiplication, Division Of two number using different parameters and
// Function Overloading
#include <iostream>
using namespace std;
class Operations {
public:
                                                 // Addition
    int operate(int a, int b) {
        return a + b;
    }
                                        // Subtraction
    float operate(float a, float b) {
        return a - b;
    }
                                                 // Multiplication
    double operate(double a, double b) {
        return a * b;
    }
                                    // Division
    float operate(float a, int b) {
        if (b == 0) {
            cout << "can't' Divided by zero!" << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    Operations obj;
    cout << "Addition of 5 and 3: " << obj.operate(5, 3) << endl;
    cout << "Subtraction of 5.5 and 2.2: " << obj.operate(5.5f, 2.2f) << endl;
    cout << "Multiplication of 4.3 and 2.1: " << obj.operate(4.3, 2.1) << endl;
    cout << "Division of 10.5 by 3: " << obj.operate(10.5f, 3) << endl;

    return 0;
}
