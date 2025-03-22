#include<iostream>
#include<string>
using namespace std;

class Student
{
	public:
	string rollno;
	string name;
	float marks;
	char division;

	Student();

	Student(const string rollno, const string name, const float marks, const char division);

        void Accept();
        void Display() const;
};	
