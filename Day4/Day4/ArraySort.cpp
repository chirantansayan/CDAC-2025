#include<iostream>
using namespace std;

void sortArray(int array[], int leng)
{
	for(int i=0; i<leng; i++)
	{
		for(int j=i+1; j<leng; j++)
		{
			if(array[i]>array[j])
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	cout<<"Sorted ";
}
void printArray(int array[], int leng)
{
	cout<<"Array is : ";
	for(int i=0; i<leng; i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int leng = 0;
	cout<<"Enter the length of array : ";
	cin>>leng;
	cout<<"Enter the array :"<<endl;
	int array[leng];

	for(int i=0; i<leng; i++)
	{
		cin>>array[i];
	}
	printArray(array, leng);
	sortArray(array, leng);
	printArray(array, leng);
	return 0;
}
