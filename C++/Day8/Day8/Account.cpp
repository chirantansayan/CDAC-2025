#include<iostream>
#include<string>
#include"Account.h"
using namespace std;

int Account::ctr = 0;
Account::Account(): accountno(0), name(""), balance(0), bank("")
{
	ctr++;
}
Account::Account(int accountno, string name, float balance, string bank): accountno(accountno), name(name), balance(balance), bank(bank)
{
	ctr++;
	cout<<"'this' is = "<<this<<endl;
	cout<<endl;
}

void Account::Accept()
{
        cout<<"Enter the account number : ";
        cin>>accountno;
        cout<<"Enter the account holder name : ";
        cin>>name;
        cout<<"Enter the money balance : $";
        cin>>balance;
        cout<<"Enter the bank name : ";
        cin>>bank;
        cout<<endl;
}
void Account::Display() const
{
        cout<<"The bank details are :-"<<endl;
        cout<<"Account Number = "<<accountno<<endl;
        cout<<"Account holder Name = "<<name<<endl;
        cout<<"Money Balance = $"<<balance<<endl;
        cout<<"Bank Name = "<<bank<<endl;
        cout<<endl;
}
/*void deposit()
{
	int deposit=0;
	cout<<"Enter the amount to be deposit :"<<endl;
	cin>>deposit;
	balance += deposit; 
}
void withdraw()
{
	int withdraw=0;
	cout<<"Enter amount to be withdrawn :"<<endl;
	cin>>withdraw;
	balance -=withdraw;
}
void FindAcc()
{
	if(uno == accountno)
	{
		Display();
	}
}*/
