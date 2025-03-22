#include<iostream>
using namespace std;

void rotateLeft(int array[], int leng)
{
	int n = 0;
	cout<<"Enter how many elements to rotate : ";
	cin>>n;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<leng; j++)
		{
			if(j == leng-1)
			{
				break;
			}
			int temp = array[j];
			array[j] = array[j+1];
			array[j+1] = temp;
		}
	}
	cout<<"The new Array is :"<<endl;
	for(int i=0; i<leng; i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
}
void rotateRight(int array[], int leng)
{

	int n = 0;
	cout<<"Enter how many elements to rotate : ";
	cin>>n;
	for(int i=0; i<n; i++)
	{
		for(int j=leng-1; j>=0; j--)
		{
			if(j == 0)
			{
				break;
			}
			int temp = array[j];
			array[j] = array[j-1];
			array[j-1] = temp;
		}
	}
	cout<<"The new Array is :"<<endl;
	for(int i=0; i<leng; i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int leng = 0;
	cout<<"Enter the length of Array : ";
	cin>>leng;
	cout<<"Enter the array :"<<endl;
	
	int array[leng];
	for(int i=0; i<leng; i++)
	{
		cin>>array[i];
	}

	cout<<"---------------------- Menu ---------------------"<<endl;
	cout<<endl;
	cout<<" 1. Rotate Left"<<endl;
	cout<<" 2. Rotate Right"<<endl;
	cout<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<"Enter your choice : ";

	int choice = 0;
	cin>>choice;
	switch(choice)
	{
		case 1:
			{
				rotateLeft(array, leng);
				break;
			}
		case 2:
			{
				rotateRight(array, leng);
				break;
			}
		default:
			{
				cout<<"Wrong choice entered!"<<endl;
			}
	}
	return 0;
}
