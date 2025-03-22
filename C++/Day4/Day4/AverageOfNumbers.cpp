#include<iostream>
using namespace std;

void displayAverage(int array[], int leng)
{
	float average = 0;
	int sum = 0;
	for(int i=0; i<leng; i++)
	{
		sum = sum + array[i];
	}
	average = sum/leng;
	cout<<"The average of numbers is = "<<average<<endl;
}

int main()
{
	int leng = 0;
	cout<<"Enter the number of values you want to average : ";
	cin>>leng;
	cout<<"Enter the values :"<<endl;

	int array[leng];
	for(int i=0; i<leng; i++)
	{
		cin>>array[i];
	}
	displayAverage(array, leng);
	return 0;
}
