#include<iostream>
using namespace std;

int fact = 1;
int factorial(const int& ref) 
{
	//ref = 6;
	if (ref != 0)
	{
		fact = fact * ref * factorial(ref-1);
	}
	return fact;
}

int main()
{
	int number = 0;
	cout<<"Enter the number :"<<endl;
	cin>>number;
	const int& ref = number;
	cout<<"Factorial is = ";
	cout<<factorial(ref);
	cout<<endl;
	return 0;
}
