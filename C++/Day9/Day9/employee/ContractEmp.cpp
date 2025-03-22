#include<iostream>
#include"Emp.h"
using namespace std;

ContractEmp::ContractEmp() : hrs(8), rate(300)
{
	Accept();
	cout<<"Con ctor"<<endl;
	cout<<endl;
}
void ContractEmp::calsal()
{
	double result = 0;
	result = Salary + (hrs * rate);
	cout<<"The contract employee total salary is = "<<result<<endl;
	cout<<endl;
}
