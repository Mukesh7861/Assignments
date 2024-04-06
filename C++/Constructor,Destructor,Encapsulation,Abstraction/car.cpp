#include <iostream>
using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:

    Car() : year(0) {}
    
    void setCompany(const string& comp) {
        company = comp;
    }

    void setModel(const string& mdl) {
        model = mdl;
    }

    void setYear(int yr) {
        year = yr;
    }
    string getCompany() const {
        return company;
    }

    string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }
};

int main() {

    Car myCar;
    myCar.setCompany("Toyota Supra");
    myCar.setModel("Supra");
    myCar.setYear(2003);

    cout << "Car Details:\n";
    cout << "Company: " << myCar.getCompany() << endl;
    cout << "Model: " << myCar.getModel() << endl;
    cout << "Year: " << myCar.getYear() << endl;

    return 0;
}
