#include<iostream>
using namespace std;

int digiSum(int number)
{
	int temp = number, sum = 0;
	while(temp != 0)
	{
		int digit = temp % 10;
		sum = sum + digit;
		temp = temp / 10;
	}
	return sum;
}

int main()
{
	int number, sum = 0;
	cout<<"Enter the number to calculate sum of digits : "<<endl;
	cin>>number;
	if(number >999 && number <10000)
	{
	sum = digiSum(number);
	cout<<"The sum of digits is = "<<sum<<endl;
	} 
	else
	{
	cout<<"Invalid input"<<endl;
	}
	return 0;
}
