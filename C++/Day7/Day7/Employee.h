#include<string>
using namespace std;

class Employee
{
	public:
	int empno;
	string name;
	int salary;
	string dept;

        void Accept();
        void Display() const;
};
