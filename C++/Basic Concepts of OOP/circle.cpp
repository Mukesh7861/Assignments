//Q . Write a C++ program to implement a class called Circle that has private
// member variables for radius. Include member functions to calculate the
// circle's area and circumference.
#include<iostream>
using namespace std;
class circle{
	int r;
float pi=3.14;
public:
void get()
 {
cout<<"enter the radious :";
cin>>r;
}
void display()
 {
	cout<<"area of circle are :"<<pi*r*r<<endl;	
}
};


int main(){
circle obj;
obj.get();
obj.display();
	return 0;
}