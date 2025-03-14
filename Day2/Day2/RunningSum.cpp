#include<iostream>
using namespace std;

int su = 0;
int sum(int n)
{
	if(n>=1)
	{	
	     su = su+n + sum(n-1);
	     n--;
	}
	return su;
}
int main()
{
	int n;
	cout<<"\nEnter range of number\n";
	cin>>n;
	cout<<sum(n)<<"\n";
	return 0;
}
