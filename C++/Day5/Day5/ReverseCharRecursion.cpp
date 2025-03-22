#include<iostream>
using namespace std;

int i = 0, j = 4;
char arr[5];
char array[] = {'A', 'B', 'C', 'D', 'E'};
void Reverse(char ch)
{
	if(i != 5)
	{
		arr[i] = ch;
		i++;
		j--;
		Reverse(array[j]);
	}
}

int main()
{
	cout<<"The reversed array is : ";

	Reverse(array[j]);
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
