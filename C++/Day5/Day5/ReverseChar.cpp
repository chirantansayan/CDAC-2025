#include<iostream>
using namespace std;

void Reverse(char array[])
{
	char arr[5];
	int j=0;
	for(int i=4; i>=0; i--)
	{
		arr[j] = array[i];
		j++;
	}
	cout<<"Reversed array is :"<<endl;
	for(int k=0; k<5; k++)
	{
		cout<<arr[k]<<" ";
	}
	cout<<endl;
}

int main()
{
	char array[] = {'A', 'B', 'C', 'D', 'E'};
	Reverse(array);
	return 0;
}
