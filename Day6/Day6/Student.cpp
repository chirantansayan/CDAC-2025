#include<iostream>
using namespace std;

struct Student
{
	char rollNo[5];
	char name[10];
	float marks;
	char division;
};

void Accept(Student * const p)
{
	cout<<"Enter the student roll number : ";
	cin>>p->rollNo;
	cout<<"Enter the student name : ";
	cin>>p->name;
	cout<<"Enter the student marks : ";
	cin>>p->marks;
	cout<<"Enter the student division : ";
	cin>>p->division;
	cout<<endl;
	
}
void Display(const Student * const p)
{
	cout<<"The student details are :-"<<endl;
	cout<<"Roll Number = "<<p->rollNo<<endl;
	cout<<"Name = "<<p->name<<endl;
	cout<<"Marks = "<<p->marks<<endl;
	cout<<"Division = "<<p->division<<endl;
	cout<<endl;
}

int main()
{
	int i,n;
	cout<<"Enter the Size of array :"<<endl;
	cin>>n;
	Student S1[n];
	for(i = 0;i<n;i++)
	{	
	Accept(&S1[i]);
	}
	for(i = 0;i<n;i++)
	{
	Display(&S1[i]);
	}
	return 0;
}
