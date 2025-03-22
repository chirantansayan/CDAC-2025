#include"employee.h"

class PermanentEmp : public employee
{
	public:
		double ta, hra;
	
		PermanentEmp();
		void calsal();
};

class ContractEmp : public employee
{
	public:
		double hrs, rate;
	
		ContractEmp();
		void calsal();
};
