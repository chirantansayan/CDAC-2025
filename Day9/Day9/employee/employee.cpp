#include<iostream>
#include<string>
#include"employee.h"
using namespace std;

employee::employee()
{
	cout<<"Emp ctor"<<endl;
	cout<<endl;
}
void employee::Accept()
{
	cout<<"Enter the name : ";
	getline(cin, name);
	cout<<"Enter the eid : ";
	getline(cin, eid);
	cout<<"Enter the salary : ";
	cin>>Salary;
	cin.get();
	cout<<endl;
}
void employee::Display()
{
	cout<<"The name is = "<<name<<endl;
	cout<<"The eid is = "<<eid<<endl;
	cout<<"The salary is = "<<Salary<<endl;
	cout<<endl;
}
