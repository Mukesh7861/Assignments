//. Define a class to represent a bank account. Include the following members:
//. Data Member:
//-Name of the depositor
//-Account Number
//-Type of Account
//-Balance amount in the account
//Member Functions
//-To assign values
//-To deposited an amount
//-To withdraw an amount after checking balance
//-To display name and balance

#include<iostream>
using namespace std;
class bank{
	string name,type_acc;
	int account_number;
	float balance,withdraw_amt,deposite_amt;
	public:
void get(){
		cout<<"Sir Enter your 'Account Number ':"<<endl;
	cin>>account_number;
	cout<<"Sir Enter 'Account Holder name':"<<endl;
	cin>>name;
	cout<<"Sir Enter 'Type of Account' :"<<endl;
	cin>>type_acc;
	cout<<"Sir Enter 'balance' :"<<endl;
	cin>>balance;
};
void withdraw()
{
	cout<<"Sir enter your 'Withdraw amount': ";
	cin>>withdraw_amt;
	if(withdraw_amt>balance)
	{
		cout<<"insuficient balance"<<endl;
	}
	else{
			cout<<"withdraw amout ="<<withdraw_amt<<endl;
		balance=balance-withdraw_amt;
		cout<<"current balance is :"<<balance<<endl;
		}
};
void deposit(){
	cout<<"sir enter your 'deposit amount':"<<endl;
	cin>>deposite_amt;
	balance=balance+deposite_amt;
		cout<<"current balance is :"<<balance<<endl;
	};
	void display(){
		cout<<"Account Number :"<<account_number<<endl;
			cout<<"name :"<<name<<endl;
				cout<<"type of accout :"<<type_acc<<endl;
	           cout<<"current updated balance:"<<balance<<endl;
	}	
};
int main(){
	bank obj;
	obj.get();
	int choice;
     cout<<"enter your choice :"<<endl;
     cout<<"1 for withdraw amount\n2 for deposit amount: ";
     cin>>choice;
     cout<<"your choice is :"<<choice<<endl;
     switch(choice)
     {
     	case 1:
     		obj.withdraw();
     		break;
     		case 2:
     			obj.deposit();
     			break;
     			
    }
    obj.display();
	return 0;
}