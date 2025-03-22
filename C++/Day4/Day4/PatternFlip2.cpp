#include<iostream>
using namespace std;

int main()
{
	int size = 0;
	cout<<"Enter the size of pattern : ";
	cin>>size;

	for(int i=1; i<=size; i++)
	{
		for(int k=size;k>=i;k--)
		{
			cout<<" ";
		}
		for(int j=1; j<=i; j++)
		{
		cout<<"*";		
		}
		cout<<endl;
	}
	return 0;
}
