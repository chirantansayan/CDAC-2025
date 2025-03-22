#include<iostream>
#include<string>
#include"Employee.h"
using namespace std;

void Accept()
{
        cout<<"Enter Employee Number : ";
        cin>>empno;
        cout<<"Enter Employee Name : ";
        cin>>name;
        cout<<"Enter salary of the Employee : ";
        cin>>salary;
        cout<<"Enter Employee Department : ";
        cin>>dept;
        cout<<endl;
	cout<<endl;
}
void Display() const
{
        cout<<"The Employee details are :-"<<endl;
        cout<<"Employee Number = "<<empno<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"Salary = "<<salary<<endl;
        cout<<"Department = "<<dept<<endl;
        cout<<endl;
}
