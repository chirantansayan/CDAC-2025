#include<iostream>
#include<string>
using namespace std;

class Account
{
	public:
	int accountno;
	string name;
	float balance;
	string bank;

	Account()
	{
	}
	Account(const int accountno, const string name, const float balance, const string bank)
	{
		this->accountno = accountno;
		this->name = name;
		this->balance = balance;
		this->bank = bank;
		cout<<"'this' is = "<<this<<endl;
		cout<<endl;
	}

        void Accept()
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
        void Display() const
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
};

int main()
{
	int accountno; 
	string name, bank;
	float balance = 0;
	cout<<"Enter the single Account :"<<endl;
	cout<<"Enter Account Number -> ";
	cin>>accountno;
	cout<<"Enter Account Holder Name -> ";
	cin>>name;
	cout<<"Enter Money Balance -> $";
	cin>>balance;
	cout<<"Enter Bank Name -> ";
	cin>>bank;
	Account acc(accountno, name, balance, bank);

	int leng = 0;
	cout<<"Enter the number of Accounts -> ";
	cin>>leng;
	cout<<"Enter Multiple Accounts :"<<endl;
	Account *account = new Account[leng];
	for(int i=0; i<leng; i++)
	{
		account[i].Accept();
	}
	char ch;
	do
	{
		int choice = 0;
		cout<<"------------------------- Account Menu ---------------------------"<<endl;
		cout<<endl;
		cout<<" 1. Find Account"<<endl;
		cout<<" 2. Deposit Money +$"<<endl;
		cout<<" 3. Withdraw Money -$"<<endl;
		cout<<"------------------------------------------------------------------"<<endl;
		cout<<endl;
		cout<<"Enter your choice : ";
		cin>>choice;

		if(choice == 1)
		{
			int uno = 0, check = 0;
			cout<<"Enter account no to find -> ";
			cin>>uno;
			for(int i=0; i<leng; i++)
			{
				if(uno == account[i].accountno)
				{
					account[i].Display();
					break;
				}
				else
				{
					check = 53;
				}
			}
			if(check == 53)
				cout<<"No such account!"<<endl;
		}
		else if(choice == 2)
		{
			int deposit = 0, uno = 0, check = 0;
			cout<<"Enter account no to find -> ";
			cin>>uno;
			for(int i=0; i<leng; i++)
			{
				if(uno == account[i].accountno)
				{
					cout<<"Enter amount to be deposited :"<<endl;
					cin>>deposit;
					account[i].balance +=deposit; 
					account[i].Display();
					break;
				}
				else
				{
					check = 53;
				}
			}
			if(check == 53)
				cout<<"No such account found!"<<endl;
		}
		else if(choice == 3)
		{
			int withdraw = 0, uno = 0, check = 0;
			cout<<"Enter account no to find -> ";
			cin>>uno;
			for(int i=0; i<leng; i++)
			{
				if(uno == account[i].accountno)
				{
					cout<<"Enter amount to be withdrawn :"<<endl;
					cin>>withdraw;
					account[i].balance -=withdraw; 
					account[i].Display();
					break;
				}
				else
				{
					check = 53;
				}
			}
			if(check == 53)
				cout<<"No such account found!"<<endl;		
		}
		cout<<"Do you want to continue : (Y/N)"<<endl;
		cin>>ch;
	}while(ch != 'N');	
	return 0;
}
