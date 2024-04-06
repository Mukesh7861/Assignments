#include <iostream>
using namespace std;
template <class T>
void myNumbers(T a[])
{
	for(int i=0;i<4;i++)
	{
		for(int j = 0;j<4;j++)
		{
			int temp;
		if(a[i]<a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		}
	}
  	for(int i=0;i<4;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
 {
	int a[] = {10, 35, 75, 25}; 
 myNumbers( a);
  
}