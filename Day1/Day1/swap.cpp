#include<iostream>
using namespace std;
int swap(int a, int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<a<<" "<<b<<endl;
	return 0;
}
int main()
{
	int num1,num2;
	cout<<"Enter two numbers to swap"<<endl;
	cin>>num1>>num2;
	cout<<"After swap "<<swap(num1,num2);
	return 0;
}
