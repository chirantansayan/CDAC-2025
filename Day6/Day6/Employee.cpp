#include<iostream>
#include<cstring>
using namespace std;

class Employee
{
	public:
	int empno;
	string name;
	int salary;
	string dept;

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
};

void sortArray(Employee *const pointer ,int leng) //pointer constant
{
	int choice=0;
	cout<<"Enter choice to sort by 1.Employee number or 2.Name or 3.Salary "<<endl;
	cin>>choice;
	for(int i=0; i<leng; i++)
	{
		for(int j=0; j<leng-1-i; j++)
		{
			if(choice == 1)
			{
			if(pointer[j].empno > pointer[j+1].empno) //bubble_sort
			{

				Employee temp = pointer[j];
				pointer[j] = pointer[j+1];
				pointer[j+1] = temp;
			}
			}
			else if(choice == 2)
			{
			if(pointer[j].name > pointer[j+1].name) //bubble_sort
			{
				Employee temp = pointer[j];
				pointer[j] = pointer[j+1];
				pointer[j+1] = temp;
			}
			}
			else if(choice == 3)
			{
			if(pointer[j].salary > pointer[j+1].salary) //bubble_sort
			{
				Employee temp = pointer[j];
				pointer[j] = pointer[j+1];
				pointer[j+1] = temp;
			}
			}
			else
			{
			        cout<<"Wrong Choice"<<endl;
			        exit(0);
			}
		}
	}
	cout<<"The array after sort is :"<<endl;
}

int main()
{
	int leng = 0;
	cout<<"Enter the length of array : ";
	cin>>leng;
	Employee emp[leng];
	cout<<"Enter Employee details in array :"<<endl;
	for(int i=0; i<leng; i++)
	{
	        emp[i].Accept();
	}

	cout<<"The array before sort is :"<<endl;
	for(int j=0; j<leng; j++)
	{
	        emp[j].Display();
	}
	sortArray(emp,leng); //Pass only array_name in function
	for(int j=0; j<leng; j++)
	{
	        emp[j].Display();
	}
	return 0;
}
