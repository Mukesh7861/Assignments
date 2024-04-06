#include <iostream>
using namespace std;
class Triangle {
private:
    double side1, side2, side3;

public:
                                                                                 
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {    // Constructor
	}  

    void triangleType() {
        if (side1 == side2 && side2 == side3) {
            cout << "Equilateral triangle" <<endl;
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        cout << "Isosceles triangle" <<endl;
        } else {
        cout << "Scalene triangle" <<endl;
        }
    }
};

int main() {
    
    Triangle obj(3.0, 3.0, 3.0); // Equilateral triangle
       obj.triangleType();

    Triangle obj2(3.0, 4.0, 3.0); // Isosceles triangle
    obj2.triangleType();

    Triangle obj3(3.0, 4.0, 5.0); // Scalene triangle
    obj3.triangleType();

    return 0;
}
