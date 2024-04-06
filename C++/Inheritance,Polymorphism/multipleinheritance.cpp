 // Write a C++ Program to illustrates the use of Constructors in multilevel
// inheritance
#include <iostream>
using namespace std;
class gp {
protected:
    int gpData;
public:
    gp(int data) {
        gpData = data;
        cout << "GrandParent Constructor" << endl;
    }
    void displaygp() {
        cout << "GrandParent Data: " << gpData << endl;
    }
};
class Parent : public gp {
protected:
    int parentData;
public:
    Parent(int pdata, int gdata) : gp(gdata) {
        parentData = pdata;
        cout << "Parent Constructor" << endl;
    }

    void displayParent() {
        cout << "Parent Data: " << parentData << endl;
    }
};

class Child : public Parent {
private:
    int childData;

public:
    Child(int cdata, int pdata, int gdata) : Parent(pdata, gdata) {
        childData = cdata;
        cout << "Child Constructor" << endl;
    }

    void displayChild() {
        cout << "Child Data: "<<childData << endl;
    }
};

int main() {
    Child obj(10, 20, 30);
    cout << "\nDisplaying data:" << endl;
    obj.displaygp();
    obj.displayParent();
    obj.displayChild();

    return 0;
}
