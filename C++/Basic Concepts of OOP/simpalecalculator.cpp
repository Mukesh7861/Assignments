//Q  WAP to create simple calculator using class ?
#include<iostream>
using namespace std;
class calculator{
	public:
	void add(int a,int b)
	{
		cout<<a+b;
	}
	void sub(int a,int b)
	{
		cout<<a-b;
	}
	void mul(int a,int b)
	{
		cout<<a*b;
	}void div(int a,int b)
	{
		cout<<a/b;
	}
	void mod(int a,int b)
	{
		cout<<a%b;
	}
	
};
int main(){
    int a,b,choice;
	cout<<"enter 2 values :";
	cin>>a>>b;
	cout<<"\nenter your choice:\n";
	cout<<"\n1 for addition:\n2 for subtraction:\n3 for multiplication:\n4 for division:\n5 for modulo: ";
	cin>>choice;
	cout<<" this is your choice"<<choice<<endl;
	calculator obj;
    switch(choice)
    {
    	case 1:
    	obj.add(a,b);
    		break;
    		case 2:
    			obj.sub(a,b);
    			break;
    			case 3:
    				obj.mul(a,b);
    				break;
    				case 4:
    					obj.div(a,b);
    					break;
    					case 5:
    						obj.mod(a,b);
    						break;
    		default:
    			cout<<"enter values are invalid";
    			break;
	}

	return 0;
}