#include<iostream>
#include<string>
#include "Student.h"
using namespace std;

int main()
{
	string rollno, name;
	float marks = 0;
	char division;
	cout<<"Enter the single Student :"<<endl;
	cout<<"Enter rollno -> ";
	cin>>rollno;
	cout<<"Enter name -> ";
	cin>>name;
	cout<<"Enter marks -> ";
	cin>>marks;
	cout<<"Enter division -> ";
	cin>>division;
	Student stu(rollno, name, marks, division);

	int leng = 0;
	cout<<"Enter the length of Student array -> ";
	cin>>leng;
	cout<<"Enter the Student array :"<<endl;
	Student *stud = new Student[leng];
	for(int i=0; i<leng; i++)
	{
		stud[i].Accept();
	}
	cout<<"The Student array is :-"<<endl;
	for(int i=0; i<leng; i++)
	{
		stud[i].Display();
	}
	return 0;
}
