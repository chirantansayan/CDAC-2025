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

	Student()
	{
	}
	Student(const string rollno, const string name, const float marks, const char division)
	{
		this->rollno = rollno;
		this->name = name;
		this->marks = marks;
		this->division = division;
		cout<<"'this' is = "<<this<<endl;
		cout<<endl;
	}

        void Accept()
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
        void Display() const
        {
	        cout<<"The student details are :-"<<endl;
	        cout<<"Roll Number = "<<rollno<<endl;
	        cout<<"Name = "<<name<<endl;
	        cout<<"Marks = "<<marks<<endl;
	        cout<<"Division = "<<division<<endl;
	        cout<<endl;
	}
};

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
