#include<iostream>
#include"Emp.h"
using namespace std;

int main()
{
	employee *e[3];
	e[0] = new ContractEmp();
	e[1] = new PermanentEmp();
	e[2] = new ContractEmp();

	for(int i=0; i<3; i++)
	{
		e[i]->calsal();
		e[i]->Display();
	}
	return 0;
}
