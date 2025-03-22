#include<iostream>
using namespace std;

int fact = 1;
int factorial(int number)
{
	if (number != 0)
	{
		fact = fact * number * factorial(number-1);
	}
	return fact;
}

int main()
{
	int number = 0;
	cout<<"Enter the number :"<<endl;
	cin>>number;
	cout<<"Factorial is = ";
	cout<<factorial(number);
	cout<<endl;
	return 0;
}
