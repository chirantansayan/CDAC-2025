#include<iostream>
using namespace std;
int DecimaltoBinary(int n)
{
	if(n!=0)
	{
		
        DecimaltoBinary(n/2);
	cout<<(n%2);

	}
	return n;
}

int main()
{
	cout<<"Enter the number to convert : "<<endl;
	int number;
	cin>>number;
	DecimaltoBinary(number);
	return 0;
}
