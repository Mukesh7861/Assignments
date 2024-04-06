// Assume a class cricketer is declared. Declare a derived class batsman from
// cricketer. Data member of batsman. Total runs, Average runs and best
// performance. Member functions input data, calculate average runs, Display
// data. (Single Inheritance)

#include <iostream>
using namespace std;
class Cricketer 
{
public:
    string name,state;
    int age;
    void Details()
    {
        cout<< "Enter Name:";
        getline(cin, name);
        cout<< "Enter Age:";
        cin>>age;
        cout<< "Enter State:";
        cin>>state;
    }
};
class Batsman : public Cricketer 
{
public:
    int totalRuns;
    double averageRuns;
    int bestPerformance,innings;
    void inputData() 
    {
        cout << "Enter total runs: ";
        cin >> totalRuns;
    
        cout << "Enter Total Innings: ";
        cin >> innings;
    }
    void AverageRuns() 
    {
        averageRuns = totalRuns/innings;
    }
  void display() 
    {
        cout<<"Name: "<<name<< std::endl;
        cout<<"Age: "<<age<<endl;
        cout<<"State: "<<state<<endl;
        cout<<"Total runs: "<<totalRuns<<endl;
        cout<<"Average runs: "<<averageRuns<<endl;
    }
};
int main() 
{
    Batsman batsman;
    batsman.Details();
    batsman.inputData();
    batsman.AverageRuns();
    batsman.display();

}