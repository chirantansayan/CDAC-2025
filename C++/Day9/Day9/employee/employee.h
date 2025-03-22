#include<string>
using namespace std;

class employee
{
	public:
		string name;
		string eid;
		double Salary;
	
		employee();
		virtual void Accept();
		virtual void Display();
		virtual void calsal() = 0;
};
