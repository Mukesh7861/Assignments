// Write a program to find the multiplication values and the cubic values using
//inline function.
#include<iostream>
using namespace std;
inline void square(int n)
{
	cout<<"multiplication value are :"<<endl;
	cout<<n*n<<endl;
	cout<<"cubic value is : "<<endl;
	cout<<n*n*n<<endl;
}
int main(){
square(5);
return 0;
};