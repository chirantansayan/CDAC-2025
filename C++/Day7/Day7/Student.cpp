#include<iostream>
#include<string>
#include "Student.h"
using namespace std;


Student::Student():rollno(""),name(""),marks(0),division(0)
	{
	}
Student::Student(const string rollno, const string name, const float marks, const char division):rollno(rollno),name(name),marks(marks),division(division)
	{
	}

void Student::Accept()
        {
	        cout<<"Enter the student roll number : ";
	        cin>>rollno;
	        cout<<"Enter the student name : ";
	        cin>>name;
	        cout<<"Enter the student marks : ";
	        cin>>marks;
	        cout<<"Enter the student division : ";
	        cin>>division;
	        cout<<endl;
	}
void Student::Display() const
        {
	        cout<<"The student details are :-"<<endl;
	        cout<<"Roll Number = "<<rollno<<endl;
	        cout<<"Name = "<<name<<endl;
	        cout<<"Marks = "<<marks<<endl;
	        cout<<"Division = "<<division<<endl;
	        cout<<endl;
	}


