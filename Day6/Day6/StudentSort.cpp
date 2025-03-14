#include<iostream>
#include<cstring>
using namespace std;

struct Student
{
	public:
	int rollNo;
	string name;
	float marks;
	char division;

	public:
        void Accept()
        {

	        cout<<"Enter the student roll number : ";
	        cin>>rollNo;
	        cout<<"Enter the student name : ";
	        cin>>name;
	        cout<<"Enter the student marks : ";
	        cin>>marks;
	        cout<<"Enter the student division : ";
	        cin>>division;
	        cout<<endl;
		cout<<endl;
	}
        void Display() const
        {
	        cout<<"The student details are :-"<<endl;
	        cout<<"Roll Number = "<<rollNo<<endl;
	        cout<<"Name = "<<name<<endl;
	        cout<<"Marks = "<<marks<<endl;
	        cout<<"Division = "<<division<<endl;
	        cout<<endl;
	}

};

void sortArray(Student *const pointer ,int leng) //pointer constant
{
	for(int i=0; i<leng; i++)
	{
		for(int j=0; j<leng-1-i; j++)
		{
			if(pointer[j].rollNo > pointer[j+1].rollNo) //bubble_sort
			{
				Student temp = pointer[j];
				pointer[j] = pointer[j+1];
				pointer[j+1] = temp;
			}
		}
	}
}

int main()
{
	int leng = 0;
	cout<<"Enter the length of array : ";
	cin>>leng;
	Student stud[leng];
	cout<<"Enter Student array :"<<endl;
	for(int i=0; i<leng; i++)
	{
	        stud[i].Accept();
	}

	cout<<"The array before sort is :"<<endl;
	for(int j=0; j<leng; j++)
	{
	        stud[j].Display();
	}
	cout<<"The array after sort is :"<<endl;
	sortArray(stud,leng); //Pass only array_name in function
	for(int j=0; j<leng; j++)
	{
	        stud[j].Display();
	}
	return 0;
}
