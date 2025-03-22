#include<iostream>
#include"Emp.h"
using namespace std;

PermanentEmp::PermanentEmp() : ta(1000), hra(5000)
{
	Accept();
	cout<<"Per ctor"<<endl;
	cout<<endl;
}
void PermanentEmp::calsal()
{
	double result = 0;
	result = Salary + ta + hra;
	cout<<"The permanent employee total salary is = "<<result<<endl;
	cout<<endl;
}
