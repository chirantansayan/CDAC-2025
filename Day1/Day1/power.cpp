#include<iostream>
using namespace std;
int power(int pow, int number)
{
	int prod = 1;
	for(int i=1; i<=pow; i++)
	{
		prod = prod * number;
	}
	return prod;
}
int main()
{
	int number, pow, pow_num = 0;
	cout<<"Enter the number to find its power :"<<endl;
	cin>>number;
	cout<<"Enter the power figure :"<<endl;
	cin>>pow;
	pow_num = power(pow, number);
	cout<<"The powerful number is = "<<pow_num<<endl;
	return 0;
}
