#include<iostream>
using namespace std;

int main()
{
	int size = 0;
	cout<<"Enter the size of pattern : ";
	cin>>size;

	for(int i=1; i<=size; i++)
	{
		for(int k=1;k<i;k++)
		{
			cout<<" ";
		}
		for(int j=size; j>=i; j--)
		{
		cout<<"*";		
		}
		cout<<endl;
	}
	return 0;
}
