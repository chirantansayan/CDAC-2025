#include<iostream>
using namespace std;
long double power(float r, float t)
{
	long double prod = 1;
	for(int i=1; i<=t; i++)
	{
		prod = prod * (1 +(r/100));
	}
	return prod;
}
int main()
{
	float p,r;
	int t;
	long double ci;
	cout<<"Enter principal,rate of interest and time"<<endl;
	cin>>p>>r>>t;
	ci = p * power(r, t);
	cout<<"The compound interest is : "<<ci<<endl;
	return 0;
}
