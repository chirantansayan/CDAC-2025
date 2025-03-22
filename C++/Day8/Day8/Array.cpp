#include<iostream>
#include"Array.h"
#include<climits>
using namespace std;

Array::Array():size(5)
{
	cout<<"Default ctor"<<endl;
	this->arr = new int[this->size];
}
Array::Array(int size):size(size)
{
	cout<<"Parametrized ctor"<<endl;
	this->arr = new int[this->size];

}
Array::Array(const Array &x)
{
        this->size = x.size;
	this->arr = new int[this->size];
        for(int i=0;i<=size;i++)
        {
	        this->arr[i]=x.arr[i];
        }
}

void Array::Accept()
{
	cout<<"Enter the single integer array :"<<endl;
	for(int i=0; i<size; i++)
	{
		cin>>arr[i];
	}

}
void Array::Display()
{
	cout<<"The array is :"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void Array::sort()
{
	for(int i=0; i<size; i++)
	{
		for(int j=i+1; j<size; j++)
		{
			if(arr[i]>arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int Array::findmin()
{
	int mini=INT_MAX;
	for(int i=0; i<size; i++)
	{
		if(arr[i] < mini)
		{
			mini = arr[i];
	        }
	}
	return mini;
}	
int Array::findmax()
{
	int maxi=INT_MIN;
	for(int i=0; i<size; i++)
	{
		if(arr[i] > maxi)
		{
			maxi = arr[i];
		}
	}
	return maxi;
}

Array::~Array()
{
	cout<<"Dtor called"<<endl;
	delete []arr;
}
