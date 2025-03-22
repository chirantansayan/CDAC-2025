#include<iostream>
using namespace std;
int fib(int n)
{
	if(n<=1)
	{
		return 1;
	}
		else
		{
			return fib(n-1)+fib(n-2);
	}
}

int main()
{
	cout<<"Enter the limit number : "<<endl;
	int number, i = 1;
	cin>>number;
	cout<<0<<" ";
	for(i=0;i<number;i++)
	{
	cout<<fib(i)<<" ";
	}
	cout<<endl;
	return 0;
}
