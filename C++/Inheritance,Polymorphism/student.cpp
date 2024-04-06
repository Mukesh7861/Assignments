// Create a class person having members name and age. Derive a class student
// having member percentage. Derive another class teacher having member
// salary. Write necessary member function to initialize, read and write data.
// Write also Main function (Multiple Inheritance)
#include<iostream>
#include<string>
using namespace std;
class person
{
	public:
		string name;
		int age;
		void personal()
		{
			cout<<"Enter your Name : ";
			getline(cin,name);
			cout<<"Enter your Age : ";
			cin>> age;
		}
};
class student
{
	public :
		int percentage;
		void input()
		{
			cout<<"\nEnter your Percentage : ";
			cin>>percentage;
		}
};
class teacher : public person, public student 
{
	public :
		double salary;
		void sal()
		{
			cout<<"\nEnter your Salary per year : ";
			cin>>salary;
		}
		void display()
		{
			cout<<"\n\nName is : "<<name<<endl
			<<"Your age is : "<<age<<" years "<<endl
			<<"Your Percentage is : "<<percentage<<endl
			<<"Your Salary is : "<<salary<<" /- per year"<<endl;
		}
};
int main()
{
	teacher t;
	t.personal();
	t.input();
	t.sal();
	t.display();
}	