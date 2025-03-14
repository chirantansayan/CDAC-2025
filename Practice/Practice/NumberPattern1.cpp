#include<iostream>
using namespace std;

int main()
{
	int size = 0, number = 1;
	cout<<"Enter the size : ";
	cin>>size;

	for(int i=0; i<size; i++)
	{
		for(int j=0; j<i; j++)
		{
			cout<<" "<<number;
			number++;
		}
		cout<<endl;
	}
	return 0;
}

