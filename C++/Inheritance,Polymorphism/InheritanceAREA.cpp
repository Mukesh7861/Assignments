// Write a C++ Program to find Area of Rectangle using inheritance
//multiple inheritance
#include<iostream>
using namespace std;
class rect{
	protected:
		float length,width;
};
class square{
	protected:
		float side;
};
class area:public rect,public square{
public:
void rect_area()
{
	cout<<"enter length and width :";
	cin>>length>>width;
	cout<<"area of rectangle is "<<length*width;
}
void square_area()
{
	cout<<"\nenter side";
	cin>>side;
	cout<<"area of square is "<<side*side;
}
};
int main(){
	area obj;
	obj.rect_area();
	obj.square_area();
	
	return 0;
}