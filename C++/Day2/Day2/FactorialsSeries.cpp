#include<iostream>
using namespace std;

void factorial(int number)
{
	for(int i=1; i<=number; i++)
	{
		int fact = 1;
		for(int j=1; j<=i; j++)
		{
			fact = fact * j;
		}
		cout<<fact<<" ";
	}
}

int main()
{
	int number = 0;
	cout<<"Enter the number till which you want factorials :"<<endl;
	cin>>number;
	cout<<"Factorials series is = ";
	factorial(number);
	cout<<endl;
	return 0;
}
