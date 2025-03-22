#include<iostream>
using namespace std;

void printArray(int student[], int n)
{
	cout<<"The array is :"<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<student[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int n,i;
	cout<<"Enter the size of array :"<<endl;
	cin>>n;
	int student[n];
	cout<<"Enter the elements of array :"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>student[i];
	}
	printArray(student,n);
	return 0;
}
