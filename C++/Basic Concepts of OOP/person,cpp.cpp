// Write a C++ program to create a class called Person that has private
// member variables for name, age and country. Implement member
// functions to set and get the values of these variables.
#include<iostream>
using namespace std;
class person{
	string name,country;
	int age;
	public:
		void get(){
		cout<<"enter the name "<<endl;
		cin>>name;
		cout<<"enter the age "<<endl;
		cin>>age;
		cout<<"enter the country "<<endl;
		cin>>country;
		}
		void display(){
			cout<<"name :"<<name<<endl;
			cout<<"age :"<<age<<endl;
			cout<<"country :"<<country<<endl;
		}
};
int main(){
	person obj;
	obj.get();
	obj.display();
	
	return 0;
}