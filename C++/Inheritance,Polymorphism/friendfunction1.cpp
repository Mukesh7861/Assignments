// Write a program to find the max number from given two numbers
// using friend function
#include <iostream>
using namespace std;

class MaxNumber {
private:
    int num1, num2;

public:
    MaxNumber(int x, int y) {
        num1 = x;
        num2 = y;
    }

    friend int findMax(MaxNumber&);
};

int findMax(MaxNumber& obj) {
    if (obj.num1 > obj.num2)
        return obj.num1;
    else
        return obj.num2;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    MaxNumber obj(num1, num2);
    int maxNum = findMax(obj);

    cout << "Maximum number: " << maxNum << endl;

    return 0;
}
