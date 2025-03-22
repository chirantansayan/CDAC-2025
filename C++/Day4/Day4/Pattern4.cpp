#include<iostream>
using namespace std;

int main()
{
	int size = 0;
	cout<<"Enter the size of pattern : ";
	cin>>size;
	//Upper
	for(int i=1; i<=size; i++)
	{
		for(int j=size; j>=i; j--)
		        cout<<" ";		
		for(int j=1;j<=i;j++)
		        cout<<"*";
		for(int j=2;j<=i;j++)
		        cout<<"*";
		for(int j=size;j>=i;j--)
			cout<<" ";
		cout<<endl;
	}
	//Lower
	for(int i=size;i>=1;i--)
	{
		
		for(int j=size; j>=i; j--)
		        cout<<" ";		
		for(int j=1;j<=i;j++)
		        cout<<"*";
		for(int j=2;j<=i;j++)
		        cout<<"*";
		for(int j=size;j>=i;j--)
		        cout<<" ";
		cout<<endl;
	}
	return 0;			
}

