#include<iostream>
using namespace std;
class matrix
{
	public :
		int arr[10];
		matrix operator +(matrix m2)
		{
			matrix result;
			for(int i = 0;i<5;i++)
			{
				result.arr[i] = arr[i] + m2.arr[i];
			}
			return result;
		}
};

int main()
{
	matrix m1,m2,result;
			cout<<"Enter elements of first Matrix : "<<endl;
			for(int i = 0;i<5;i++)
			{
				cout<<"Enter "<<i+1<<" elements : ";
				cin>>m1.arr[i];
			}
			cout<<"\nEnter elements of Second Matrix : "<<endl;
			for(int i = 0;i<5;i++)
			{
				cout<<"Enter "<<i+1<<" elements : ";
				cin>>m2.arr[i];
			}
	result = m1 + m2;
	cout<<"\n\nResult is :"<<endl;
	for(int i = 0;i<5;i++)
	{
		cout<<i+1<<" elements : ";
		cout<<result.arr[i]<<" "<<endl
		;
	}
}