// Write a programto swap the two numbers using friend function
// without using third variable
#include <iostream>
using namespace std;
class SwapNumbers {
private:
    int a, b;
public:
    SwapNumbers(int x, int y) {
        a = x;
        b = y;
    }
 friend void swapNumbers(SwapNumbers&);

    void display() {
        cout << "After swapping: a = " << a << ", b = " << b << endl;
    }
};

void swapNumbers(SwapNumbers& obj) {
    obj.a = obj.a + obj.b;
    obj.b = obj.a - obj.b;
    obj.a = obj.a - obj.b;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    SwapNumbers obj(num1, num2);
    cout << "Before swapping: a = " << num1 << ", b = " << num2 << endl;

    swapNumbers(obj);
    obj.display();

    return 0;
}
