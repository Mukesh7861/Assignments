//Write a C++ Program to show access to Private Public and Protected using
//Inheritance ?
#include <iostream>
using namespace std;
class muku {
private:
    int privateM;
protected:
    int protectedM;
public:
    int publicM;
                            // Constructor
    Base() {
        privateM = 1;
        protectedM = 2;
        publicM = 3;
    }
};
class muku2 : public muku {
public:
    void accessM() {
        cout << "Protected member in muku2 class: " << protectedM<< endl;
        cout << "Public member in muku class: " << publicM<< endl;
    }
};

int main() {
    muku2 obj;
    cout << "Protected member in main: " <<obj.protectedM << endl;
    cout << "Public member in main: " << obj.publicMember << endl;
    obj.accessM();

    return 0;
}
