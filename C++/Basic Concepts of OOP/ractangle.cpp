// Q. Write a C++ program to create a class called Rectangle that has private
// member variables for length and width. Implement member functions to
// calculate the rectangle's area and perimeter.
#include<iostream>
using namespace std;
class ractangle{
	int length,width;
public:
void get(){
 cout<<"enter the length : "<<endl;
 cin>>length;
 cout<<"enter the width : "<<endl;
 cin>>width;
 }
void display(){
	cout<<"area of rectangle is :"<<length*width;
}
};
int main(){
	ractangle obj;
	obj.get();
	obj.display();
	return 0;
}