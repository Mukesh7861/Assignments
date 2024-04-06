// Write a C++ program to implement a class called Bank Account that has
// private member variables for account number and balance. Include
// member functions to deposit and withdraw money from the account
#include<iostream>
using namespace std;
class bank
{
	private:
		string name;
		int bal;
		double accnum;
			public :
		string type;
		void input()
		{
			cout<<"Enter name of Depositor : ";
			getline(cin,name);
			cout<<"Enter Account Number : ";
			cin.ignore();
			cin>>accnum;
			cout<<"Enter type of Account : ";
			cin>>type;
			cout<<"Enter balance amount in account : ";
			cin>>bal;
		}
		void deposit()
		{
			int dep;
			cout<<"\nEnter amount for deposit : ";
			cin>>dep;
			if(dep>0)
			{
				bal+=dep;
			}
			else
			{
				cout<<"Enter valid amount for deposit";
			}
		}
		void withdraw()
		{
			int with;
			cout<<"\nIn Account, the amount available for withdraw is : "<<bal;
			cout<<"\nEnter amount you want to withdraw : ";
			cin>>with;
			if(bal>with)
			{
				if(with>0)
				{
				bal = bal - with;
				}
				else
				{
					cout<<"Enter valid amount."<<endl;
				}
			}
			else
			{
				cout<<"you don't have sufficient Balance in account."<<endl;
			}
		}
		void display()
		{
				cout<<"\n\nDear,"<<name<<"\n\tTotal balance in account is : Rs. "<<bal<<"/-"<<endl;
		}
};
int main()
{
	int choice;
	bank b;
	b.input();
	cout<<"1. Press 1 for Deposit \n2. Press 2 for Withdraw \n3. pres 3 for first deposit and then withdraw from same."<<endl;
	cout<<"Enter your choice : ";
	cin>>choice;
	if(choice == 1)
	{
		b.deposit();
	}
	else if(choice == 2)
	{
		b.withdraw();
	}
	else
	{
		b.deposit();
		b.withdraw();
	}
	b.display();
}