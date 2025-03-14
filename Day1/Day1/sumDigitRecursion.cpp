#include<iostream>
using namespace std;
int sum1(int n)
{
	int sum=0;
	if (n==0)
	{
	return sum;
	}
	return sum = n%10 + sum1(n/10);
}
int main()
{
	int n;
	cout<<"Enter a four digit "<<endl;
	cin>>n;
	if (n>999 && n<10000)
	{
		cout<<sum1(n)<<endl;
	}
	else
	{
		cout<<"Invalid Input"<<endl;
	}
	return 0;
}
