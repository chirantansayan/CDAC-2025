#include<iostream>
using namespace std;
int swap(int &p,int &q)
{
	int temp;
	temp=p;
	p=q;
	q=temp;
	cout<<p<<"\t"<<q<<endl;
	return 0;
}
int main()
{
	int p,q;
	cout<<"Enter two numbers to swap "<<endl;
	cin>>p>>q;
	cout<<"Before Swap"<<endl;
	cout<<p<<"\t"<<q<<endl;
	cout<<"After Swap "<<endl;
	swap(p,q);
	return 0;
}


