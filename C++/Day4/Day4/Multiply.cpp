#include<iostream>
using namespace std;
int Multiply(int arr[], int n)
{
	int i;
	cout<<"The elements multiplied by 2 :"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]*2<<" ";
	}
	return 0;
}
int main()
{
	int i,n;
	cout<<"Enter the size of array :"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the values in array :"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	Multiply(arr,n);
	return 0;
}
