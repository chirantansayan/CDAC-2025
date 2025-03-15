#include<iostream>
#include<string>
using namespace std;

class Date
{
	int day=0,month=00,year=0000;

	public:
	Date():day(0),month(0),year(0)
	{
	}
	Date(int day,int month,int year): day(day),month(month),year(year)
	{
	}
	void accept()
	{
		cout<<"Enter day month and year in order :"<<endl;
		cin>>day>>month>>year;
	}
	void display()
	{
		cout<<"Date :"<<endl;
		cout<<day<<"/"<<month<<"/"<<year<<endl;
	}
};

class person
{
	string name;
	Date dob;

	public:
	person():dob(), name("")
	{
	}
	person(int day,int month,int year,string name):dob(day, month, year), name(name)
	{
	}
	void accept()
	{
		cout<<"Enter name :"<<endl;
		getline(cin, name);
		dob.accept();
	}
	void display()
	{
		cout<<"Name and Date :"<<endl;
		cout<<name<<endl;
		dob.display();
	}
};

int main()
{
	person per;
	per.display();

	person pers(15, 03, 2025, "James");
	pers.display();
	return 0;
}
